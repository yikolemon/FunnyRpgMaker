/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100139b0 */

int FUN_100139b0(int param_1)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_30;
  int local_2c;
  char local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100161ee(&local_30);
  if (local_24 == '\x01') {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    local_14 = 0;
    FUN_1000254c(local_30,local_2c - local_30);
    local_14 = 1;
    FUN_100143a8(&local_48);
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
    local_14 = 0xffffffff;
  }
  if (local_24 == '\x01') {
    FUN_10004eae();
  }
  ExceptionList = local_1c;
  return param_1;
}

