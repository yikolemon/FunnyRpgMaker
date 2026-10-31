/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007434a */

undefined8 * FUN_18007434a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = std::system_error::vftable;
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}

