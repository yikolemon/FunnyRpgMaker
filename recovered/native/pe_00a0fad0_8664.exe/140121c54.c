/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121c54 */

bool FUN_140121c54(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_14036f000,0x100,2,local_res8);
  return BVar1 != 0;
}

