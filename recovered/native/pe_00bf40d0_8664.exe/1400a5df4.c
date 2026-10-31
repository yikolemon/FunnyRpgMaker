/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5df4 */

bool FUN_1400a5df4(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_1400a5ed8();
  if ((char)uVar1 == '\0') {
    FUN_1400a21f4(local_res8);
  }
  return local_res8[0] != 1;
}

