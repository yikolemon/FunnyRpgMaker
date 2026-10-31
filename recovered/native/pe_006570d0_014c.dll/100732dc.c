/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100732dc */

void __fastcall FUN_100732dc(int param_1)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2910;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  local_1c = param_1;
  FUN_10075412();
  local_c = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = std::ios_base::vftable;
  FUN_1022dae0((undefined4 *)(param_1 + 0x78));
  ExceptionList = local_14;
  return;
}

