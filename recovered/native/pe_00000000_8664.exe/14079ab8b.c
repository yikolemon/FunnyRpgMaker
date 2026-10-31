/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ab8b */

void thunk_FUN_1407aa347(undefined4 *param_1,undefined1 param_2)

{
  param_1[0x28e] = 0x630000;
  param_1[0x28f] = 0;
  param_1[0x290] = 999;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 5) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x17) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  return;
}

