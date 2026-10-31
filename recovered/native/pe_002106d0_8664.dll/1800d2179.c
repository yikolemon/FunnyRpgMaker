/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d2179 */

BOOL FUN_1800d2179(void)

{
  BOOL BVar1;
  LPVOID lpAddress;
  
  lpAddress = (LPVOID)FUN_1800d1c4c();
  if (lpAddress != (LPVOID)0x0) {
    BVar1 = VirtualFree(lpAddress,0,0x8000);
    return BVar1;
  }
  return 0;
}

