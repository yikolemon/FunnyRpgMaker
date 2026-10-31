/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483c90 */

int __cdecl FUN_00483c90(HANDLE param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(param_1);
  return (-(uint)(BVar1 != 0) & 0xfffffffc) + 4;
}

