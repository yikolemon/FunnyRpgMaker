/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001ed2c */

undefined8 * FUN_18001ed2c(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined1 local_9;
  
  if (param_3 + 1 == param_4 && param_3 != param_4) {
    FUN_180017a78(param_2,param_3,param_4,&local_9);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  return param_2;
}

