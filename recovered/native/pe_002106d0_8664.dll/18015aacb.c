/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015aacb */

float FUN_18015aacb(float param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18010128e();
  return param_1 * *(float *)(lVar1 + 0x544);
}

