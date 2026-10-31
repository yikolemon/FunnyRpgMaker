/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dd850 */

int FUN_1408dd850(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar7 = *(int *)(uVar5 + 0x10);
  if (iVar7 != 0) {
    uVar4 = (ulonglong)*(uint *)(uVar5 + 8);
    do {
      uVar4 = (ulonglong)((int)uVar4 + 2);
      uVar1 = *(ushort *)(uVar4 - 2);
      uVar3 = (uint)uVar1;
      uVar2 = *(ushort *)(ulonglong)*(uint *)(uVar5 + 0xc);
      *(uint *)(uVar5 + 0xc) = *(uint *)(uVar5 + 0xc) + 2;
      uVar6 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar6 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar6 = (uint)uVar2;
        }
      }
    } while (((uVar3 - uVar6 == 0) && (uVar3 != 0)) && (iVar7 = iVar7 + -1, iVar7 != 0));
    return uVar3 - uVar6;
  }
  return 0;
}

