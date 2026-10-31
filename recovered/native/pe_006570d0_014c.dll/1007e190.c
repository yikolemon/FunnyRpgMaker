/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e190 */

int __thiscall FUN_1007e190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_2c [4];
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2f00;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x4c) == 0) &&
     (local_24 = param_1, iVar2 = FUN_10233230(param_2,param_3,param_4), iVar1 = local_24,
     iVar2 != 0)) {
    FUN_10074268(iVar2,1);
    local_28 = *(int **)(*(int *)(iVar1 + 0x34) + 4);
    (**(code **)(*local_28 + 4))();
    local_14 = 0;
    uVar3 = FUN_10075055(local_2c);
    FUN_10074ffe(uVar3);
    local_14 = 0xffffffff;
    iVar5 = local_24;
    if ((local_28 != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_28 + 8))(), iVar5 = local_24,
       puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
      iVar5 = local_24;
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return iVar5;
}

