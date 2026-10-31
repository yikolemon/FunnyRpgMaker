/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400710b8 */

void FUN_1400710b8(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_14005a8ba(*param_1,param_1[1] + 0x20);
  }
  if (param_1[1] != 0) {
    thunk_FUN_1400ddcd0(param_1[1],0x50);
    return;
  }
  return;
}

