/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079c98 */

void thunk_FUN_140079c9d(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *param_2;
  *param_1 = 0x2000000000000000;
  return;
}

