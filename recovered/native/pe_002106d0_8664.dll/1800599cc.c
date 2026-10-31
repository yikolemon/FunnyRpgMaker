/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800599cc */

void FUN_1800599cc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  param_1[2] = *param_2;
  *param_1 = 0xb000000000000000;
  *(undefined4 *)(param_1 + 3) = *param_3;
  param_1[1] = 0x1000000000000008;
  return;
}

