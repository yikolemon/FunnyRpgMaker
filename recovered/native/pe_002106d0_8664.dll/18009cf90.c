/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009cf90 */

void FUN_18009cf90(undefined8 *param_1)

{
  *param_1 = Command::CommandSpecialClasses::Move::vftable;
  FUN_18009c894(param_1 + 0x10);
  FUN_180004cea(param_1 + 0xc);
  *param_1 = Command::Command::vftable;
  FUN_180004cea(param_1 + 9);
  FUN_18006db58(param_1 + 5);
  FUN_180004cea(param_1 + 1);
  return;
}

