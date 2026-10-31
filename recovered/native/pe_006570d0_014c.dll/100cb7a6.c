/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb7a6 */

void FUN_100cb7a6(int *param_1)

{
  int *piVar1;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc4f0;
  local_1c = ExceptionList;
  local_24 = *param_1;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  local_28 = *(int **)(local_24 + 0x94);
  piVar1 = local_28;
  while (piVar1 = (int *)*piVar1, piVar1 != local_28) {
    local_2c = piVar1;
    (**(code **)(*(int *)piVar1[8] + 0xc))();
    piVar1 = local_2c;
  }
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  ExceptionList = local_1c;
  return;
}

