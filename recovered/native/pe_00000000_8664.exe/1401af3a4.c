/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af3a4 */

bool FUN_1401af3a4(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_140f4f000,0x100,2,local_res8);
  return BVar1 != 0;
}

