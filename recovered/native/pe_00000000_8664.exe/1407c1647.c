/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c1647 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407c1647(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  int unaff_retaddr;
  ulonglong uStack_18;
  uint uVar5;
  
  uVar5 = (uint)((ulonglong)unaff_RDI >> 0x20);
  uVar4 = (ulonglong)_DAT_150b5ed9f;
  *(undefined1 *)((ulonglong)*(uint *)(uVar4 + 0x14cc) + 0xfb) = 1;
  uVar2 = *(undefined4 *)(uVar4 + 0x14cc);
  uVar1 = unaff_retaddr + 0x11223347;
  if (uVar5 != 0) {
    uVar1 = 0x11223347;
  }
  uStack_18 = (ulonglong)uVar1;
  uVar4 = 0x103332d7;
  if (uVar5 != 0) {
    uVar4 = (ulonglong)uVar5;
  }
  FUN_14076b228();
  uVar3 = (ulonglong)((int)&uStack_18 + 4);
  *(undefined8 *)(uVar3 - 8) = 0;
  *(ulonglong *)(uVar3 - 0x10) = uVar4;
  *(undefined8 *)(uVar3 - 0x18) = 0x1407c1691;
  uVar2 = FUN_14075a0a4(uVar2);
  *(undefined8 *)(uVar3 - 0x18) = 0x1407c1698;
  FUN_14076b438();
  return uVar2;
}

