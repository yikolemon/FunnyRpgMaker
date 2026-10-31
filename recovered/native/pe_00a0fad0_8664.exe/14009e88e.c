/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009e88e */

void FUN_14009e88e(undefined8 *param_1)

{
  *param_1 = Command::CommandSpecialClasses::Move::vftable;
  FUN_14009e0b8(param_1 + 0x10);
  FUN_140016e5c(param_1 + 0xc);
  *param_1 = Command::Command::vftable;
  FUN_140016e5c(param_1 + 9);
  FUN_140041304(param_1 + 5);
  FUN_140016e5c(param_1 + 1);
  return;
}

