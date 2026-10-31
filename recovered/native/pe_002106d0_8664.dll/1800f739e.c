/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f739e */

undefined8 * FUN_1800f739e(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_180239900(param_1,&DAT_1803861e4);
  *param_1 = std::future_error::vftable;
  uVar1 = FUN_1800f7503();
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = uVar1;
  return param_1;
}

