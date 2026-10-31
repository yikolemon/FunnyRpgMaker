/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000af62 */

undefined8 * FUN_14000af62(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_140006874(local_78,param_3);
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_14000b068(local_58,&local_38,local_78);
  FUN_14000b166(param_1,local_58);
  local_28 = param_1;
  FUN_1400017de(local_58);
  *local_28 = std::_System_error::vftable;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

