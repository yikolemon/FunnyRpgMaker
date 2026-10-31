/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100739a6 */

undefined4 __thiscall FUN_100739a6(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c29a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = *(int **)(*(int *)(param_1 + 0x30) + 4);
  (**(code **)(*local_24 + 4))();
  local_14 = 0;
  piVar1 = (int *)FUN_1001c23e(local_28);
  uVar2 = (**(code **)(*piVar1 + 0x20))((int)param_2);
  local_14 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*local_24 + 8))();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return uVar2;
}

