/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dd74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076dd74(void)

{
  uint uVar1;
  ulonglong unaff_RBX;
  ulonglong *puVar2;
  uint unaff_EBP;
  ulonglong uVar3;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong auStack_30 [2];
  
  uVar3 = (ulonglong)_DAT_150b0b4d2;
  auStack_30[1] = 0;
  puVar2 = auStack_30;
  uStack_38 = 0x14076dd94;
  auStack_30[0] = unaff_RBX >> 0x20;
  uVar1 = FUN_14075a0a4(*(undefined4 *)(uVar3 + 0x14cc));
  if ((*(byte *)(uVar3 + 0x27b4) & 8) != 0) {
    uStack_48 = 0x1035587a;
    uStack_40 = unaff_RBX >> 0x20;
    uStack_38 = (ulonglong)uVar1;
    FUN_1407518b6();
    puVar2 = (ulonglong *)(ulonglong)((int)&uStack_48 + 0xc);
  }
  *(ulonglong *)((longlong)puVar2 + -8) = (ulonglong)unaff_EBP;
  *(ulonglong *)((longlong)puVar2 + -0x10) = (ulonglong)uVar1;
  *(undefined8 *)((longlong)puVar2 + -0x18) = 0x14076ddb5;
  FUN_14076ddbd();
  return;
}

