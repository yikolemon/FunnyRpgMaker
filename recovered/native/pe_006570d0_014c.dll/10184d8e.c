/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10184d8e */

void __fastcall FUN_10184d8e(int param_1)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_101861c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_10099954(*(int *)(param_1 + 4) + 8);
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  local_8 = 0xffffffff;
  if (*(int *)(local_18 + 4) == 0) {
    *unaff_FS_OFFSET = local_10;
  }
  else {
    FUN_102283a0(*(int *)(local_18 + 4),0x18);
    *unaff_FS_OFFSET = local_10;
  }
  return;
}

