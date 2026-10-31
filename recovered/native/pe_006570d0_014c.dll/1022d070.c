/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d070 */

int FUN_1022d070(HANDLE param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(param_1);
  return (-(uint)(BVar1 != 0) & 0xfffffffc) + 4;
}

