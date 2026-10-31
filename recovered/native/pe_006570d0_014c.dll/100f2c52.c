/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2c52 */

void __fastcall FUN_100f2c52(undefined4 *param_1)

{
  undefined4 **ppuVar1;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100f55e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = std::_Associated_state<int>::vftable;
  local_18 = param_1;
  ppuVar1 = &local_18;
  if ((*(char *)((int)param_1 + 0x75) == '\x01') && (ppuVar1 = &local_18, param_1[0x1c] == 0)) {
    FUN_1022d570(param_1 + 5);
    ppuVar1 = (undefined4 **)local_14;
  }
  local_14 = (undefined1 *)ppuVar1;
  local_8 = 0xffffffff;
  FUN_10235380(local_18 + 3);
  ExceptionList = local_10;
  return;
}

