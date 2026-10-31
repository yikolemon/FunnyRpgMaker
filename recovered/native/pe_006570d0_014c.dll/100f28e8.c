/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f28e8 */

void __fastcall FUN_100f28e8(int *param_1)

{
  int *local_2c;
  int *local_28;
  char local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f55b0;
  local_1c = ExceptionList;
  local_28 = param_1 + 5;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_24 = '\x01';
  local_14 = 0;
  if (*(char *)((int)param_1 + 0x76) == '\0') {
    *(undefined1 *)((int)param_1 + 0x76) = 1;
    local_2c = param_1;
    (**(code **)(*param_1 + 0x10))(&local_28);
    param_1 = local_2c;
  }
  if (param_1[0x1c] == 0) {
    do {
      FUN_1022c750(param_1 + 0x11,local_28);
    } while (param_1[0x1c] == 0);
  }
  local_14 = 0xffffffff;
  if (local_24 == '\x01') {
    FUN_1022c200(local_28);
  }
  ExceptionList = local_1c;
  return;
}

