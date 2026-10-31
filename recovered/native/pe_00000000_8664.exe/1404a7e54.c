/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a7e54 */

bool FUN_1404a7e54(void)

{
  char cVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = FUN_1404a7f3c();
  if (cVar1 == '\0') {
    FUN_1404a3490(local_res8);
  }
  return local_res8[0] != 1;
}

