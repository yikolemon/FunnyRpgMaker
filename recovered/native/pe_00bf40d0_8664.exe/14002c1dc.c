/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002c1dc */

undefined8 *
FUN_14002c1dc(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  FUN_14002c316(param_1,param_2);
  FUN_14002c316(param_1 + 0x35,param_3);
  param_1[0x6a] = param_4;
  *(undefined4 *)(param_1 + 0x6b) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x35c) = param_6;
  FUN_14001b894(param_2);
  FUN_14001b894(param_3);
  return param_1;
}

