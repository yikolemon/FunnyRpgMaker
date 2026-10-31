/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180119ea6 */

float FUN_180119ea6(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  return (*(float *)(lVar1 + 0x15c) - *(float *)(lVar1 + 100)) + *(float *)(lVar1 + 0xd8);
}

