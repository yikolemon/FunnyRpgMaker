/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006cbde */

longlong FUN_14006cbde(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_140006874();
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = *param_3;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)param_3 = 0;
  param_3[1] = 0;
  return param_1;
}

