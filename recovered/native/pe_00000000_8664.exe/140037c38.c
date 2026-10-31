/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037c38 */

void FUN_140037c38(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = spdlog::logger::vftable;
  FUN_140038646(param_1 + 0x20);
  plVar1 = (longlong *)param_1[0x10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 9);
    param_1[0x10] = 0;
  }
  FUN_140038580(param_1 + 5);
  FUN_14000109c(param_1 + 1);
  return;
}

