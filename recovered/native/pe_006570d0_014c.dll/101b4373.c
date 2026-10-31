/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b4373 */

void FUN_101b4373(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcdf0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar2 = FUN_10147d77("Text Filter");
  if (cVar2 == '\0') {
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    FUN_101032c6("imgui_demo.cpp",0xf27,"Widgets/Text Filter");
    FUN_1011eaad();
    if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4364) {
      FUN_1022c0d0(&DAT_103a4364);
      if (DAT_103a4364 == -1) {
        local_14 = 0;
        FUN_100fb460(&DAT_10356101);
        FUN_1022c3a0(&LAB_101b77ce);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a4364);
      }
    }
    FUN_1012d08c(
                "Filter usage:\n  \"\"         display all lines\n  \"xxx\"      display lines containing \"xxx\"\n  \"xxx,yyy\"  display lines containing \"xxx\" or \"yyy\"\n  \"-xxx\"     hide lines containing \"xxx\""
                );
    FUN_100fb638("Filter (inc,-exc)",0);
    iVar3 = -0x20;
    do {
      uVar1 = *(undefined4 *)((int)&PTR_DAT_10302244 + iVar3);
      cVar2 = FUN_100fb858(uVar1,0);
      if (cVar2 != '\0') {
        FUN_1012d551("%s",uVar1);
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != 0);
    FUN_10149387();
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}

