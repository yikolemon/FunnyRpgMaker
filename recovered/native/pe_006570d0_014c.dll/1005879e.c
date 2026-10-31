/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005879e */

void __thiscall FUN_1005879e(int param_1,char param_2)

{
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_14 = &LAB_10058e50;
  local_18 = ExceptionList;
  local_24 = param_1 + 4;
  local_10 = 0xffffffff;
  ExceptionList = &local_18;
  local_20 = param_1;
  FUN_10001fee();
  if (param_2 == '\0') {
    ExceptionList = local_18;
  }
  else {
    FUN_102283a0(param_1,0x1c);
    ExceptionList = local_18;
  }
  return;
}

