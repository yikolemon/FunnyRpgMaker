/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402889dc */

undefined8 * FUN_1402889dc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*param_3 == -1) {
    FUN_14028958a(param_2,*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38),&local_1a);
  }
  else {
    FUN_14028958a(param_2,*param_3,&local_19);
  }
  FUN_1402894e4(param_1 + 0x10,param_2);
  return param_2;
}

