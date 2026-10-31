/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400746a4 */

undefined4 *
FUN_1400746a4(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4)

{
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_14000892c();
  *(undefined1 *)(param_1 + 0x10) = *param_4;
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  FUN_140074750(param_1);
  return param_1;
}

