/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cbea6 */

void __fastcall FUN_100cbea6(int param_1)

{
  int *piVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100cc570;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_14;
    local_1c = param_1;
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  ExceptionList = local_14;
  return;
}

