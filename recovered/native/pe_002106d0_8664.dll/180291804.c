/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291804 */

bool FUN_180291804(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_180450000,0x100,2,local_res8);
  return BVar1 != 0;
}

