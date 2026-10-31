/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005015e */

undefined8 *
FUN_14005015e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  if (((int)param_5 < 0) || (param_5 < 1000000000)) {
    FUN_14004e913(param_1);
  }
  else {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  return param_1;
}

