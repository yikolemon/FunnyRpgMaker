/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001edae */

undefined4 * FUN_1001edae(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 local_9;
  
  if (param_2 + 1 == param_3 && param_2 != param_3) {
    FUN_10017e26(param_2,param_3,&local_9);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
  }
  return param_1;
}

