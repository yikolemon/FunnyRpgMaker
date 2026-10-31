/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134ab9 */

undefined4 __fastcall FUN_10134ab9(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (((param_2 == (float *)0x0) || (fVar1 = *param_2, fVar1 < *param_1 || fVar1 == *param_1)) &&
     ((param_3 == (float *)0x0 || (fVar1 = *param_3, *param_1 <= fVar1)))) {
    return 0;
  }
  *param_1 = fVar1;
  return 1;
}

