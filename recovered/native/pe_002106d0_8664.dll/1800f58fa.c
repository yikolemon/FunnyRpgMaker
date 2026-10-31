/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f58fa */

longlong FUN_1800f58fa(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_1800f59be(param_1,param_2,param_4);
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return param_1;
}

