/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1468 */

void FUN_100e1468(int param_1)

{
  int *piVar1;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100ea930;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  piVar1 = *(int **)(param_1 + 0x203c);
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_14;
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0x2018));
    *(undefined4 *)(param_1 + 0x203c) = 0;
  }
  ExceptionList = local_14;
  return;
}

