/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ad15e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad15e(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined *local_64 [12];
  undefined8 local_34;
  undefined8 local_2c;
  undefined *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcdc0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar2 = FUN_10147d77("Combo");
  if (cVar2 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x5b7,"Widgets/Combo");
    thunk_FUN_10130d81("ImGuiComboFlags_PopupAlignLeft",&DAT_103a3b20,1);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_NoArrowButton",&DAT_103a3b20,0x20);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_NoPreview",&DAT_103a3b20,0x40);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xffffff5f;
    }
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_WidthFitPreview",&DAT_103a3b20,0x80);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xffffffbf;
    }
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_HeightSmall",&DAT_103a3b20,2);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xffffffe3;
    }
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_HeightRegular",&DAT_103a3b20,4);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xffffffe5;
    }
    cVar2 = thunk_FUN_10130d81("ImGuiComboFlags_HeightLargest",&DAT_103a3b20,0x10);
    if (cVar2 != '\0') {
      DAT_103a3b20 = DAT_103a3b20 & 0xfffffff1;
    }
    local_34 = _PTR_DAT_10302124;
    local_64[8] = PTR_DAT_10302114;
    local_64[9] = PTR_DAT_10302118;
    local_64[10] = PTR_DAT_1030211c;
    local_64[0xb] = PTR_s_LLLLLLL_10302120;
    local_64[4] = PTR_DAT_10302104;
    local_64[5] = PTR_DAT_10302108;
    local_64[6] = PTR_DAT_1030210c;
    local_64[7] = PTR_DAT_10302110;
    local_64[0] = PTR_DAT_103020f4;
    local_64[1] = PTR_DAT_103020f8;
    local_64[2] = PTR_DAT_103020fc;
    local_64[3] = PTR_s_DDDD_1033cb7d_6_10302100;
    puVar3 = local_64[DAT_103a3b24];
    cVar2 = FUN_10132c48("combo 1",puVar3,DAT_103a3b20);
    if (cVar2 != '\0') {
      local_24 = puVar3;
      iVar4 = 0;
      do {
        iVar1 = DAT_103a3b24;
        local_2c = 0;
        cVar2 = FUN_10133727(local_64[iVar4],iVar4 == DAT_103a3b24,0,&local_2c);
        if (cVar2 != '\0') {
          DAT_103a3b24 = iVar4;
        }
        if (iVar4 == iVar1) {
          FUN_1011262c();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0xe);
      FUN_101334a7();
      puVar3 = local_24;
    }
    cVar2 = FUN_10132c48("combo 2 (w/ filter)",puVar3,DAT_103a3b20);
    if (cVar2 != '\0') {
      if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a3c38) {
        FUN_1022c0d0(&DAT_103a3c38);
        if (DAT_103a3c38 == -1) {
          local_14 = 0;
          FUN_100fb460(&DAT_10356101);
          FUN_1022c3a0(&LAB_101b5a0b);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_103a3c38);
        }
      }
      cVar2 = FUN_10111d44();
      if (cVar2 != '\0') {
        FUN_10112577(0);
        DAT_103a3b28 = 0;
        FUN_100fb51c();
      }
      FUN_101145b7(0x1227,0);
      FUN_100fb638("##Filter",0x80800000);
      iVar4 = 0;
      do {
        iVar1 = DAT_103a3b24;
        puVar3 = local_64[iVar4];
        cVar2 = FUN_100fb858(puVar3,0);
        if (cVar2 != '\0') {
          local_2c = 0;
          cVar2 = FUN_10133727(puVar3,iVar4 == iVar1,0,&local_2c);
          if (cVar2 != '\0') {
            DAT_103a3b24 = iVar4;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0xe);
      FUN_101334a7();
    }
    FUN_10131d29();
    FUN_10132656("One-liner variants");
    FUN_1011eaad();
    FUN_10133e42("combo 3 (one-liner)",&DAT_103a3c3c,&DAT_103560d8,0xffffffff);
    FUN_10133e14("combo 4 (array)",&DAT_1038aa10,local_64,0xe,0xffffffff);
    FUN_10133528("combo 5 (function)",&DAT_103a3c40,&LAB_10133e36,local_64,0xe,0xffffffff);
    FUN_10149387();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

