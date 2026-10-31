/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100161ee */

int FUN_100161ee(int param_1)

{
  char cVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058f80;
  local_1c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_1c;
  cVar1 = FUN_100162c8(&local_24,4);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
    ExceptionList = local_1c;
  }
  else {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    FUN_100164d2(local_24);
    local_14 = 0;
    cVar1 = FUN_100162c8(local_30,local_24);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    else {
      FUN_1001635a(&local_30);
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    ExceptionList = local_1c;
  }
  return param_1;
}

