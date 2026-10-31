/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012bf4a */

undefined4 * FUN_18012bf4a(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_180102463(0,(*(float *)(param_1 + 0x14) - param_3[1]) - param_4[1]);
  uVar2 = FUN_180102463(0,(*(float *)(param_1 + 0x10) - *param_3) - *param_4);
  *param_2 = uVar2;
  param_2[1] = uVar1;
  return param_2;
}

