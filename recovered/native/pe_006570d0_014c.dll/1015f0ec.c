/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015f0ec */

void __thiscall FUN_1015f0ec(int param_1,char param_2)

{
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_14 = &LAB_1015f5e0;
  local_18 = ExceptionList;
  local_24 = param_1 + 4;
  local_10 = 0xffffffff;
  ExceptionList = &local_18;
  local_20 = param_1;
  FUN_10004eae();
  if (param_2 == '\0') {
    ExceptionList = local_18;
  }
  else {
    FUN_102283a0(param_1,0x10);
    ExceptionList = local_18;
  }
  return;
}

