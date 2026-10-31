/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cedb5 */

BOOL FUN_100cedb5(undefined4 param_1)

{
  LPVOID lpAddress;
  BOOL BVar1;
  
  lpAddress = (LPVOID)FUN_100ce70c(param_1);
  if (lpAddress != (LPVOID)0x0) {
    BVar1 = VirtualFree(lpAddress,0,0x8000);
    return BVar1;
  }
  return 0;
}

