/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10183bde */

void __fastcall FUN_10183bde(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_101860e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 4) == 0) {
    *unaff_FS_OFFSET = local_10;
  }
  else {
    local_18 = param_1;
    FUN_102283a0(*(int *)(param_1 + 4),0xc);
    *unaff_FS_OFFSET = local_10;
  }
  return;
}

