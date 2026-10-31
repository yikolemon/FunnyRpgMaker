/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e092 */

uint * FUN_1002e092(uint *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint local_38;
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  int local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059990;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10025df0(&local_38);
  local_14 = 0;
  piVar2 = (int *)FUN_1000c417(&local_38);
  local_14 = 0xffffffff;
  if (piStack_34 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piStack_34 + 8))();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  (**(code **)(*piVar2 + 0x14))(&local_38);
  local_14 = 1;
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar2 + 0x10))();
  }
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_24,local_28);
  *param_1 = local_38;
  param_1[1] = (uint)piStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  local_28 = 0;
  uStack_24 = 0xf;
  local_38 = local_38 & 0xffffff00;
  *(undefined1 *)(param_1 + 6) = uVar1;
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

