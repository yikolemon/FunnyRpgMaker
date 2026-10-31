/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119e82 */

float FUN_180119e82(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  return (*(float *)(lVar1 + 0x158) - *(float *)(lVar1 + 0x60)) + *(float *)(lVar1 + 0xd4);
}

