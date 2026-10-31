/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c11f1 */

void FUN_1801c11f1(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar10;
  char *in_stack_ffffffffffffff40;
  undefined8 local_a8;
  longlong local_68 [5];
  
  local_68[1] = 0xfffffffffffffffe;
  cVar1 = FUN_18014c2cb("Legacy Columns API");
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180124063(
               "Columns() is an old API! Prefer using the more flexible and powerful BeginTable() API!"
               );
  if (cVar1 != '\0') {
    cVar1 = FUN_18014c2cb("Basic");
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1e6c,"Columns (legacy API)/Basic");
      FUN_1801330a5("Without border:");
      FUN_18016f63d(3,"mycolumns3",0);
      FUN_180137ca1();
      iVar7 = 0;
      do {
        FUN_1801bf199(&local_a8,"Item %d",iVar7);
        local_68[0] = 0;
        FUN_1801391f6(&local_a8,0,0,local_68);
        FUN_18016f022();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0xe);
      uVar4 = 0;
      FUN_18016f63d(1,0,1);
      FUN_180137ca1();
      FUN_1801330a5("With border:");
      FUN_18016f63d(4,"mycolumns",1);
      FUN_180137ca1();
      FUN_1801330a5(&DAT_18036cc91);
      FUN_18016f022();
      FUN_1801330a5("Name");
      FUN_18016f022();
      FUN_1801330a5(&DAT_1803672e8);
      FUN_18016f022();
      FUN_1801330a5("Hovered");
      FUN_18016f022();
      FUN_180137ca1();
      lVar6 = 0;
      do {
        FUN_1801bf199(&local_a8,"%04d",uVar4 & 0xffffffff);
        local_68[0] = 0;
        cVar1 = FUN_1801391f6(&local_a8,uVar4 == DAT_180408d6c,2,local_68);
        if (cVar1 != '\0') {
          DAT_180408d6c = (uint)uVar4;
        }
        uVar2 = FUN_18010759c(0);
        FUN_18016f022();
        FUN_1801330a5(*(undefined8 *)((longlong)&PTR_s_One_180369554_5_180328cc0 + lVar6));
        FUN_18016f022();
        FUN_1801330a5(*(undefined8 *)((longlong)&PTR_s__path_one_180328ce0 + lVar6));
        FUN_18016f022();
        FUN_1801330a5(&DAT_18036b4b0,uVar2);
        FUN_18016f022();
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar4 != 3);
      FUN_18016f63d(1,0,1);
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    cVar1 = FUN_18014c2cb("Borders");
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1e99,"Columns (legacy API)/Borders");
      fVar9 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar9 * DAT_1802de98c);
      in_stack_ffffffffffffff40 = "%d columns";
      FUN_18013d731("##columns_count",&DAT_180408d74,DAT_1802dc268,2,CONCAT44(uVar10,10),
                    "%d columns",0);
      uVar10 = DAT_1802bb8e0;
      if (DAT_180408d74 < 2) {
        DAT_180408d74 = 2;
      }
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180135c3a("horizontal",&DAT_180408d70);
      FUN_180119893(0,uVar10);
      FUN_180135c3a("vertical",&DAT_180408d71);
      iVar7 = 0;
      FUN_18016f63d(DAT_180408d74,0,DAT_180408d71);
      uVar8 = DAT_1802de9b4;
      if (0 < DAT_180408d74) {
        do {
          if (DAT_180408d70 == '\x01') {
            iVar3 = FUN_18016e3f8();
            if (iVar3 == 0) {
              FUN_180137ca1();
            }
          }
          FUN_18011810d(iVar7);
          iVar3 = iVar7 + 0x61;
          FUN_1801330a5(&DAT_18036b616,iVar3,iVar3,iVar3);
          fVar9 = (float)FUN_18016e486(0xffffffff);
          FUN_1801330a5("Width %.2f",(double)fVar9);
          FUN_180111069(&local_a8);
          FUN_1801330a5("Avail %.2f",(double)(float)local_a8);
          fVar9 = (float)FUN_18016e43a(0xffffffff);
          FUN_1801330a5("Offset %.2f",(double)fVar9);
          FUN_1801330a5("Long text that is likely to clip");
          local_a8 = (ulonglong)uVar8;
          FUN_180134257("Button",&local_a8);
          FUN_18011834f();
          FUN_18016f022();
          iVar7 = iVar7 + 1;
        } while (iVar7 < DAT_180408d74 * 3);
      }
      FUN_18016f63d(1,0,1);
      if (DAT_180408d70 != '\0') {
        FUN_180137ca1();
      }
      FUN_18014d7a9();
    }
    cVar1 = FUN_18014c2cb("Mixed items");
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1ebf,"Columns (legacy API)/Mixed items");
      FUN_18016f63d(3,"mixed",1);
      FUN_180137ca1();
      FUN_1801330a5("Hello");
      local_a8 = 0;
      FUN_180134257("Banana",&local_a8);
      FUN_18016f022();
      FUN_1801330a5("ImGui");
      local_a8 = 0;
      FUN_180134257("Apple",&local_a8);
      uVar10 = DAT_1802deaec;
      uVar4 = (ulonglong)in_stack_ffffffffffffff40 & 0xffffffff00000000;
      FUN_180145fe3("red",&DAT_180408d78,DAT_1802deaec,0,"%.3f",uVar4);
      FUN_1801330a5("An extra line here.");
      FUN_18016f022();
      FUN_1801330a5("Sailor");
      local_a8 = 0;
      FUN_180134257("Corniflower",&local_a8);
      FUN_180145fe3(&DAT_180368be7,&DAT_180408d7c,uVar10,0,"%.3f",uVar4 & 0xffffffff00000000);
      FUN_18016f022();
      cVar1 = FUN_18014d916("Category A",0);
      if (cVar1 != '\0') {
        FUN_1801330a5("Blah blah blah");
      }
      FUN_18016f022();
      cVar1 = FUN_18014d916("Category B",0);
      if (cVar1 != '\0') {
        FUN_1801330a5("Blah blah blah");
      }
      FUN_18016f022();
      cVar1 = FUN_18014d916("Category C",0);
      if (cVar1 != '\0') {
        FUN_1801330a5("Blah blah blah");
      }
      FUN_18016f022();
      FUN_18016f63d(1,0,1);
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    cVar1 = FUN_18014c2cb("Word-wrapping");
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1edf,"Columns (legacy API)/Word-wrapping");
      FUN_18016f63d(2,"word-wrapping",1);
      FUN_180137ca1();
      FUN_1801332a0("The quick brown fox jumps over the lazy dog.");
      FUN_1801332a0("Hello Left");
      FUN_18016f022();
      FUN_1801332a0("The quick brown fox jumps over the lazy dog.");
      FUN_1801332a0("Hello Right");
      FUN_18016f63d(1,0,1);
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    cVar1 = FUN_18014c2cb("Horizontal Scrolling");
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1eee,"Columns (legacy API)/Horizontal Scrolling");
      local_a8 = (ulonglong)DAT_1803292f0;
      FUN_180116af2();
      fVar9 = (float)FUN_180116c08();
      local_68[0] = (ulonglong)(uint)(fVar9 * DAT_1802dbb4c) << 0x20;
      FUN_180110d11("##ScrollingRegion",local_68,0,0x800);
      FUN_18016f63d(10,0,1);
      FUN_1801003f2(&local_a8);
      FUN_1801004b6(&local_a8,2000,DAT_1802bb8e0);
      while( true ) {
        cVar1 = FUN_180100a32(&local_a8);
        if (cVar1 == '\0') break;
        for (iVar7 = (int)(float)local_a8; iVar7 < local_a8._4_4_; iVar7 = iVar7 + 1) {
          for (uVar8 = 0; uVar8 < 10; uVar8 = uVar8 + 1) {
            FUN_1801330a5("Line %d Column %d...",iVar7,uVar8);
            FUN_18016f022();
          }
        }
      }
      FUN_18016f63d(1,0,1);
      FUN_180111339();
      FUN_18014d7a9();
      thunk_FUN_180100412(&local_a8);
    }
    cVar1 = FUN_18014c2cb(&DAT_180369d3c);
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1f08,"Columns (legacy API)/Tree");
      FUN_18016f63d(2,&DAT_180369cc4,1);
      uVar4 = 0;
      do {
        cVar1 = FUN_18014c1c1(uVar4,"Node%d",uVar4 & 0xffffffff);
        FUN_18016f022();
        FUN_1801330a5("Node contents");
        FUN_18016f022();
        if (cVar1 != '\0') {
          uVar5 = 0;
          do {
            cVar1 = FUN_18014c1c1(uVar5,"Node%d.%d",uVar4 & 0xffffffff,uVar5 & 0xffffffff);
            FUN_18016f022();
            FUN_1801330a5("Node contents");
            if (cVar1 == '\0') {
              FUN_18016f022();
            }
            else {
              FUN_1801330a5("Even more contents");
              cVar1 = FUN_18014c2cb("Tree in column");
              if (cVar1 != '\0') {
                FUN_1801330a5("The quick brown fox jumps over the lazy dog");
                FUN_18014d7a9();
              }
              FUN_18016f022();
              FUN_18014d7a9();
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != 3);
          FUN_18014d7a9();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 3);
      FUN_18016f63d(1,0,1);
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  return;
}

