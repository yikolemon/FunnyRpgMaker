/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ced47 */

undefined8 * FUN_1800ced47(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_b0 [64];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = FUN_180239630(0xd8);
  FUN_1800231c2(local_b0);
  FUN_180001e92(local_70,"\r\n");
  FUN_180003216(local_50,param_2);
  FUN_180035102(local_30,local_50,0,local_70,local_b0);
  *param_1 = local_30;
  return param_1;
}

