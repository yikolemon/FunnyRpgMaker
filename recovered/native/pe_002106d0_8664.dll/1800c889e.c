/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c889e */

void thunk_FUN_18000590d(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *param_2;
  *param_1 = 0x1000000000000000;
  return;
}

