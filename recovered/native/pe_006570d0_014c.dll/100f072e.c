/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f072e */

void __fastcall FUN_100f072e(int *param_1)

{
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100f5380;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    (*(code *)**(undefined4 **)*param_1)(1);
    ExceptionList = local_10;
  }
  return;
}

