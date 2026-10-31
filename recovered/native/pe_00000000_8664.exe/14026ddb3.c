/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026ddb3 */

/* WARNING: Removing unreachable block (ram,0x00014026e94a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14026ddb3(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong in_RAX;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong unaff_RBP;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  
  *(longlong *)(unaff_RBP + 0x2b0) = param_2;
  if (param_2 != in_RAX) {
    *(undefined8 *)(unaff_RBP + 0x2d0) = 0;
    *(undefined8 *)(unaff_RBP + 0x2d8) = 0;
    *(longlong *)(unaff_RBP + 0x2b8) = *(longlong *)(unaff_RBP + 0x2b0) + 0x20;
    FUN_14027c0bf(unaff_RBP + 0x238);
    FUN_140233faa(unaff_RBP + 0x2d0,unaff_RBP + 0x238);
    plVar11 = *(longlong **)(unaff_RBP + 0x240);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
    }
    FUN_14027c19e(*(undefined8 *)(unaff_RBP + 0x2b8),unaff_RBP + 0x238);
    lVar10 = unaff_RBP + 0x238;
    if (7 < *(ulonglong *)(unaff_RBP + 0x250)) {
      lVar10 = *(longlong *)(unaff_RBP + 0x238);
    }
    *(longlong *)(unaff_RBP + 0x390) = lVar10;
    *(undefined8 *)(unaff_RBP + 0x398) = *(undefined8 *)(unaff_RBP + 0x248);
    FUN_140216adc(unaff_RBP + 0x130,unaff_RBP + 0x390,unaff_RBP + 0x2f0);
    FUN_14021331c(unaff_RBP + 0x238);
    FUN_14027c2a7(unaff_RBP + 0x238,unaff_RBP + 0x130,"ound");
    *(undefined8 *)(unaff_RBP + 0x298) = 0;
    *(undefined8 *)(unaff_RBP + 0x2a0) = 0;
    *(undefined8 *)(unaff_RBP + 0x288) = 0;
    *(undefined8 *)(unaff_RBP + 0x290) = 0;
    *(undefined8 *)(unaff_RBP + 0x278) = 0;
    *(undefined8 *)(unaff_RBP + 0x280) = 0;
    *(undefined8 *)(unaff_RBP + 0x268) = 0;
    *(undefined8 *)(unaff_RBP + 0x270) = 0;
    *(undefined8 *)(unaff_RBP + 600) = 0;
    *(undefined8 *)(unaff_RBP + 0x260) = 0;
    *(undefined8 *)(unaff_RBP + 0x2a8) = 0;
    FUN_140233b3a(unaff_RBP + 0x270);
    lVar10 = *(longlong *)(unaff_RBP + 0x2d0);
    FUN_1402c1054(lVar10);
    FUN_14027c3fd(unaff_RBP + 0x238,lVar10 + 0xa0);
    FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x238);
    _DAT_140629e7c = 0.45;
    lVar10 = *(longlong *)(unaff_RBP + 0x2d0);
    FUN_1402c1054(lVar10);
    *(longlong *)(unaff_RBP + 0x208) = *(longlong *)(unaff_RBP + 0x208) + 1;
    lVar12 = *(longlong *)(lVar10 + 0x2e0);
    for (lVar10 = *(longlong *)(lVar10 + 0x2d8); lVar10 != lVar12; lVar10 = lVar10 + 0xde0) {
      lVar13 = lVar10 + 0x28;
      FUN_1402da550(unaff_RBP + 0x390,lVar13);
      FUN_1402c222c(&DAT_140628d98,unaff_RBP + 0x390);
      FUN_1402133c2(unaff_RBP + 0x390);
      FUN_1402da550(unaff_RBP + 0x2f0,lVar13);
      FUN_14027c2a7(unaff_RBP + 0x410,unaff_RBP + 0x130,
                    "r rendering (io.MouseDrawCursor) is set ImGui will draw the right cursor for you, otherwise your backend needs to handle it."
                   );
      FUN_1402c24d4(unaff_RBP + 0x390);
      *(undefined8 *)(unaff_RBP + 0x3f0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3f8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3e0) = 0;
      *(undefined8 *)(unaff_RBP + 1000) = 0;
      *(undefined8 *)(unaff_RBP + 0x3d0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3d8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3c0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3c8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3b0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3b8) = 0;
      *(undefined8 *)(unaff_RBP + 0x400) = 0;
      FUN_140233b3a(unaff_RBP + 0x3c8);
      FUN_1402133c2(unaff_RBP + 0x410);
      FUN_1402133c2(unaff_RBP + 0x2f0);
      FUN_14027c3fd(unaff_RBP + 0x390,lVar13);
      plVar2 = *(longlong **)(lVar10 + 0x50);
      for (plVar11 = *(longlong **)(lVar10 + 0x48); plVar11 != plVar2; plVar11 = plVar11 + 2) {
        if ((int)((longlong *)*plVar11)[4] != 0x67) {
          plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar11 + 0x20))();
          lVar14 = plVar7[1];
          for (lVar13 = *plVar7; lVar13 != lVar14; lVar13 = lVar13 + 0x20) {
            FUN_14027c3fd(unaff_RBP + 0x390,lVar13);
          }
        }
      }
      FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x390);
      FUN_14027c312(unaff_RBP + 0x3b0);
      FUN_1402133c2(unaff_RBP + 0x390);
    }
    _DAT_140629e7c = 0.55;
    lVar10 = *(longlong *)(unaff_RBP + 0x2d0);
    FUN_1402c1054(lVar10);
    lVar12 = *(longlong *)(lVar10 + 0x260);
    *(undefined8 *)(unaff_RBP + 0x178) = *(undefined8 *)(lVar10 + 0x268);
    while (*(longlong *)(unaff_RBP + 0x440) = lVar12, lVar12 != *(longlong *)(unaff_RBP + 0x178)) {
      *(undefined8 *)(unaff_RBP + 0x2f0) = 0;
      *(undefined8 *)(unaff_RBP + 0x2f8) = 0;
      *(undefined8 *)(unaff_RBP + 0x300) = 0;
      *(undefined8 *)(unaff_RBP + 0x308) = 0xf;
      *(undefined8 *)(unaff_RBP + 0x318) = 0;
      *(undefined8 *)(unaff_RBP + 800) = 0;
      *(undefined8 *)(unaff_RBP + 0x328) = 0;
      lVar10 = *(longlong *)(unaff_RBP + 0x2b0);
      uVar9 = *(undefined8 *)(unaff_RBP + 0x2b8);
      if (7 < *(ulonglong *)(lVar10 + 0x38)) {
        uVar9 = *(undefined8 *)(lVar10 + 0x20);
      }
      uVar3 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(unaff_RBP + 0x390) = uVar9;
      *(undefined8 *)(unaff_RBP + 0x398) = uVar3;
      FUN_140216adc(unaff_RBP + 0x158,unaff_RBP + 0x390,unaff_RBP + 0x410);
      FUN_140216a34(unaff_RBP + 0x368,unaff_RBP + 0x158,0);
      FUN_14027c77b(unaff_RBP + 0x410,*(longlong *)(unaff_RBP + 0x440) + 8,unaff_RBP + 0x368);
      FUN_1402c5d6a(unaff_RBP + 0x410,unaff_RBP + 0x390);
      FUN_14021615c(unaff_RBP + 0x2f0);
      *(undefined4 *)(unaff_RBP + 0x300) = *(undefined4 *)(unaff_RBP + 0x3a0);
      *(undefined4 *)(unaff_RBP + 0x304) = *(undefined4 *)(unaff_RBP + 0x3a4);
      *(undefined4 *)(unaff_RBP + 0x308) = *(undefined4 *)(unaff_RBP + 0x3a8);
      *(undefined4 *)(unaff_RBP + 0x30c) = *(undefined4 *)(unaff_RBP + 0x3ac);
      *(undefined4 *)(unaff_RBP + 0x2f0) = *(undefined4 *)(unaff_RBP + 0x390);
      *(undefined4 *)(unaff_RBP + 0x2f4) = *(undefined4 *)(unaff_RBP + 0x394);
      *(undefined4 *)(unaff_RBP + 0x2f8) = *(undefined4 *)(unaff_RBP + 0x398);
      *(undefined4 *)(unaff_RBP + 0x2fc) = *(undefined4 *)(unaff_RBP + 0x39c);
      *(undefined8 *)(unaff_RBP + 0x3a0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3a8) = 0xf;
      *(undefined1 *)(unaff_RBP + 0x390) = 0;
      FUN_1402133c2(unaff_RBP + 0x390);
      FUN_14021331c(unaff_RBP + 0x410);
      FUN_14021331c(unaff_RBP + 0x368);
      FUN_1402133c2(unaff_RBP + 0x158);
      *(undefined8 *)(unaff_RBP + 0x310) = *(undefined8 *)(*(longlong *)(unaff_RBP + 0x440) + 0x8c);
      FUN_14027c2a7(unaff_RBP + 0x410,unaff_RBP + 0x130,
                    "ftware cursor rendering (io.MouseDrawCursor) is set ImGui will draw the right cursor for you, otherwise your backend needs to handle it."
                   );
      lVar10 = unaff_RBP + 0x2f0;
      if (0xf < *(ulonglong *)(unaff_RBP + 0x308)) {
        lVar10 = *(longlong *)(unaff_RBP + 0x2f0);
      }
      puVar8 = (undefined8 *)
               FUN_1402147d0(unaff_RBP + 0x410,lVar10,*(undefined8 *)(unaff_RBP + 0x300));
      uVar9 = *puVar8;
      uVar3 = puVar8[1];
      uVar16 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uVar5 = *(undefined4 *)(puVar8 + 3);
      uVar6 = *(undefined4 *)((longlong)puVar8 + 0x1c);
      *(undefined4 *)(unaff_RBP + 0x3a0) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)(unaff_RBP + 0x3a4) = uVar16;
      *(undefined4 *)(unaff_RBP + 0x3a8) = uVar5;
      *(undefined4 *)(unaff_RBP + 0x3ac) = uVar6;
      *(undefined8 *)(unaff_RBP + 0x390) = uVar9;
      *(undefined8 *)(unaff_RBP + 0x398) = uVar3;
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
      *(undefined8 *)(unaff_RBP + 0x3f0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3f8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3e0) = 0;
      *(undefined8 *)(unaff_RBP + 1000) = 0;
      *(undefined8 *)(unaff_RBP + 0x3d0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3d8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3c0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3c8) = 0;
      *(undefined8 *)(unaff_RBP + 0x3b0) = 0;
      *(undefined8 *)(unaff_RBP + 0x3b8) = 0;
      *(undefined8 *)(unaff_RBP + 0x400) = 0;
      FUN_140233b3a(unaff_RBP + 0x3c8);
      FUN_1402133c2(unaff_RBP + 0x410);
      lVar10 = *(longlong *)(*(longlong *)(unaff_RBP + 0x440) + 0xb0);
      *(undefined8 *)(unaff_RBP + 0x438) = *(undefined8 *)(*(longlong *)(unaff_RBP + 0x440) + 0xb8);
      for (; lVar10 != *(longlong *)(unaff_RBP + 0x438); lVar10 = lVar10 + 0x80) {
        *(undefined8 *)(unaff_RBP + 0x410) = 0;
        *(undefined8 *)(unaff_RBP + 0x418) = 0;
        *(undefined8 *)(unaff_RBP + 0x420) = 0;
        *(undefined8 *)(unaff_RBP + 0x428) = 0xf;
        FUN_1402da550(unaff_RBP + 0x368,lVar10 + 8);
        FUN_14021615c(unaff_RBP + 0x410);
        *(undefined4 *)(unaff_RBP + 0x420) = *(undefined4 *)(unaff_RBP + 0x378);
        *(undefined4 *)(unaff_RBP + 0x424) = *(undefined4 *)(unaff_RBP + 0x37c);
        *(undefined4 *)(unaff_RBP + 0x428) = *(undefined4 *)(unaff_RBP + 0x380);
        *(undefined4 *)(unaff_RBP + 0x42c) = *(undefined4 *)(unaff_RBP + 900);
        *(undefined4 *)(unaff_RBP + 0x410) = *(undefined4 *)(unaff_RBP + 0x368);
        *(undefined4 *)(unaff_RBP + 0x414) = *(undefined4 *)(unaff_RBP + 0x36c);
        *(undefined4 *)(unaff_RBP + 0x418) = *(undefined4 *)(unaff_RBP + 0x370);
        *(undefined4 *)(unaff_RBP + 0x41c) = *(undefined4 *)(unaff_RBP + 0x374);
        *(undefined8 *)(unaff_RBP + 0x378) = 0;
        *(undefined8 *)(unaff_RBP + 0x380) = 0xf;
        *(undefined1 *)(unaff_RBP + 0x368) = 0;
        FUN_1402133c2(unaff_RBP + 0x368);
        *(undefined8 *)(unaff_RBP + 0x430) = *(undefined8 *)(lVar10 + 0x28);
        FUN_14027c3fd(unaff_RBP + 0x390,lVar10 + 8);
        lVar13 = *(longlong *)(lVar10 + 0x38);
        for (lVar12 = *(longlong *)(lVar10 + 0x30); lVar12 != lVar13; lVar12 = lVar12 + 0xa0) {
          plVar2 = *(longlong **)(lVar12 + 0x88);
          for (plVar11 = *(longlong **)(lVar12 + 0x80); plVar11 != plVar2; plVar11 = plVar11 + 2) {
            if ((int)((longlong *)*plVar11)[4] != 0x67) {
              plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar11 + 0x20))();
              lVar15 = plVar7[1];
              for (lVar14 = *plVar7; lVar14 != lVar15; lVar14 = lVar14 + 0x20) {
                FUN_14027c3fd(unaff_RBP + 0x390,lVar14);
              }
            }
          }
        }
        FUN_1402c5e9e(unaff_RBP + 0x318,unaff_RBP + 0x410);
        FUN_1402133c2(unaff_RBP + 0x410);
      }
      FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x390);
      FUN_1402c629c(&DAT_14062a178,unaff_RBP + 0x410,unaff_RBP + 0x2f0,unaff_RBP + 0x2f0);
      FUN_14027c312(unaff_RBP + 0x3b0);
      FUN_1402133c2(unaff_RBP + 0x390);
      FUN_1402c26b4(unaff_RBP + 0x318);
      FUN_1402133c2(unaff_RBP + 0x2f0);
      lVar12 = *(longlong *)(unaff_RBP + 0x440) + 200;
    }
    _DAT_140629e7c = 0.7;
    lVar10 = *(longlong *)(unaff_RBP + 0x2d0);
    FUN_1402c1054(lVar10);
    plVar11 = *(longlong **)(lVar10 + 0x2f8);
    *(undefined8 *)(unaff_RBP + 0x438) = *(undefined8 *)(lVar10 + 0x300);
    for (; plVar11 != *(longlong **)(unaff_RBP + 0x438); plVar11 = plVar11 + 0xf) {
      lVar10 = *(longlong *)(unaff_RBP + 0x2b0);
      uVar9 = *(undefined8 *)(unaff_RBP + 0x2b8);
      if (7 < *(ulonglong *)(lVar10 + 0x38)) {
        uVar9 = *(undefined8 *)(lVar10 + 0x20);
      }
      uVar3 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(unaff_RBP + 0x390) = uVar9;
      *(undefined8 *)(unaff_RBP + 0x398) = uVar3;
      FUN_140216adc(unaff_RBP + 0x158,unaff_RBP + 0x390,unaff_RBP + 0x2f0);
      FUN_140216a34(unaff_RBP + 0x368,unaff_RBP + 0x158,0);
      FUN_14027c77b(unaff_RBP + 0x2f0,plVar11 + 0xb,unaff_RBP + 0x368);
      uVar16 = FUN_1402c5d6a(unaff_RBP + 0x2f0,unaff_RBP + 0x390,unaff_RBP + 0x410);
      FUN_14027c2a7(uVar16,unaff_RBP + 0x130,"ou, otherwise your backend needs to handle it.");
      FUN_1402c24d4(unaff_RBP + 0x410);
      FUN_1402133c2();
      FUN_1402133c2(unaff_RBP + 0x390);
      FUN_14021331c(unaff_RBP + 0x2f0);
      FUN_14021331c(unaff_RBP + 0x368);
      FUN_1402133c2(unaff_RBP + 0x158);
      lVar12 = plVar11[1];
      for (lVar10 = *plVar11; lVar10 != lVar12; lVar10 = lVar10 + 0xa0) {
        FUN_1402da550(unaff_RBP + 0x2f0,lVar10);
        *(char **)(unaff_RBP + 0xf0) =
             "mHovered(_DelayShort) = %d\nIsItemHovered(_DelayNormal) = %d\nIsItemHovered(_Tooltip) = %d"
        ;
        *(undefined8 *)(unaff_RBP + 0xf8) = 0xb;
        FUN_14027c977(unaff_RBP + 0x390,unaff_RBP + 0xf0,unaff_RBP + 0x410,unaff_RBP + 0x2f0);
        *(undefined8 *)(unaff_RBP + 0x3f0) = 0;
        *(undefined8 *)(unaff_RBP + 0x3f8) = 0;
        *(undefined8 *)(unaff_RBP + 0x3e0) = 0;
        *(undefined8 *)(unaff_RBP + 1000) = 0;
        *(undefined8 *)(unaff_RBP + 0x3d0) = 0;
        *(undefined8 *)(unaff_RBP + 0x3d8) = 0;
        *(undefined8 *)(unaff_RBP + 0x3c0) = 0;
        *(undefined8 *)(unaff_RBP + 0x3c8) = 0;
        *(undefined8 *)(unaff_RBP + 0x3b0) = 0;
        *(undefined8 *)(unaff_RBP + 0x3b8) = 0;
        *(undefined8 *)(unaff_RBP + 0x400) = 0;
        FUN_140233b3a(unaff_RBP + 0x3c8);
        FUN_1402133c2(unaff_RBP + 0x2f0);
        FUN_14027c3fd(unaff_RBP + 0x390,lVar10);
        FUN_14027c3fd(unaff_RBP + 0x390,lVar10 + 0x20);
        lVar14 = *(longlong *)(lVar10 + 0x48);
        for (lVar13 = *(longlong *)(lVar10 + 0x40); lVar13 != lVar14; lVar13 = lVar13 + 0x80) {
          FUN_14027c3fd(unaff_RBP + 0x390,lVar13);
          lVar4 = *(longlong *)(lVar13 + 0x50);
          for (lVar15 = *(longlong *)(lVar13 + 0x48); lVar15 != lVar4; lVar15 = lVar15 + 0x20) {
            FUN_14027c3fd(unaff_RBP + 0x390,lVar15);
          }
        }
        FUN_1402da550(unaff_RBP + 0x368,lVar10);
        *(char **)(unaff_RBP + 0x100) = "tempted to read past end of file";
        *(undefined8 *)(unaff_RBP + 0x108) = 0xb;
        FUN_14027c977(unaff_RBP + 0x2f0,unaff_RBP + 0x100,unaff_RBP + 0x410,unaff_RBP + 0x368);
        *(undefined8 *)(unaff_RBP + 0x350) = 0;
        *(undefined8 *)(unaff_RBP + 0x358) = 0;
        *(undefined8 *)(unaff_RBP + 0x340) = 0;
        *(undefined8 *)(unaff_RBP + 0x348) = 0;
        *(undefined8 *)(unaff_RBP + 0x330) = 0;
        *(undefined8 *)(unaff_RBP + 0x338) = 0;
        *(undefined8 *)(unaff_RBP + 800) = 0;
        *(undefined8 *)(unaff_RBP + 0x328) = 0;
        *(undefined8 *)(unaff_RBP + 0x310) = 0;
        *(undefined8 *)(unaff_RBP + 0x318) = 0;
        *(undefined8 *)(unaff_RBP + 0x360) = 0;
        FUN_140233b3a(unaff_RBP + 0x328);
        FUN_1402133c2(unaff_RBP + 0x368);
        lVar14 = *(longlong *)(lVar10 + 0x68);
        for (lVar13 = *(longlong *)(lVar10 + 0x60); lVar13 != lVar14; lVar13 = lVar13 + 0x58) {
          FUN_14027c3fd(unaff_RBP + 0x2f0,lVar13);
          lVar4 = *(longlong *)(lVar13 + 0x40);
          for (lVar15 = *(longlong *)(lVar13 + 0x38); lVar15 != lVar4; lVar15 = lVar15 + 0x20) {
            FUN_14027c3fd(unaff_RBP + 0x2f0,lVar15);
          }
        }
        FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x390);
        FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x2f0);
        FUN_14027c312(unaff_RBP + 0x310);
        FUN_1402133c2(unaff_RBP + 0x2f0);
        FUN_14027c312(unaff_RBP + 0x3b0);
        FUN_1402133c2(unaff_RBP + 0x390);
      }
      _DAT_140629e7c = (float)((double)_DAT_140629e7c + _DAT_1404c90c0);
      FUN_1402133c2(unaff_RBP + 0x410);
    }
    FUN_14027c704(unaff_RBP + 0x238);
    FUN_1402133c2(unaff_RBP + 0x130);
    FUN_140254b0a(unaff_RBP + 0x2d0);
    uVar16 = FUN_14022811c(unaff_RBP + 0x200);
    FUN_14026ddb3(uVar16,*(undefined8 *)(unaff_RBP + 0x200));
    return;
  }
  if (*(longlong *)(unaff_RBP + 0x208) != 0) {
    FUN_14021331c(unaff_RBP + -0x20);
    FUN_140268dc2(unaff_RBP + 0x2e0);
    plVar11 = (longlong *)(unaff_RBP + 0x228);
    FUN_14027e16a(plVar11,plVar11,*(undefined8 *)(*plVar11 + 8));
    thunk_FUN_1404a2310(*plVar11,0x40);
    FUN_14027ca26(unaff_RBP + 0xc0);
    FUN_14021331c(unaff_RBP + 0x1d8);
    FUN_1402125bc(unaff_RBP + 0xa0);
    DAT_140629e79 = 1;
    FUN_14026e94a();
    return;
  }
  FUN_140229170(&DAT_140629e80,
                "leEnd\'){ $gameParty.members().forEach(function (actor) { actor.addNewState(actor.deathStateId()); }); BattleManager.processDefeat(); }"
                ,0x12);
  FUN_14026dd05();
  return;
}

