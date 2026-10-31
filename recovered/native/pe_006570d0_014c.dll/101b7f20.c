/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7f20 */

void FUN_101b7f20(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  uint local_70;
  longlong local_6c;
  int local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcea0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  cVar1 = FUN_10147d77();
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  if (cVar1 != '\0') {
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1e6c,"Columns (legacy API)/Basic");
      FUN_1012d08c();
      FUN_1016a3cf(3,"mycolumns3",0);
      FUN_10132188();
      iVar4 = 0;
      do {
        FUN_101b5fc7(&local_58,"Item %d",iVar4);
        local_6c = 0;
        FUN_10133727(&local_58,0);
        FUN_10169d56();
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0xe);
      FUN_1016a3cf(1,0,1);
      FUN_10132188();
      FUN_1012d08c();
      FUN_1016a3cf(4,"mycolumns",1);
      FUN_10132188();
      FUN_1012d08c();
      FUN_10169d56();
      FUN_1012d08c();
      FUN_10169d56();
      FUN_1012d08c();
      FUN_10169d56();
      FUN_1012d08c();
      FUN_10169d56();
      FUN_10132188();
      iVar4 = 0;
      do {
        FUN_101b5fc7(&local_58,"%04d",iVar4);
        local_6c = 0;
        cVar1 = FUN_10133727(&local_58,iVar4 == DAT_1038ee74,2);
        if (cVar1 != '\0') {
          DAT_1038ee74 = iVar4;
        }
        FUN_10102a1a();
        FUN_10169d56();
        FUN_1012d08c();
        FUN_10169d56();
        FUN_1012d08c();
        FUN_10169d56();
        FUN_1012d08c();
        FUN_10169d56();
        iVar4 = iVar4 + 1;
      } while (iVar4 != 3);
      FUN_1016a3cf(1,0,1);
      FUN_10132188();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1e99,"Columns (legacy API)/Borders");
      fVar5 = (float10)FUN_10111f20();
      local_5c = (float)fVar5;
      FUN_100fb68f();
      FUN_1013838a("##columns_count",&DAT_1038ee7c,0x3dcccccd,2,10,"%d columns",0);
      if (DAT_1038ee7c < 2) {
        DAT_1038ee7c = 2;
      }
      iVar4 = 0;
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("horizontal",&DAT_1038ee78);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("vertical",&DAT_1038ee79);
      FUN_1016a3cf(DAT_1038ee7c,0,DAT_1038ee79);
      if (0 < DAT_1038ee7c) {
        do {
          if (DAT_1038ee78 == '\x01') {
            iVar2 = FUN_10168ffd();
            if (iVar2 == 0) {
              FUN_10132188();
            }
          }
          FUN_10113358();
          iVar2 = iVar4 + 0x61;
          FUN_1012d08c(&DAT_1033b4ec,iVar2,iVar2,iVar2);
          fVar5 = (float10)FUN_101690b7();
          FUN_1012d08c("Width %.2f",(double)fVar5);
          FUN_1010c3e4();
          FUN_1012d08c("Avail %.2f",(double)(float)local_58);
          fVar5 = (float10)FUN_1016905b();
          FUN_1012d08c("Offset %.2f",(double)fVar5);
          FUN_1012d08c();
          local_58 = (ulonglong)DAT_102b94bc;
          FUN_1012e1b7("Button");
          FUN_10113568();
          FUN_10169d56();
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_1038ee7c * 3);
      }
      FUN_1016a3cf(1,0,1);
      if (DAT_1038ee78 != '\0') {
        FUN_10132188();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1ebf,"Columns (legacy API)/Mixed items");
      FUN_1016a3cf(3,"mixed",1);
      FUN_10132188();
      FUN_1012d08c();
      local_58 = 0;
      FUN_1012e1b7("Banana",&local_58);
      FUN_10169d56();
      FUN_1012d08c();
      local_58 = 0;
      FUN_1012e1b7("Apple",&local_58);
      FUN_101418cb("red",&DAT_1038ee80,0x3d4ccccd,0,"%.3f",0);
      FUN_1012d08c();
      FUN_10169d56();
      FUN_1012d08c();
      local_58 = 0;
      FUN_1012e1b7("Corniflower",&local_58);
      FUN_101418cb(&DAT_10338ae6,&DAT_1038ee84,0x3d4ccccd,0,"%.3f",0);
      FUN_10169d56();
      cVar1 = FUN_101494f9("Category A",0);
      if (cVar1 != '\0') {
        FUN_1012d08c();
      }
      FUN_10169d56();
      cVar1 = FUN_101494f9("Category B",0);
      if (cVar1 != '\0') {
        FUN_1012d08c();
      }
      FUN_10169d56();
      cVar1 = FUN_101494f9("Category C",0);
      if (cVar1 != '\0') {
        FUN_1012d08c();
      }
      FUN_10169d56();
      FUN_1016a3cf(1,0,1);
      FUN_10132188();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1edf,"Columns (legacy API)/Word-wrapping");
      FUN_1016a3cf(2,"word-wrapping",1);
      FUN_10132188();
      FUN_1012d238();
      FUN_1012d238();
      FUN_10169d56();
      FUN_1012d238();
      FUN_1012d238();
      FUN_1016a3cf(1,0,1);
      FUN_10132188();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1eee,"Columns (legacy API)/Horizontal Scrolling");
      local_58 = (ulonglong)DAT_10302a60;
      FUN_10111df6();
      fVar5 = (float10)FUN_10111f20();
      local_60 = (float)fVar5;
      local_6c = (ulonglong)(uint)(local_60 * DAT_102b7110) << 0x20;
      FUN_1010c081("##ScrollingRegion",&local_6c,0,0x800);
      FUN_1016a3cf(10,0,1);
      FUN_100fbc78();
      local_18 = 0;
      FUN_100fbd22(2000,0xbf800000);
      while( true ) {
        local_18 = 0;
        cVar1 = FUN_100fc2ca();
        if (cVar1 == '\0') break;
        iVar4 = (int)(float)local_58;
        while (iVar4 < local_58._4_4_) {
          uVar3 = 0;
          local_64 = iVar4;
          while (uVar3 < 10) {
            local_18 = 0;
            local_70 = uVar3;
            FUN_1012d08c("Line %d Column %d...");
            FUN_10169d56();
            uVar3 = local_70 + 1;
          }
          iVar4 = local_64 + 1;
        }
      }
      FUN_1016a3cf(1,0,1);
      FUN_1010c644();
      FUN_10149387();
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1f08,"Columns (legacy API)/Tree");
      FUN_1016a3cf(2,&DAT_10339b9a,1);
      uVar3 = 0;
      do {
        cVar1 = FUN_10147c9d(uVar3,"Node%d",uVar3);
        FUN_10169d56();
        FUN_1012d08c();
        FUN_10169d56();
        if (cVar1 != '\0') {
          iVar4 = 0;
          local_70 = uVar3;
          do {
            cVar1 = FUN_10147c9d(iVar4,"Node%d.%d",local_70);
            FUN_10169d56();
            FUN_1012d08c();
            if (cVar1 == '\0') {
              FUN_10169d56();
            }
            else {
              FUN_1012d08c();
              cVar1 = FUN_10147d77();
              if (cVar1 != '\0') {
                FUN_1012d08c();
                FUN_10149387();
              }
              FUN_10169d56();
              FUN_10149387();
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
          FUN_10149387();
          uVar3 = local_70;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 3);
      FUN_1016a3cf(1,0,1);
      FUN_10149387();
    }
    FUN_10149387();
  }
  *unaff_FS_OFFSET = local_20;
  return;
}

