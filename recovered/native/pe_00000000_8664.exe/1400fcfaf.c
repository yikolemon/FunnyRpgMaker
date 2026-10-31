/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fcfaf */

void FUN_1400fcfaf(void)

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
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_1400c51fb("Drag and Drop");
  if (cVar6 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x6ae,"Widgets/Drag and drop");
    cVar6 = FUN_1400c51fb("Drag and drop in standard widgets");
    if (cVar6 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x6b1,"Widgets/Drag and drop/Standard widgets");
      FUN_14009cf92("You can drag from the color squares.");
      FUN_1400c129f("color 1",&DAT_140f1806c,0);
      FUN_1400c12a8("color 2",&DAT_140f18080,0);
      FUN_1400c66d9();
    }
    cVar6 = FUN_1400c51fb("Drag and drop to copy/swap items");
    if (cVar6 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x6c0,"Widgets/Drag and drop/Copy-swap items");
      cVar6 = FUN_1400af951(&DAT_140ec27a5,DAT_140f313f4 == 0);
      if (cVar6 != '\0') {
        DAT_140f313f4 = 0;
      }
      FUN_140092bab(0,DAT_1401c86a4);
      cVar6 = FUN_1400af951(&DAT_140ec9b4e,DAT_140f313f4 == 1);
      if (cVar6 != '\0') {
        DAT_140f313f4 = 1;
      }
      FUN_140092bab(0,DAT_1401c86a4);
      cVar6 = FUN_1400af951(&DAT_140ec6d25,DAT_140f313f4 == 2);
      uVar5 = DAT_140211630;
      uVar4 = DAT_1401c86a4;
      if (cVar6 != '\0') {
        DAT_140f313f4 = 2;
      }
      local_74 = 0;
      do {
        FUN_140091425(local_74);
        if (0x55555554 < local_74 * -0x55555555 + 0x2aaaaaaaU) {
          FUN_140092bab(0,uVar4);
        }
        local_80 = uVar5;
        FUN_1400ad187((&PTR_s_Bobby_140f18090)[local_74],&local_80);
        cVar6 = FUN_140095b6d(0);
        if (cVar6 != '\0') {
          FUN_140095e05("DND_DEMO_CELL",&local_74,4,0);
          if (DAT_140f313f4 == 0) {
            FUN_1400abfd5("Copy %s",(&PTR_s_Bobby_140f18090)[local_74]);
          }
          if (DAT_140f313f4 == 1) {
            FUN_1400abfd5("Move %s",(&PTR_s_Bobby_140f18090)[local_74]);
          }
          if (DAT_140f313f4 == 2) {
            FUN_1400abfd5("Swap %s",(&PTR_s_Bobby_140f18090)[local_74]);
          }
          FUN_140095dd0();
        }
        cVar6 = FUN_14009603f();
        if (cVar6 != '\0') {
          puVar8 = (undefined8 *)FUN_140096119("DND_DEMO_CELL",0);
          if (puVar8 != (undefined8 *)0x0) {
            iVar1 = *(int *)*puVar8;
            if (DAT_140f313f4 == 2) {
              puVar2 = (&PTR_s_Bobby_140f18090)[local_74];
              (&PTR_s_Bobby_140f18090)[local_74] = (&PTR_s_Bobby_140f18090)[iVar1];
              (&PTR_s_Bobby_140f18090)[iVar1] = puVar2;
            }
            else if (DAT_140f313f4 == 1) {
              (&PTR_s_Bobby_140f18090)[local_74] = (&PTR_s_Bobby_140f18090)[iVar1];
              (&PTR_s_Bobby_140f18090)[iVar1] = &DAT_140edcdbf;
            }
            else if (DAT_140f313f4 == 0) {
              (&PTR_s_Bobby_140f18090)[local_74] = (&PTR_s_Bobby_140f18090)[iVar1];
            }
          }
          FUN_1400964e6();
        }
        FUN_140091667();
        iVar1 = local_74 + 1;
        bVar3 = local_74 < 8;
        local_74 = iVar1;
      } while (bVar3);
      FUN_1400c66d9();
    }
    cVar6 = FUN_1400c51fb("Drag to reorder items (simple)");
    if (cVar6 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x704,"Widgets/Drag and Drop/Drag to reorder items (simple)");
      FUN_14008f7a2(0x20,1);
      FUN_14009cf92(
                   "We don\'t use the drag and drop api at all here! Instead we query when the item is held but not hovered, and order items accordingly."
                   );
      uVar4 = DAT_1401c86a4;
      ppuVar10 = &PTR_s_Item_One_140f180e0;
      lVar11 = 0;
      do {
        puVar2 = *ppuVar10;
        local_80 = 0;
        FUN_1400b2126(puVar2,0,0,&local_80);
        cVar6 = FUN_140089e6e();
        if (cVar6 != '\0') {
          cVar6 = FUN_1400808b4(0);
          if (cVar6 == '\0') {
            FUN_140092182(&local_80,0,uVar4);
            uVar7 = (uint)(0.0 <= local_80._4_4_) * 2 + -1 + (int)lVar11;
            if (uVar7 < 5) {
              *ppuVar10 = (&PTR_s_Item_One_140f180e0)[uVar7];
              (&PTR_s_Item_One_140f180e0)[uVar7] = puVar2;
              FUN_140092226(0);
            }
          }
        }
        lVar11 = lVar11 + 1;
        ppuVar10 = ppuVar10 + 1;
      } while (lVar11 != 5);
      FUN_14008f860();
      FUN_1400c66d9();
    }
    cVar6 = FUN_1400c51fb("Tooltip at target location");
    if (cVar6 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x726,"Widgets/Drag and Drop/Tooltip at target location");
      bVar3 = true;
      while( true ) {
        local_80 = 0;
        pcVar9 = "drop here##1";
        if (bVar3) {
          pcVar9 = "drop here##0";
        }
        FUN_1400ad187(pcVar9,&local_80);
        cVar6 = FUN_14009603f();
        if (cVar6 != '\0') {
          lVar11 = FUN_140096119("_COL4F",0x1400);
          if (lVar11 != 0) {
            FUN_14009224e(10);
            FUN_140080f0f("Cannot drop here!");
          }
          FUN_1400964e6();
        }
        if (!bVar3) break;
        local_80 = 0;
        bVar3 = false;
        FUN_1400c2545("drag me",&DAT_140f18108,0,&local_80);
      }
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_a8);
}

