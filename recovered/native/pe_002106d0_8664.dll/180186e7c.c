/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180186e7c */

undefined8 *
FUN_180186e7c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  FUN_180195a16();
  *param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_3;
  return param_1;
}

