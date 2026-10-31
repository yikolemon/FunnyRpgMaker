/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041fae */

void FUN_180041fae(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = spdlog::logger::vftable;
  FUN_1800429f8(param_1 + 0x20);
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 9);
    param_1[0x10] = 0;
  }
  FUN_180042932(param_1 + 5);
  FUN_180001ef2(param_1 + 1);
  return;
}

