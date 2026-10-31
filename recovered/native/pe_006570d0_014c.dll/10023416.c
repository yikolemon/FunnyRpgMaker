/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10023416 */

void __fastcall FUN_10023416(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100597b0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
    ExceptionList = local_10;
  }
  return;
}

