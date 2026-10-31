/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004bd26 */

void FUN_1004bd26(void)

{
  int *piVar1;
  int *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a7f0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_1004c01c();
  piVar1 = (int *)local_1c[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c);
    local_1c[9] = 0;
  }
  ExceptionList = local_14;
  return;
}

