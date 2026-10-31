/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b75e */

undefined8 * FUN_14000b75e(undefined8 *param_1,longlong param_2)

{
  longlong local_30;
  undefined1 local_28;
  longlong *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *param_1 = std::exception::vftable;
  local_20 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = 1;
  local_30 = param_2;
  local_18 = param_1;
  FUN_14008db00(&local_30,local_20);
  *local_18 = std::runtime_error::vftable;
  return local_18;
}

