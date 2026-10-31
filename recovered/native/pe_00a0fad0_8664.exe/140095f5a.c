/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095f5a */

undefined8 * FUN_140095f5a(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined1 local_9;
  
  if (param_3 + 2 == param_4 && param_3 != param_4) {
    FUN_140079c34(param_2,param_3,param_4,&local_9);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
  }
  return param_2;
}

