/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140092f76 */

void FUN_140092f76(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2 - *param_1 >> 1;
  if (param_3 <= lVar1) {
    lVar1 = param_3;
  }
  *param_1 = *param_1 + lVar1 * 2;
  return;
}

