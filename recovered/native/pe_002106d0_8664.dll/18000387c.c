/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000387c */

undefined8 * FUN_18000387c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  (**(code **)(*(longlong *)param_2[1] + 0x10))
            ((longlong *)param_2[1],local_48,*(undefined4 *)param_2);
  FUN_18000326e(param_1,local_48);
  local_28 = param_1;
  FUN_180001ef2(local_48);
  *local_28 = std::_System_error::vftable;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

