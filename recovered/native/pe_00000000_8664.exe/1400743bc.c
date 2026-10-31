/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400743bc */

undefined8 *
FUN_1400743bc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  FUN_1400e0f8a();
  *param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_3;
  return param_1;
}

