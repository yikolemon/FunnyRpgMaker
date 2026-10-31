/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100385a8 */

void FUN_100385a8(undefined4 *param_1)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10059b80;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = (undefined4 *)FUN_10228350(0x28);
  local_c = 0;
  *(undefined8 *)(local_1c + 8) = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  *local_1c = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  FUN_10040c88();
  *param_1 = local_1c;
  ExceptionList = local_14;
  return;
}

