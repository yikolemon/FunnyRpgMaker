/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407850d1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407850d1(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)(_DAT_150b22832 + 0xe10);
  uStack_20 = 0;
  FUN_140754c50();
  uVar1 = (ulonglong)((int)&uStack_20 + 8);
  *(ulonglong *)(uVar1 - 8) = (ulonglong)unaff_retaddr;
  *(ulonglong *)(uVar1 - 0x10) = unaff_RDI >> 0x20;
  *(undefined8 *)(uVar1 - 0x18) = 0x1407850f8;
  FUN_140784f9f();
  uVar2 = (ulonglong)((int)(uVar1 - 0x10) + 8);
  *(undefined8 *)(uVar2 - 8) = 1;
  *(undefined8 *)(uVar2 - 0x10) = 0x140785102;
  FUN_140754d5e();
  return;
}

