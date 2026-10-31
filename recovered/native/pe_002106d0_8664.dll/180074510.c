/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180074510 */

undefined8 * FUN_180074510(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180001e92(local_48,param_3);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_180003012(param_1,&local_58,local_48);
  local_28 = param_1;
  FUN_180001ef2(local_48);
  *local_28 = std::system_error::vftable;
  return local_28;
}

