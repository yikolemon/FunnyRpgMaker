/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2400 */

void FUN_1400b2400(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

