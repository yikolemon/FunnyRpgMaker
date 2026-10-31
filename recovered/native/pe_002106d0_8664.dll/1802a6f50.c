/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a6f50 */

void FUN_1802a6f50(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

