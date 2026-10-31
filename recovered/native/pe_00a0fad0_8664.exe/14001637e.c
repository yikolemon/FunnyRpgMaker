/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001637e */

void FUN_14001637e(undefined8 *param_1)

{
  *param_1 = CLI::FormatterBase::vftable;
  FUN_14001623e(param_1 + 2,param_1 + 2,*(undefined8 *)(param_1[2] + 8));
  thunk_FUN_1400ddcd0(param_1[2],0x60);
  return;
}

