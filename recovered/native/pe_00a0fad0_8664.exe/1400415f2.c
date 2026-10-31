/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400415f2 */

undefined8 * FUN_1400415f2(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *param_1 = std::system_error::vftable;
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_140041956(param_1 + 5,param_2 + 0x28);
  FUN_140041956(param_1 + 9,param_2 + 0x48);
  FUN_140006874(param_1 + 0xd,param_2 + 0x68);
  return param_1;
}

