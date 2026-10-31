/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012654c */

bool FUN_14012654c(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_140126534();
  if (cVar1 == '\0') {
    FUN_14012237c(local_res8);
  }
  return local_res8[0] != 1;
}

