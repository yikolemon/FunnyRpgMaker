/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b44c4 */

bool FUN_1401b44c4(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_1401b45a8();
  if (cVar1 == '\0') {
    FUN_1401afb60(local_res8);
  }
  return local_res8[0] != 1;
}

