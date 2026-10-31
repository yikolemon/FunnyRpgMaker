/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016321c */

longlong FUN_18016321c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_180003216();
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = *param_3;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)param_3 = 0;
  param_3[1] = 0;
  return param_1;
}

