/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296984 */

bool FUN_180296984(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_180296a6c();
  if (cVar1 == '\0') {
    FUN_180291fc0(local_res8);
  }
  return local_res8[0] != 1;
}

