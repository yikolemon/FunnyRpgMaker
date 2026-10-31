/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000482c */

void Unwind_14000482c(void)

{
  char *in_RAX;
  undefined8 uVar1;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  if ((char)in_RAX == '\0') {
    uVar1 = FUN_14000d7d0(unaff_RBP + -8);
    FUN_14001604a(uVar1);
  }
  else {
    FUN_14000372c();
  }
  return;
}

