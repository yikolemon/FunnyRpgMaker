/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004ef56 */

void FUN_1004ef56(void)

{
  int *piVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a8a0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10013efc();
  piVar1 = *(int **)(local_1c + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(local_1c + 0x38));
    *(undefined4 *)(local_1c + 0x5c) = 0;
  }
  FUN_1001cf94();
  FUN_1001cf94();
  FUN_10004eae();
  ExceptionList = local_14;
  return;
}

