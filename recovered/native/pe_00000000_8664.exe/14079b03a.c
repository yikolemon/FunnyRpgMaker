/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079b03a */

void FUN_14079b03a(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint unaff_EBP;
  uint *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  puVar4 = (uint *)(param_2 & 0xffffffff);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = 0;
  uStack_28 = (ulonglong)unaff_EBP;
  FUN_1407aa2e8();
  uVar2 = (ulonglong)((int)&uStack_38 + 0xc);
  *(undefined8 *)(uVar2 - 8) = *(undefined8 *)((param_1 & 0xffffffff) + 0x10);
  *(undefined8 *)(uVar2 - 0x10) = 0x14079b061;
  FUN_1407a9e28(param_1 & 0xffffffff,0);
  uVar3 = (ulonglong)((int)(uVar2 - 8) + 4);
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  if (0 < (int)unaff_EBP) {
    *(ulonglong *)(uVar3 - 8) = (ulonglong)unaff_EBP;
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 + 0x10);
    *(undefined8 *)(uVar3 - 0x18) = 0x14079b07e;
    iVar1 = FUN_1407a9e5b(param_1 & 0xffffffff,0);
    if (0 < iVar1) {
      puVar4[2] = unaff_EBP;
      puVar4[1] = unaff_EBP;
      *puVar4 = unaff_EBP;
      *(undefined1 *)((longlong)puVar4 + 0x16) = 0;
    }
  }
  return;
}

