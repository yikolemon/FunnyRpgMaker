/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c214 */

void __fastcall FUN_1011c214(int param_1)

{
  void *pvVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  pvVar1 = ExceptionList;
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1012c9d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_18 = param_1;
    FUN_100fa2cb(*(int *)(param_1 + 0x2c));
    ExceptionList = local_10;
    pvVar1 = ExceptionList;
  }
  ExceptionList = pvVar1;
  return;
}

