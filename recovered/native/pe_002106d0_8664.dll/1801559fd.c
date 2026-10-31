/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801559fd */

void FUN_1801559fd(undefined8 param_1,undefined4 *param_2)

{
  if (param_2[1] != param_2[2]) {
    FUN_1801562f7(param_2);
    FUN_180147726(param_1,param_2);
    *param_2 = param_2[2];
    param_2[1] = param_2[2];
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}

