/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140783bd2 */

/* WARNING: Instruction at (ram,0x000140783bff) overlaps instruction at (ram,0x000140783bfe)
    */

void FUN_140783bd2(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  iVar2 = (int)param_1;
  piVar4 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xc);
  iVar1 = *(int *)(param_1 + 0x24);
  *piVar4 = iVar1;
  if (iVar1 != 0) {
    do {
      piVar4[2] = *(int *)(CONCAT44(uVar3,iVar2) + 0x2c);
      *piVar4 = *piVar4 << 2;
      piVar4[1] = iVar2 + 0x34U;
      uVar7 = iVar2 + 0x3c;
      uVar6 = (ulonglong)*(uint *)(ulonglong)(iVar2 + 0x34U);
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      *(undefined8 *)(piVar4 + -4) = *(undefined8 *)piVar4;
      *(ulonglong *)(piVar4 + -6) = uVar6;
      piVar4[-8] = 0x40783c11;
      piVar4[-7] = 1;
      FUN_14075bb34();
      uVar5 = (ulonglong)((int)(piVar4 + -6) + 0xc);
      *(undefined8 *)(uVar5 - 8) = 0;
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar7;
      *(ulonglong *)(uVar5 - 0x18) = uVar6;
      *(undefined8 *)(uVar5 - 0x20) = 0x140783c1c;
      FUN_140765bf8();
      piVar4 = (int *)(ulonglong)((int)(uVar5 - 0x18) + 0xc);
    } while (*piVar4 != 4);
  }
  return;
}

