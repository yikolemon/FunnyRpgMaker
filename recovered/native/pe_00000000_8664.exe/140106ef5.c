/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106ef5 */

void FUN_140106ef5(void)

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
  cVar1 = FUN_1400c51fb("Legacy Columns API");
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_14009cf92(
               "Columns() is an old API! Prefer using the more flexible and powerful BeginTable() API!"
               );
  if (cVar1 != '\0') {
    cVar1 = FUN_1400c51fb("Basic");
    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1e6c,"Columns (legacy API)/Basic");
      FUN_1400abfd5("Without border:");
      FUN_14011760d(3,"mycolumns3",0);
      FUN_1400b0bd1();
      iVar7 = 0;
      do {
        FUN_140104e1d(&local_a8,"Item %d",iVar7);
        local_68[0] = 0;
        FUN_1400b2126(&local_a8,0,0,local_68);
        FUN_140116ff2();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0xe);
      uVar4 = 0;
      FUN_14011760d(1,0,1);
      FUN_1400b0bd1();
      FUN_1400abfd5("With border:");
      FUN_14011760d(4,"mycolumns",1);
      FUN_1400b0bd1();
      FUN_1400abfd5(&DAT_140ecd3e3);
      FUN_140116ff2();
      FUN_1400abfd5("Name");
      FUN_140116ff2();
      FUN_1400abfd5("Path");
      FUN_140116ff2();
      FUN_1400abfd5("Hovered");
      FUN_140116ff2();
      FUN_1400b0bd1();
      lVar6 = 0;
      do {
        FUN_140104e1d(&local_a8,"%04d",uVar4 & 0xffffffff);
        local_68[0] = 0;
        cVar1 = FUN_1400b2126(&local_a8,uVar4 == DAT_140f1c50c,2,local_68);
        if (cVar1 != '\0') {
          DAT_140f1c50c = (uint)uVar4;
        }
        uVar2 = FUN_1400808b4(0);
        FUN_140116ff2();
        FUN_1400abfd5(*(undefined8 *)((longlong)&PTR_s_One_140eca520_5_140e8d050 + lVar6));
        FUN_140116ff2();
        FUN_1400abfd5(*(undefined8 *)((longlong)&PTR_s__path_one_140e8d070 + lVar6));
        FUN_140116ff2();
        FUN_1400abfd5(&DAT_140ecbfd4,uVar2);
        FUN_140116ff2();
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (uVar4 != 3);
      FUN_14011760d(1,0,1);
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    cVar1 = FUN_1400c51fb("Borders");
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1e99,"Columns (legacy API)/Borders");
      fVar9 = (float)FUN_14008ff20();
      FUN_140079071(fVar9 * DAT_1402116fc);
      in_stack_ffffffffffffff40 = "%d columns";
      FUN_1400b6661("##columns_count",&DAT_140f1c514,DAT_140210018,2,CONCAT44(uVar10,10),
                    "%d columns",0);
      uVar10 = DAT_1401c86a4;
      if (DAT_140f1c514 < 2) {
        DAT_140f1c514 = 2;
      }
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400aeb6a("horizontal",&DAT_140f1c510);
      FUN_140092bab(0,uVar10);
      FUN_1400aeb6a("vertical",&DAT_140f1c511);
      iVar7 = 0;
      FUN_14011760d(DAT_140f1c514,0,DAT_140f1c511);
      uVar8 = DAT_140211724;
      if (0 < DAT_140f1c514) {
        do {
          if (DAT_140f1c510 == '\x01') {
            iVar3 = FUN_1401163c8();
            if (iVar3 == 0) {
              FUN_1400b0bd1();
            }
          }
          FUN_140091425(iVar7);
          iVar3 = iVar7 + 0x61;
          FUN_1400abfd5(&DAT_140ecc10f,iVar3,iVar3,iVar3);
          fVar9 = (float)FUN_140116456(0xffffffff);
          FUN_1400abfd5("Width %.2f",(double)fVar9);
          FUN_14008a381(&local_a8);
          FUN_1400abfd5("Avail %.2f",(double)(float)local_a8);
          fVar9 = (float)FUN_14011640a(0xffffffff);
          FUN_1400abfd5("Offset %.2f",(double)fVar9);
          FUN_1400abfd5("Long text that is likely to clip");
          local_a8 = (ulonglong)uVar8;
          FUN_1400ad187("Button",&local_a8);
          FUN_140091667();
          FUN_140116ff2();
          iVar7 = iVar7 + 1;
        } while (iVar7 < DAT_140f1c514 * 3);
      }
      FUN_14011760d(1,0,1);
      if (DAT_140f1c510 != '\0') {
        FUN_1400b0bd1();
      }
      FUN_1400c66d9();
    }
    cVar1 = FUN_1400c51fb("Mixed items");
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1ebf,"Columns (legacy API)/Mixed items");
      FUN_14011760d(3,"mixed",1);
      FUN_1400b0bd1();
      FUN_1400abfd5("Hello");
      local_a8 = 0;
      FUN_1400ad187("Banana",&local_a8);
      FUN_140116ff2();
      FUN_1400abfd5("ImGui");
      local_a8 = 0;
      FUN_1400ad187("Apple",&local_a8);
      uVar10 = DAT_14021185c;
      uVar4 = (ulonglong)in_stack_ffffffffffffff40 & 0xffffffff00000000;
      FUN_1400bef13("red",&DAT_140f1c518,DAT_14021185c,0,"%.3f",uVar4);
      FUN_1400abfd5("An extra line here.");
      FUN_140116ff2();
      FUN_1400abfd5("Sailor");
      local_a8 = 0;
      FUN_1400ad187("Corniflower",&local_a8);
      FUN_1400bef13(&DAT_140ec9c92,&DAT_140f1c51c,uVar10,0,"%.3f",uVar4 & 0xffffffff00000000);
      FUN_140116ff2();
      cVar1 = FUN_1400c6846("Category A",0);
      if (cVar1 != '\0') {
        FUN_1400abfd5("Blah blah blah");
      }
      FUN_140116ff2();
      cVar1 = FUN_1400c6846("Category B",0);
      if (cVar1 != '\0') {
        FUN_1400abfd5("Blah blah blah");
      }
      FUN_140116ff2();
      cVar1 = FUN_1400c6846("Category C",0);
      if (cVar1 != '\0') {
        FUN_1400abfd5("Blah blah blah");
      }
      FUN_140116ff2();
      FUN_14011760d(1,0,1);
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    cVar1 = FUN_1400c51fb("Word-wrapping");
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1edf,"Columns (legacy API)/Word-wrapping");
      FUN_14011760d(2,"word-wrapping",1);
      FUN_1400b0bd1();
      FUN_1400ac1d0("The quick brown fox jumps over the lazy dog.");
      FUN_1400ac1d0("Hello Left");
      FUN_140116ff2();
      FUN_1400ac1d0("The quick brown fox jumps over the lazy dog.");
      FUN_1400ac1d0("Hello Right");
      FUN_14011760d(1,0,1);
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    cVar1 = FUN_1400c51fb("Horizontal Scrolling");
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1eee,"Columns (legacy API)/Horizontal Scrolling");
      local_a8 = (ulonglong)DAT_140e8d680;
      FUN_14008fe0a();
      fVar9 = (float)FUN_14008ff20();
      local_68[0] = (ulonglong)(uint)(fVar9 * DAT_1401c86d4) << 0x20;
      FUN_14008a029("##ScrollingRegion",local_68,0,0x800);
      FUN_14011760d(10,0,1);
      FUN_1400796ae(&local_a8);
      FUN_140079772(&local_a8,2000,DAT_1401c86a4);
      while( true ) {
        cVar1 = FUN_140079cee(&local_a8);
        if (cVar1 == '\0') break;
        for (iVar7 = (int)(float)local_a8; iVar7 < local_a8._4_4_; iVar7 = iVar7 + 1) {
          for (uVar8 = 0; uVar8 < 10; uVar8 = uVar8 + 1) {
            FUN_1400abfd5("Line %d Column %d...",iVar7,uVar8);
            FUN_140116ff2();
          }
        }
      }
      FUN_14011760d(1,0,1);
      FUN_14008a651();
      FUN_1400c66d9();
      thunk_FUN_1400796ce(&local_a8);
    }
    cVar1 = FUN_1400c51fb(&DAT_140ecab84);
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1f08,"Columns (legacy API)/Tree");
      FUN_14011760d(2,&DAT_140ecab1b,1);
      uVar4 = 0;
      do {
        cVar1 = FUN_1400c50f1(uVar4,"Node%d",uVar4 & 0xffffffff);
        FUN_140116ff2();
        FUN_1400abfd5("Node contents");
        FUN_140116ff2();
        if (cVar1 != '\0') {
          uVar5 = 0;
          do {
            cVar1 = FUN_1400c50f1(uVar5,"Node%d.%d",uVar4 & 0xffffffff,uVar5 & 0xffffffff);
            FUN_140116ff2();
            FUN_1400abfd5("Node contents");
            if (cVar1 == '\0') {
              FUN_140116ff2();
            }
            else {
              FUN_1400abfd5("Even more contents");
              cVar1 = FUN_1400c51fb("Tree in column");
              if (cVar1 != '\0') {
                FUN_1400abfd5("The quick brown fox jumps over the lazy dog");
                FUN_1400c66d9();
              }
              FUN_140116ff2();
              FUN_1400c66d9();
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != 3);
          FUN_1400c66d9();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 3);
      FUN_14011760d(1,0,1);
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  return;
}

