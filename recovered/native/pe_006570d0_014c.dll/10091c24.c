/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091c24 */

void __thiscall FUN_10091c24(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [4];
  int *local_84;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_88;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c38e0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_84 = param_1;
  FUN_100928ec(param_1 + 1,param_2,param_3,param_4);
  local_18 = 1;
  iVar2 = FUN_10092a20();
  piVar1 = local_84;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    UNLOCK();
  }
  FUN_10020804();
  *piVar1 = iVar2;
  local_18 = 0xffffffff;
  FUN_1001cf94();
  *unaff_FS_OFFSET = local_20;
  return;
}

