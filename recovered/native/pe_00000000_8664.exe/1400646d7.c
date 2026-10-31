/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400646d7 */

void FUN_1400646d7(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2 - *param_1 >> 1;
  if (param_3 <= lVar1) {
    lVar1 = param_3;
  }
  *param_1 = *param_1 + lVar1 * 2;
  return;
}

