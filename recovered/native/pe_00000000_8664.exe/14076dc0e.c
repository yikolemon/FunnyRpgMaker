/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dc0e */

void FUN_14076dc0e(void)

{
  ulonglong uVar1;
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = 2;
  FUN_14076da77();
  uVar1 = (ulonglong)((int)&uStack_20 + 8);
  *(ulonglong *)(uVar1 - 8) = (ulonglong)unaff_retaddr;
  *(ulonglong *)(uVar1 - 0x10) = unaff_RDI >> 0x20;
  *(undefined8 *)(uVar1 - 0x18) = 0x14076dc2b;
  FUN_140784f9f();
  thunk_FUN_140762c14();
  return;
}

