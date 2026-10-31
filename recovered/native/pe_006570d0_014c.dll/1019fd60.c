/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019fd60 */

void FUN_1019fd60(void)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined8 local_28;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = DAT_103026a0;
  FUN_10107cf6(&local_28,4);
  cVar1 = FUN_10107d2b("Example: Property editor",&DAT_103a33e1,0);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x26c2,"Examples/Property Editor");
    if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4c34) {
      FUN_1022c0d0(&DAT_103a4c34);
      if (DAT_103a4c34 == -1) {
        local_14 = 0;
        FUN_101ba27c();
        FUN_1022c3a0(&LAB_101ba2fd);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a4c34);
      }
    }
    if (DAT_103a33f0 == 0) {
      DAT_103a33f0 = FUN_101b6f0f();
    }
    FUN_101ba3a8(DAT_103a33f0);
  }
  FUN_1010ad44();
  *unaff_FS_OFFSET = local_1c;
  return;
}

