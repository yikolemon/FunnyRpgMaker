/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076eeac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076eeac(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong uVar6;
  uint unaff_EBP;
  ulonglong uVar7;
  ulonglong uStack_28;
  
  uVar7 = (ulonglong)_DAT_150b0c60a;
  uVar1 = *(uint *)((unaff_RBX >> 0x20) + 0x3a8);
  uStack_28 = (ulonglong)uVar1;
  uVar4 = *(uint *)((ulonglong)unaff_EBP + 0x3a8);
  uVar3 = FUN_14076252a();
  uVar5 = (ulonglong)((int)&uStack_28 + 4);
  *(ulonglong *)(uVar5 - 8) = (ulonglong)uVar4;
  *(undefined8 *)(uVar5 - 0x10) = 0x14076eedb;
  uVar4 = FUN_14076252a();
  uVar6 = (ulonglong)((int)(uVar5 - 8) + 4);
  if ((int)uVar3 < (int)uVar4) {
    iVar2 = *(int *)(uVar7 + 0x148c);
    *(ulonglong *)(uVar6 - 8) = (ulonglong)((uVar4 + ~uVar3) * 4);
    *(ulonglong *)(uVar6 - 0x10) = (ulonglong)(iVar2 + uVar3 * 4 + 4);
    *(ulonglong *)(uVar6 - 0x18) = (ulonglong)(iVar2 + uVar3 * 4);
    *(undefined8 *)(uVar6 - 0x20) = 0x14076ef08;
    FUN_1408b31a0();
    *(uint *)(((ulonglong)*(uint *)(uVar7 + 0x148c) - 4) + (ulonglong)uVar4 * 4) = uVar1;
  }
  else {
    iVar2 = *(int *)(uVar7 + 0x148c);
    *(ulonglong *)(uVar6 - 8) = (ulonglong)((uVar3 - uVar4) * 4);
    *(ulonglong *)(uVar6 - 0x10) = (ulonglong)(iVar2 + uVar4 * 4);
    *(ulonglong *)(uVar6 - 0x18) = (ulonglong)(iVar2 + uVar4 * 4 + 4);
    *(undefined8 *)(uVar6 - 0x20) = 0x14076ef31;
    FUN_1408b31a0();
    *(uint *)((ulonglong)*(uint *)(uVar7 + 0x148c) + (ulonglong)uVar4 * 4) = uVar1;
  }
  return;
}

