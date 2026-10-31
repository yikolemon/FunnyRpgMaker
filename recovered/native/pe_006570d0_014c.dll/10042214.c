/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042214 */

void __fastcall FUN_10042214(int param_1)

{
  undefined1 auStack_48 [28];
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_48;
  local_18 = &LAB_1005a450;
  local_1c = ExceptionList;
  local_28 = *(undefined4 **)(param_1 + 0x20);
  local_2c = *(undefined4 **)(param_1 + 0x24);
  ExceptionList = &local_1c;
  local_24 = param_1;
  if (local_28 != local_2c) {
    do {
      local_14 = 0;
      (**(code **)(*(int *)*local_28 + 8))();
      local_28 = local_28 + 2;
    } while (local_28 != local_2c);
  }
  ExceptionList = local_1c;
  return;
}

