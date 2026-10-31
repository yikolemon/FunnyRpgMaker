/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004824 */

void Unwind_140004824(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  
  cVar1 = FUN_14000e3e0(param_1,unaff_RBP + -0x28);
  if (cVar1 == '\0') {
    uVar2 = FUN_14000d7d0(unaff_RBP + -8);
    FUN_14001604a(uVar2);
  }
  else {
    FUN_14000372c();
  }
  return;
}

