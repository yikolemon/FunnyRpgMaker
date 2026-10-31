/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c055c */

void thunk_FUN_1400cf677(undefined8 *param_1,undefined1 param_2)

{
  param_1[0x147] = 0x630000;
  *(undefined4 *)(param_1 + 0x148) = 999;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x17) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

