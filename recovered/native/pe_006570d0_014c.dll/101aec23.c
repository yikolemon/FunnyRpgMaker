/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101aec23 */

void FUN_101aec23(void)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined8 local_20;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  cVar3 = FUN_10147d77("Drag and Drop");
  if (cVar3 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x6ae,"Widgets/Drag and drop");
    cVar3 = FUN_10147d77("Drag and drop in standard widgets");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x6b1,"Widgets/Drag and drop/Standard widgets");
      FUN_1011eaad();
      FUN_101438d3("color 1",&DAT_1038aa84,0);
      FUN_101438ec("color 2",&DAT_1038aa90,0);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Drag and drop to copy/swap items");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x6c0,"Widgets/Drag and drop/Copy-swap items");
      cVar3 = FUN_10130e0c(&DAT_10330487,DAT_103a3e70 == 0);
      if (cVar3 != '\0') {
        DAT_103a3e70 = 0;
      }
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_10130e0c(&DAT_103389a2,DAT_103a3e70 == 1);
      if (cVar3 != '\0') {
        DAT_103a3e70 = 1;
      }
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_10130e0c(&DAT_103357b3,DAT_103a3e70 == 2);
      if (cVar3 != '\0') {
        DAT_103a3e70 = 2;
      }
      local_18 = 0;
      do {
        FUN_10113358(local_18);
        if (0x55555554 < local_18 * -0x55555555 + 0x2aaaaaaaU) {
          FUN_10114a0e(0,0xbf800000);
        }
        local_20 = DAT_102b8e30;
        FUN_1012e1b7((&PTR_s_Bobby_1038aaa0)[local_18],&local_20);
        cVar3 = FUN_101179e3(0);
        if (cVar3 != '\0') {
          FUN_10117c4b("DND_DEMO_CELL",&local_18,4,0);
          if (DAT_103a3e70 == 0) {
            FUN_1012d08c("Copy %s",(&PTR_s_Bobby_1038aaa0)[local_18]);
          }
          if (DAT_103a3e70 == 1) {
            FUN_1012d08c("Move %s",(&PTR_s_Bobby_1038aaa0)[local_18]);
          }
          if (DAT_103a3e70 == 2) {
            FUN_1012d08c("Swap %s",(&PTR_s_Bobby_1038aaa0)[local_18]);
          }
          FUN_10117c1f();
        }
        cVar3 = FUN_10117e47();
        if (cVar3 != '\0') {
          puVar4 = (undefined4 *)FUN_10117f03("DND_DEMO_CELL",0);
          if (puVar4 != (undefined4 *)0x0) {
            iVar7 = *(int *)*puVar4;
            if (DAT_103a3e70 == 2) {
              puVar1 = (&PTR_s_Bobby_1038aaa0)[local_18];
              (&PTR_s_Bobby_1038aaa0)[local_18] = (&PTR_s_Bobby_1038aaa0)[iVar7];
              (&PTR_s_Bobby_1038aaa0)[iVar7] = puVar1;
            }
            else if (DAT_103a3e70 == 1) {
              (&PTR_s_Bobby_1038aaa0)[local_18] = (&PTR_s_Bobby_1038aaa0)[iVar7];
              (&PTR_s_Bobby_1038aaa0)[iVar7] = &DAT_10356101;
            }
            else if (DAT_103a3e70 == 0) {
              (&PTR_s_Bobby_1038aaa0)[local_18] = (&PTR_s_Bobby_1038aaa0)[iVar7];
            }
          }
          FUN_101182df();
        }
        FUN_10113568();
        iVar7 = local_18 + 1;
        bVar2 = local_18 < 8;
        local_18 = iVar7;
      } while (bVar2);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Drag to reorder items (simple)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x704,"Widgets/Drag and Drop/Drag to reorder items (simple)");
      FUN_1011177d(0x20,1);
      FUN_1011eaad();
      iVar7 = 0;
      do {
        puVar1 = (&PTR_s_Item_One_1038aac4)[iVar7];
        local_20 = 0;
        FUN_10133727(puVar1,0,0,&local_20);
        cVar3 = FUN_1010bee1();
        if (cVar3 != '\0') {
          cVar3 = FUN_10102a1a(0);
          if (cVar3 == '\0') {
            FUN_10114052(&local_20,0,0xbf800000);
            uVar5 = (iVar7 + (uint)(0.0 <= local_20._4_4_) * 2) - 1;
            if (uVar5 < 5) {
              (&PTR_s_Item_One_1038aac4)[iVar7] = (&PTR_s_Item_One_1038aac4)[uVar5];
              (&PTR_s_Item_One_1038aac4)[uVar5] = puVar1;
              FUN_101140ed(0);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      FUN_10111839();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Tooltip at target location");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x726,"Widgets/Drag and Drop/Tooltip at target location");
      bVar2 = true;
      while( true ) {
        local_20 = 0;
        pcVar6 = "drop here##1";
        if (bVar2) {
          pcVar6 = "drop here##0";
        }
        FUN_1012e1b7(pcVar6,&local_20);
        cVar3 = FUN_10117e47();
        if (cVar3 != '\0') {
          iVar7 = FUN_10117f03("_COL4F",0x1400);
          if (iVar7 != 0) {
            FUN_10114115(10);
            FUN_10103022("Cannot drop here!");
          }
          FUN_101182df();
        }
        if (!bVar2) break;
        local_20 = 0;
        FUN_10144b9b("drag me",&DAT_1038aad8,0,&local_20);
        bVar2 = false;
      }
      FUN_10149387();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

