/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000a824 */

undefined4 Unwind_14000a824(void)

{
  undefined4 uVar1;
  longlong unaff_RBP;
  
  FUN_140009aba();
  FUN_140009f7a();
  uVar1 = FUN_14000babc();
  FUN_14000109c(unaff_RBP + 0x30);
  FUN_14000a054(unaff_RBP + -0x10);
  FUN_14000109c(unaff_RBP + 0x50);
  FUN_14000109c(unaff_RBP + 0x70);
  FUN_14000bbee(unaff_RBP + -0x50);
  return uVar1;
}

