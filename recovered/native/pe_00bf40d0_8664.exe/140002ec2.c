/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002ec2 */

undefined8 * FUN_140002ec2(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14008db00((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = std::system_error::vftable;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_14000347a(param_1 + 5,(undefined8 *)(param_2 + 0x28));
  FUN_14000347a(param_1 + 9,(undefined8 *)(param_2 + 0x48));
  FUN_1400038fa(param_1 + 0xd,(undefined8 *)(param_2 + 0x68));
  return param_1;
}

