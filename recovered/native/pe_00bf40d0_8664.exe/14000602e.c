/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000602e */

undefined8 * FUN_14000602e(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48 [4];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1400029cc(local_48,param_3);
  local_58 = *param_2;
  uStack_50 = param_2[1];
  FUN_1400036f6(param_1,&local_58,local_48);
  local_28 = param_1;
  FUN_1400021ea((longlong *)local_48);
  *local_28 = std::system_error::vftable;
  return local_28;
}

