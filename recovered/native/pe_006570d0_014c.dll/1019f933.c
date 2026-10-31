/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019f933 */

void FUN_1019f933(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 local_34;
  float10 local_2c;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  puVar3 = &local_34;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4b10) {
    FUN_1022c0d0(&DAT_103a4b10);
    puVar3 = (undefined8 *)local_20;
    if (DAT_103a4b10 == -1) {
      local_14 = 0;
      FUN_101b9b12();
      FUN_1022c3a0(&LAB_101b9d57);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_103a4b10);
      puVar3 = (undefined8 *)local_20;
    }
  }
  local_20 = (undefined1 *)puVar3;
  local_34 = DAT_10302680;
  FUN_10107cf6();
  FUN_10107d2b("Example: Log",&DAT_103a33df,0);
  FUN_101032c6("imgui_demo.cpp",0x257b,"Examples/Log");
  cVar4 = FUN_1012e1ca("[Debug] Add 5 entries");
  if (cVar4 != '\0') {
    iVar6 = 5;
    do {
      puVar1 = (&PTR_s_info_103359ba_0x17_10302484)[DAT_103a4b14 % 3];
      puVar2 = (&PTR_s_Bumfuzzled_10302490)[DAT_103a4b14 % 7];
      local_2c = (float10)FUN_10103354();
      uVar5 = FUN_1010335d();
      FUN_101b9d62(&DAT_103a49e4,"[%05d] [%s] Hello, current time is %.1f, here\'s a word: \'%s\'\n"
                   ,uVar5,puVar1,(double)local_2c,puVar2);
      DAT_103a4b14 = DAT_103a4b14 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_1010ad44();
  FUN_101b9e72();
  *unaff_FS_OFFSET = local_1c;
  return;
}

