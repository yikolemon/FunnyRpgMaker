/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b732b */

void FUN_1801b732b(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined **ppuVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  int local_74;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_18014c2cb("Drag and Drop");
  if (cVar6 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x6ae,"Widgets/Drag and drop");
    cVar6 = FUN_18014c2cb("Drag and drop in standard widgets");
    if (cVar6 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x6b1,"Widgets/Drag and drop/Standard widgets");
      FUN_180124063("You can drag from the color squares.");
      FUN_18014836f("color 1",&DAT_1804048cc,0);
      FUN_180148378("color 2",&DAT_1804048e0,0);
      FUN_18014d7a9();
    }
    cVar6 = FUN_18014c2cb("Drag and drop to copy/swap items");
    if (cVar6 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x6c0,"Widgets/Drag and drop/Copy-swap items");
      cVar6 = FUN_180136a21(&DAT_1803605a3,DAT_18041fca4 == 0);
      if (cVar6 != '\0') {
        DAT_18041fca4 = 0;
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar6 = FUN_180136a21(&DAT_180368aa3,DAT_18041fca4 == 1);
      if (cVar6 != '\0') {
        DAT_18041fca4 = 1;
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar6 = FUN_180136a21(&DAT_1803658b4,DAT_18041fca4 == 2);
      uVar5 = DAT_1802de8c0;
      uVar4 = DAT_1802bb8e0;
      if (cVar6 != '\0') {
        DAT_18041fca4 = 2;
      }
      local_74 = 0;
      do {
        FUN_18011810d(local_74);
        if (0x55555554 < local_74 * -0x55555555 + 0x2aaaaaaaU) {
          FUN_180119893(0,uVar4);
        }
        local_80 = uVar5;
        FUN_180134257((&PTR_s_Bobby_1804048f0)[local_74],&local_80);
        cVar6 = FUN_18011c8b1(0);
        if (cVar6 != '\0') {
          FUN_18011cb49("DND_DEMO_CELL",&local_74,4,0);
          if (DAT_18041fca4 == 0) {
            FUN_1801330a5("Copy %s",(&PTR_s_Bobby_1804048f0)[local_74]);
          }
          if (DAT_18041fca4 == 1) {
            FUN_1801330a5("Move %s",(&PTR_s_Bobby_1804048f0)[local_74]);
          }
          if (DAT_18041fca4 == 2) {
            FUN_1801330a5("Swap %s",(&PTR_s_Bobby_1804048f0)[local_74]);
          }
          FUN_18011cb14();
        }
        cVar6 = FUN_18011cd83();
        if (cVar6 != '\0') {
          puVar8 = (undefined8 *)FUN_18011ce5d("DND_DEMO_CELL",0);
          if (puVar8 != (undefined8 *)0x0) {
            iVar1 = *(int *)*puVar8;
            if (DAT_18041fca4 == 2) {
              puVar2 = (&PTR_s_Bobby_1804048f0)[local_74];
              (&PTR_s_Bobby_1804048f0)[local_74] = (&PTR_s_Bobby_1804048f0)[iVar1];
              (&PTR_s_Bobby_1804048f0)[iVar1] = puVar2;
            }
            else if (DAT_18041fca4 == 1) {
              (&PTR_s_Bobby_1804048f0)[local_74] = (&PTR_s_Bobby_1804048f0)[iVar1];
              (&PTR_s_Bobby_1804048f0)[iVar1] = &DAT_1803861e4;
            }
            else if (DAT_18041fca4 == 0) {
              (&PTR_s_Bobby_1804048f0)[local_74] = (&PTR_s_Bobby_1804048f0)[iVar1];
            }
          }
          FUN_18011d22a();
        }
        FUN_18011834f();
        iVar1 = local_74 + 1;
        bVar3 = local_74 < 8;
        local_74 = iVar1;
      } while (bVar3);
      FUN_18014d7a9();
    }
    cVar6 = FUN_18014c2cb("Drag to reorder items (simple)");
    if (cVar6 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x704,"Widgets/Drag and Drop/Drag to reorder items (simple)");
      FUN_18011648a(0x20,1);
      FUN_180124063(
                   "We don\'t use the drag and drop api at all here! Instead we query when the item is held but not hovered, and order items accordingly."
                   );
      uVar4 = DAT_1802bb8e0;
      ppuVar10 = &PTR_s_Item_One_180404940;
      lVar11 = 0;
      do {
        puVar2 = *ppuVar10;
        local_80 = 0;
        FUN_1801391f6(puVar2,0,0,&local_80);
        cVar6 = FUN_180110b56();
        if (cVar6 != '\0') {
          cVar6 = FUN_18010759c(0);
          if (cVar6 == '\0') {
            FUN_180118e6a(&local_80,0,uVar4);
            uVar7 = (uint)(0.0 <= local_80._4_4_) * 2 + -1 + (int)lVar11;
            if (uVar7 < 5) {
              *ppuVar10 = (&PTR_s_Item_One_180404940)[uVar7];
              (&PTR_s_Item_One_180404940)[uVar7] = puVar2;
              FUN_180118f0e(0);
            }
          }
        }
        lVar11 = lVar11 + 1;
        ppuVar10 = ppuVar10 + 1;
      } while (lVar11 != 5);
      FUN_180116548();
      FUN_18014d7a9();
    }
    cVar6 = FUN_18014c2cb("Tooltip at target location");
    if (cVar6 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x726,"Widgets/Drag and Drop/Tooltip at target location");
      bVar3 = true;
      while( true ) {
        local_80 = 0;
        pcVar9 = "drop here##1";
        if (bVar3) {
          pcVar9 = "drop here##0";
        }
        FUN_180134257(pcVar9,&local_80);
        cVar6 = FUN_18011cd83();
        if (cVar6 != '\0') {
          lVar11 = FUN_18011ce5d("_COL4F",0x1400);
          if (lVar11 != 0) {
            FUN_180118f36(10);
            FUN_180107bf7("Cannot drop here!");
          }
          FUN_18011d22a();
        }
        if (!bVar3) break;
        local_80 = 0;
        bVar3 = false;
        FUN_180149615("drag me",&DAT_180404968,0,&local_80);
      }
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_a8);
}

