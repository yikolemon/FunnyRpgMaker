/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102789cf */

bool FUN_102789cf(void)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  cVar1 = FUN_10278a42();
  if (cVar1 == '\0') {
    FUN_10274e8a(&local_8);
  }
  return local_8 != 1;
}

