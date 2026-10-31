/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801559ac */

void FUN_1801559ac(undefined4 *param_1)

{
  if (param_1[1] != param_1[2]) {
    FUN_1801562f7();
    *param_1 = param_1[1];
    param_1[2] = param_1[1];
    *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  }
  return;
}

