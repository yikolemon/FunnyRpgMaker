/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041a3a */

void __fastcall FUN_10041a3a(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a3f0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = spdlog::logger::vftable;
  local_c = 0xffffffff;
  local_1c = param_1;
  FUN_10042524();
  puVar2 = local_1c;
  piVar1 = (int *)local_1c[0x17];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c + 0xe);
    puVar2[0x17] = 0;
  }
  FUN_10042460();
  FUN_10001fee();
  ExceptionList = local_14;
  return;
}

