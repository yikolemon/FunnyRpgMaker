/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499bdf */

bool FUN_00499bdf(void)

{
  uint uVar1;
  void *this;
  int local_8;
  
  local_8 = 0;
  uVar1 = FUN_00499c52();
  if ((char)uVar1 == '\0') {
    FUN_00496b6f(this,&local_8);
  }
  return local_8 != 1;
}

