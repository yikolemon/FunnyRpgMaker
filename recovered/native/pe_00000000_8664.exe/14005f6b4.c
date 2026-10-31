/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005f6b4 */

undefined8 * FUN_14005f6b4(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined1 local_9;
  
  if (param_3 + 2 == param_4 && param_3 != param_4) {
    FUN_14004060c(param_2,param_3,param_4,&local_9);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 7;
  }
  return param_2;
}

