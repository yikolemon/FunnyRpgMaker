/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019daad */

void FUN_1019daad(void)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd30;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_101032c6("imgui_demo.cpp",0x2d04,"Examples/Assets Browser");
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4d18) {
    FUN_1022c0d0(&DAT_103a4d18);
    if (DAT_103a4d18 == -1) {
      local_14 = 0;
      FUN_101bb70a();
      FUN_1022c3a0(&LAB_101bb821);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_103a4d18);
    }
  }
  FUN_101bb928("Example: Assets Browser",&DAT_103a33d9);
  *unaff_FS_OFFSET = local_1c;
  return;
}

