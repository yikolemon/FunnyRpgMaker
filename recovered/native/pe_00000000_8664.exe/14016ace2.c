/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ace2 */

void FUN_14016ace2(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  FUN_1401c5830(param_1,0,0x1828);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

