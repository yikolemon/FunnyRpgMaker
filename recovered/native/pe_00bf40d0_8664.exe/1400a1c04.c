/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1c04 */

bool FUN_1400a1c04(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_140151000,0x100,2,local_res8);
  return BVar1 != 0;
}

