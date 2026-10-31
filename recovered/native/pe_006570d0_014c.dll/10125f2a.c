/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125f2a */

int __fastcall FUN_10125f2a(int param_1)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012cb70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_14 = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_24 = param_1;
  FUN_1018df3a();
  ExceptionList = local_1c;
  return local_24;
}

