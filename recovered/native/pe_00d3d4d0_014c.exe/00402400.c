/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402400 */

void __fastcall FUN_00402400(int *param_1)

{
  int *piVar1;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_00406e00;
  local_1c = ExceptionList;
  local_14 = 0;
  local_2c = (int *)*param_1;
  ExceptionList = &local_1c;
  local_28 = local_2c;
  local_24 = param_1;
  while (piVar1 = (int *)*local_28, piVar1 != local_2c) {
    local_28 = piVar1;
    if ((int *)piVar1[0xb] != (int *)0x0) {
      local_14 = 0;
      (**(code **)(*(int *)piVar1[0xb] + 8))();
    }
  }
  FUN_00404f7c(local_24);
  local_14 = 0xffffffff;
  FUN_00404f16(local_24);
  ExceptionList = local_1c;
  return;
}

