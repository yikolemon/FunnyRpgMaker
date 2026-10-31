/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f791a */

undefined8 *
FUN_1800f791a(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_180247220();
  if (param_3 != 0) {
    FUN_1802475b0(param_1,param_2,param_3,param_4,param_1,uVar1);
  }
  return param_1;
}

