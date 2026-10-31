/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180092cd3 */

void FUN_180092cd3(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2 - *param_1 >> 1;
  if (param_3 <= lVar1) {
    lVar1 = param_3;
  }
  *param_1 = *param_1 + lVar1 * 2;
  return;
}

