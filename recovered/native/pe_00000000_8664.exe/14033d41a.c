/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033d41a */

undefined4 * FUN_14033d41a(longlong param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_140313933(0,(*(float *)(param_1 + 0x14) - param_3[1]) - param_4[1]);
  uVar2 = FUN_140313933(0,(*(float *)(param_1 + 0x10) - *param_3) - *param_4);
  *param_2 = uVar2;
  param_2[1] = uVar1;
  return param_2;
}

