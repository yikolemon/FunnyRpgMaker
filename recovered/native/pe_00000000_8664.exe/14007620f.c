/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007620f */

float FUN_14007620f(float param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14007a54a();
  return param_1 * *(float *)(lVar1 + 0x544);
}

