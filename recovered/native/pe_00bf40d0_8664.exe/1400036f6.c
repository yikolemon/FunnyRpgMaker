/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400036f6 */

undefined8 * FUN_1400036f6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong local_78 [4];
  longlong local_58 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1400038fa(local_78,param_3);
  local_38 = *param_2;
  uStack_30 = param_2[1];
  FUN_1400037fc(local_58,(undefined4 *)&local_38,local_78);
  FUN_140003952(param_1,local_58);
  local_28 = param_1;
  FUN_1400021ea(local_58);
  *local_28 = std::_System_error::vftable;
  uVar1 = param_2[1];
  local_28[3] = *param_2;
  local_28[4] = uVar1;
  return local_28;
}

