/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000340e */

undefined8 * FUN_14000340e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  local_18 = param_1;
  FUN_1400036f6(param_1,&local_28,param_3);
  *local_18 = std::system_error::vftable;
  return local_18;
}

