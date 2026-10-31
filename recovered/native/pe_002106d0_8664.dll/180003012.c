/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003012 */

undefined8 * FUN_180003012(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180003216(local_78,param_3);
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_180003118(local_58,&local_38,local_78);
  FUN_18000326e(param_1,local_58);
  local_28 = param_1;
  FUN_180001ef2(local_58);
  *local_28 = std::_System_error::vftable;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

