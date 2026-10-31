/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ce8dc */

void FUN_1400ce8dc(undefined4 *param_1)

{
  if (param_1[1] != param_1[2]) {
    FUN_1400cf227();
    *param_1 = param_1[1];
    param_1[2] = param_1[1];
    *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  }
  return;
}

