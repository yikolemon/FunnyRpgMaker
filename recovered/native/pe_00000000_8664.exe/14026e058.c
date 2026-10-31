/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026e058 */

/* WARNING: Instruction at (ram,0x00014026e059) overlaps instruction at (ram,0x00014026e058)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_14026e058(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *in_RAX;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong unaff_RBX;
  longlong lVar9;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_R14;
  longlong lVar14;
  longlong *unaff_R15;
  undefined4 uVar15;
  
  do {
    *(byte *)(in_RAX + 0x7116912) = *(byte *)(in_RAX + 0x7116912) & (byte)param_2;
    lVar12 = in_RAX[1];
    for (; unaff_RDI != lVar12; unaff_RDI = unaff_RDI + 0x20) {
      param_2 = unaff_RDI;
      FUN_14027c3fd(unaff_RBP + 0x390);
    }
    do {
      unaff_RSI = unaff_RSI + 2;
      while (unaff_RSI == unaff_R15) {
        FUN_14027c5dc(&DAT_140629d70,unaff_RBP + 0x390);
        FUN_14027c312(unaff_RBP + 0x3b0);
        FUN_1402133c2(unaff_RBP + 0x390);
        if (unaff_RBX + 0xde0 == unaff_R14) {
          _DAT_140629e7c = 0.55;
          lVar12 = *(longlong *)(unaff_RBP + 0x2d0);
          FUN_1402c1054(lVar12);
          lVar10 = *(longlong *)(lVar12 + 0x260);
          *(undefined8 *)(unaff_RBP + 0x178) = *(undefined8 *)(lVar12 + 0x268);
          while (*(longlong *)(unaff_RBP + 0x440) = lVar10,
                lVar10 != *(longlong *)(unaff_RBP + 0x178)) {
            *(undefined8 *)(unaff_RBP + 0x2f0) = 0;
            *(undefined8 *)(unaff_RBP + 0x2f8) = 0;
            *(undefined8 *)(unaff_RBP + 0x300) = 0;
            *(undefined8 *)(unaff_RBP + 0x308) = 0xf;
            *(undefined8 *)(unaff_RBP + 0x318) = 0;
            *(undefined8 *)(unaff_RBP + 800) = 0;
            *(undefined8 *)(unaff_RBP + 0x328) = 0;
            lVar12 = *(longlong *)(unaff_RBP + 0x2b0);
            uVar8 = *(undefined8 *)(unaff_RBP + 0x2b8);
            if (7 < *(ulonglong *)(lVar12 + 0x38)) {
              uVar8 = *(undefined8 *)(lVar12 + 0x20);
            }
            uVar1 = *(undefined8 *)(lVar12 + 0x30);
            *(undefined8 *)(unaff_RBP + 0x390) = uVar8;
            *(undefined8 *)(unaff_RBP + 0x398) = uVar1;
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
            *(undefined8 *)(unaff_RBP + 0x310) =
                 *(undefined8 *)(*(longlong *)(unaff_RBP + 0x440) + 0x8c);
            FUN_14027c2a7(unaff_RBP + 0x410,unaff_RBP + 0x130,
                          "ftware cursor rendering (io.MouseDrawCursor) is set ImGui will draw the right cursor for you, otherwise your backend needs to handle it."
                         );
            lVar12 = unaff_RBP + 0x2f0;
            if (0xf < *(ulonglong *)(unaff_RBP + 0x308)) {
              lVar12 = *(longlong *)(unaff_RBP + 0x2f0);
            }
            puVar6 = (undefined8 *)
                     FUN_1402147d0(unaff_RBP + 0x410,lVar12,*(undefined8 *)(unaff_RBP + 0x300));
            uVar8 = *puVar6;
            uVar1 = puVar6[1];
            uVar15 = *(undefined4 *)((longlong)puVar6 + 0x14);
            uVar4 = *(undefined4 *)(puVar6 + 3);
            uVar5 = *(undefined4 *)((longlong)puVar6 + 0x1c);
            *(undefined4 *)(unaff_RBP + 0x3a0) = *(undefined4 *)(puVar6 + 2);
            *(undefined4 *)(unaff_RBP + 0x3a4) = uVar15;
            *(undefined4 *)(unaff_RBP + 0x3a8) = uVar4;
            *(undefined4 *)(unaff_RBP + 0x3ac) = uVar5;
            *(undefined8 *)(unaff_RBP + 0x390) = uVar8;
            *(undefined8 *)(unaff_RBP + 0x398) = uVar1;
            puVar6[2] = 0;
            puVar6[3] = 0xf;
            *(undefined1 *)puVar6 = 0;
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
            lVar12 = *(longlong *)(*(longlong *)(unaff_RBP + 0x440) + 0xb0);
            *(undefined8 *)(unaff_RBP + 0x438) =
                 *(undefined8 *)(*(longlong *)(unaff_RBP + 0x440) + 0xb8);
            for (; lVar12 != *(longlong *)(unaff_RBP + 0x438); lVar12 = lVar12 + 0x80) {
              *(undefined8 *)(unaff_RBP + 0x410) = 0;
              *(undefined8 *)(unaff_RBP + 0x418) = 0;
              *(undefined8 *)(unaff_RBP + 0x420) = 0;
              *(undefined8 *)(unaff_RBP + 0x428) = 0xf;
              FUN_1402da550(unaff_RBP + 0x368,lVar12 + 8);
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
              *(undefined8 *)(unaff_RBP + 0x430) = *(undefined8 *)(lVar12 + 0x28);
              FUN_14027c3fd(unaff_RBP + 0x390,lVar12 + 8);
              lVar9 = *(longlong *)(lVar12 + 0x38);
              for (lVar10 = *(longlong *)(lVar12 + 0x30); lVar10 != lVar9; lVar10 = lVar10 + 0xa0) {
                plVar2 = *(longlong **)(lVar10 + 0x88);
                for (plVar13 = *(longlong **)(lVar10 + 0x80); plVar13 != plVar2;
                    plVar13 = plVar13 + 2) {
                  if ((int)((longlong *)*plVar13)[4] != 0x67) {
                    plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar13 + 0x20))();
                    lVar14 = plVar7[1];
                    for (lVar11 = *plVar7; lVar11 != lVar14; lVar11 = lVar11 + 0x20) {
                      FUN_14027c3fd(unaff_RBP + 0x390,lVar11);
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
            lVar10 = *(longlong *)(unaff_RBP + 0x440) + 200;
          }
          _DAT_140629e7c = 0.7;
          lVar12 = *(longlong *)(unaff_RBP + 0x2d0);
          FUN_1402c1054(lVar12);
          plVar13 = *(longlong **)(lVar12 + 0x2f8);
          *(undefined8 *)(unaff_RBP + 0x438) = *(undefined8 *)(lVar12 + 0x300);
          for (; plVar13 != *(longlong **)(unaff_RBP + 0x438); plVar13 = plVar13 + 0xf) {
            lVar12 = *(longlong *)(unaff_RBP + 0x2b0);
            uVar8 = *(undefined8 *)(unaff_RBP + 0x2b8);
            if (7 < *(ulonglong *)(lVar12 + 0x38)) {
              uVar8 = *(undefined8 *)(lVar12 + 0x20);
            }
            uVar1 = *(undefined8 *)(lVar12 + 0x30);
            *(undefined8 *)(unaff_RBP + 0x390) = uVar8;
            *(undefined8 *)(unaff_RBP + 0x398) = uVar1;
            FUN_140216adc(unaff_RBP + 0x158,unaff_RBP + 0x390,unaff_RBP + 0x2f0);
            FUN_140216a34(unaff_RBP + 0x368,unaff_RBP + 0x158,0);
            FUN_14027c77b(unaff_RBP + 0x2f0,plVar13 + 0xb,unaff_RBP + 0x368);
            uVar15 = FUN_1402c5d6a(unaff_RBP + 0x2f0,unaff_RBP + 0x390,unaff_RBP + 0x410);
            FUN_14027c2a7(uVar15,unaff_RBP + 0x130,"ou, otherwise your backend needs to handle it.")
            ;
            FUN_1402c24d4(unaff_RBP + 0x410);
            FUN_1402133c2();
            FUN_1402133c2(unaff_RBP + 0x390);
            FUN_14021331c(unaff_RBP + 0x2f0);
            FUN_14021331c(unaff_RBP + 0x368);
            FUN_1402133c2(unaff_RBP + 0x158);
            lVar10 = plVar13[1];
            for (lVar12 = *plVar13; lVar12 != lVar10; lVar12 = lVar12 + 0xa0) {
              FUN_1402da550(unaff_RBP + 0x2f0,lVar12);
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
              FUN_14027c3fd(unaff_RBP + 0x390,lVar12);
              FUN_14027c3fd(unaff_RBP + 0x390,lVar12 + 0x20);
              lVar11 = *(longlong *)(lVar12 + 0x48);
              for (lVar9 = *(longlong *)(lVar12 + 0x40); lVar9 != lVar11; lVar9 = lVar9 + 0x80) {
                FUN_14027c3fd(unaff_RBP + 0x390,lVar9);
                lVar3 = *(longlong *)(lVar9 + 0x50);
                for (lVar14 = *(longlong *)(lVar9 + 0x48); lVar14 != lVar3; lVar14 = lVar14 + 0x20)
                {
                  FUN_14027c3fd(unaff_RBP + 0x390,lVar14);
                }
              }
              FUN_1402da550(unaff_RBP + 0x368,lVar12);
              *(char **)(unaff_RBP + 0x100) = "tempted to read past end of file";
              *(undefined8 *)(unaff_RBP + 0x108) = 0xb;
              FUN_14027c977(unaff_RBP + 0x2f0,unaff_RBP + 0x100,unaff_RBP + 0x410,unaff_RBP + 0x368)
              ;
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
              lVar11 = *(longlong *)(lVar12 + 0x68);
              for (lVar9 = *(longlong *)(lVar12 + 0x60); lVar9 != lVar11; lVar9 = lVar9 + 0x58) {
                FUN_14027c3fd(unaff_RBP + 0x2f0,lVar9);
                lVar3 = *(longlong *)(lVar9 + 0x40);
                for (lVar14 = *(longlong *)(lVar9 + 0x38); lVar14 != lVar3; lVar14 = lVar14 + 0x20)
                {
                  FUN_14027c3fd(unaff_RBP + 0x2f0,lVar14);
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
          uVar15 = FUN_14022811c(unaff_RBP + 0x200);
          FUN_14026ddb3(uVar15,*(undefined8 *)(unaff_RBP + 0x200));
          return;
        }
        param_2 = unaff_RBX + 0xe08;
        FUN_1402da550(unaff_RBP + 0x390,param_2);
        FUN_1402c222c(&DAT_140628d98,unaff_RBP + 0x390);
        FUN_1402133c2(unaff_RBP + 0x390);
        FUN_1402da550(unaff_RBP + 0x2f0,param_2);
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
        FUN_14027c3fd(unaff_RBP + 0x390);
        unaff_R15 = *(longlong **)(unaff_RBX + 0xe30);
        unaff_RSI = *(longlong **)(unaff_RBX + 0xe28);
        unaff_RBX = unaff_RBX + 0xde0;
      }
    } while ((int)((longlong *)*unaff_RSI)[4] == 0x67);
    in_RAX = (longlong *)(**(code **)(*(longlong *)*unaff_RSI + 0x20))();
    unaff_RDI = *in_RAX;
  } while( true );
}

