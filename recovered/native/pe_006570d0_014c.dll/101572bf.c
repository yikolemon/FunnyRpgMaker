/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101572bf */

float FUN_101572bf(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_100fcb2d();
  return param_1 * *(float *)(iVar1 + 0x544);
}

