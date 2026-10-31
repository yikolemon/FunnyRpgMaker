/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041cb9 */

void FUN_180041cb9(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_3;
  uStack_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  FUN_180001e92(local_48,*param_2);
  FUN_180041d44(param_1,local_48,&local_28);
  return;
}

