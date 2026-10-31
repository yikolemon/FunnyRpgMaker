/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c4c86 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c4c86(char *param_1,undefined8 param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int iVar12;
  char *pcVar13;
  undefined7 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined *in_stack_fffffffffffffe08;
  undefined4 uVar31;
  ulonglong uVar30;
  undefined8 local_1e8;
  undefined8 local_1c0;
  undefined8 local_188;
  int local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  longlong local_150;
  int *local_148;
  longlong local_140;
  float local_138;
  float local_134;
  longlong local_130;
  undefined8 local_128;
  int local_11c;
  undefined4 *local_118;
  int *local_110;
  int local_104;
  int local_100;
  char local_fa;
  byte local_f9;
  char *local_f8;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  fVar19 = *(float *)(param_1 + 8);
  local_f8 = param_1;
  if (*(float *)(param_1 + 8) <= 0.0) {
    in_stack_fffffffffffffe08 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe08 >> 0x20),0xbf800000);
    FUN_1801023ca(&local_1c0,&DAT_18036dbe4,0,0,in_stack_fffffffffffffe08);
    *(float *)(param_1 + 8) = (float)local_1c0;
    fVar19 = (float)local_1c0;
  }
  local_1c0 = CONCAT44(fVar19 * _UNK_180329394,fVar19 * _DAT_180329390);
  FUN_18010ca41(&local_1c0,4);
  cVar4 = FUN_18010ca66(param_2,param_3,0x400);
  if (cVar4 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x2bf0,"Examples/Assets Browser");
    cVar4 = FUN_180150cda();
    if (cVar4 != '\0') {
      cVar4 = FUN_180151e9c("File",1);
      if (cVar4 != '\0') {
        cVar4 = FUN_1801377a6("Add 10000 items",0,0,1);
        if (cVar4 != '\0') {
          FUN_1801c5c94(local_f8,10000);
        }
        cVar4 = FUN_1801377a6("Clear items",0,0,1);
        if (cVar4 != '\0') {
          FUN_1801c5de4(local_f8);
        }
        FUN_180137ca1();
        cVar4 = FUN_1801377a6("Close",0,0,param_3 != (undefined1 *)0x0);
        if (cVar4 != '\0') {
          *param_3 = 0;
        }
        FUN_180151ea6();
      }
      cVar4 = FUN_180151e9c("Edit",1);
      if (cVar4 != '\0') {
        cVar4 = FUN_1801377a6("Delete",&DAT_180366af8,0,0 < *(int *)(local_f8 + 0x28));
        if (cVar4 != '\0') {
          local_f8[0x5c] = '\x01';
        }
        FUN_180151ea6();
      }
      cVar4 = FUN_180151e9c("Options",1);
      if (cVar4 != '\0') {
        fVar19 = (float)FUN_180116c08();
        FUN_18011a05a(fVar19 * DAT_1802dc2dc);
        FUN_1801380f1("Contents");
        pcVar13 = local_f8;
        FUN_180135c3a("Show Type Overlay",local_f8);
        FUN_180135c3a("Allow Sorting",pcVar13 + 1);
        FUN_1801380f1("Selection Behavior");
        FUN_180135c3a("Allow box-selection",pcVar13 + 2);
        cVar4 = FUN_180135c3a("Allow box-selection from selected items",pcVar13 + 3);
        if ((cVar4 != '\0') && (pcVar13[3] != '\0')) {
          pcVar13[4] = '\0';
        }
        cVar4 = FUN_180135c3a("Allow dragging unselected item",pcVar13 + 4);
        if ((cVar4 != '\0') && (pcVar13[4] != '\0')) {
          pcVar13[3] = '\0';
        }
        FUN_1801380f1("Layout");
        FUN_180141390("Icon Size",param_1 + 8,DAT_1802de7b0,DAT_1803273b0,&DAT_180368758,0);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063("Use Ctrl+Wheel to zoom");
        FUN_18014162a("Icon Spacing",pcVar13 + 0xc,0,0x20,&DAT_18036b4b0,0);
        in_stack_fffffffffffffe08 = &DAT_18036b4b0;
        FUN_18014162a("Icon Hit Spacing",pcVar13 + 0x10,0,0x20,&DAT_18036b4b0,0);
        FUN_180135c3a("Stretch Spacing",pcVar13 + 0x14);
        FUN_180135c3a("Use ScrollX",pcVar13 + 0x15);
        FUN_18011a356();
        FUN_180151ea6();
      }
      FUN_180150f05();
    }
    uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    if (local_f8[1] == '\x01') {
      local_1c0 = 0;
      FUN_180101bbb(0xe,&local_1c0);
      uVar20 = FUN_18011a456();
      local_1c0 = (ulonglong)uVar20 << 0x20;
      uVar8 = (ulonglong)in_stack_fffffffffffffe08 & 0xffffffff00000000;
      cVar4 = FUN_180164c18("for_sort_specs_only",2,0x4002788,&local_1c0,uVar8);
      uVar31 = (undefined4)(uVar8 >> 0x20);
      if (cVar4 != '\0') {
        FUN_18016a158("Index",0,0,0);
        FUN_18016a158("Type",0,0,0);
        FUN_18016b3e4();
        lVar7 = FUN_18016ae4c();
        if ((lVar7 != 0) && ((*(char *)(lVar7 + 0xc) != '\0' || (local_f8[0x5d] != '\0')))) {
          if (1 < (longlong)*(int *)(local_f8 + 0x18)) {
            DAT_18041f890 = lVar7;
            FUN_180289570(*(undefined8 *)(local_f8 + 0x20),(longlong)*(int *)(local_f8 + 0x18),8,
                          &LAB_1801c6164);
          }
          DAT_18041f890 = 0;
          local_f8[0x5d] = '\0';
          *(undefined1 *)(lVar7 + 0xc) = 0;
        }
        FUN_180168430();
      }
      FUN_180101ccb(1);
    }
    local_140 = FUN_180107ee8();
    pcVar13 = local_f8;
    local_1c0 = (ulonglong)
                (uint)((*(float *)(local_f8 + 0x68) + *(float *)(local_f8 + 0x74)) *
                       (float)*(int *)(local_f8 + 0x84) + *(float *)(local_f8 + 0x7c)) << 0x20;
    FUN_180116af2(&local_1c0);
    uVar20 = FUN_18011a43e();
    local_1c0 = (ulonglong)(uVar20 ^ _DAT_1802b0ce0) << 0x20;
    cVar4 = FUN_180110d11("Assets",&local_1c0,1,0x804);
    if (cVar4 != '\0') {
      local_158 = FUN_180116bd5();
      FUN_180111069(&local_1c0);
      local_174 = (float)local_1c0;
      FUN_1801c5e18(pcVar13);
      FUN_180119e05(&local_170);
      local_170 = CONCAT44(*(float *)(pcVar13 + 0x7c) + (float)((ulonglong)local_170 >> 0x20),
                           *(float *)(pcVar13 + 0x7c) + (float)local_170);
      FUN_180119e21(&local_170);
      iVar16 = 0x8000;
      if (pcVar13[4] == '\0') {
        iVar16 = (uint)(byte)pcVar13[3] << 0xe;
      }
      local_148 = (int *)(pcVar13 + 0x18);
      uVar8 = FUN_18014e6af((uint)(byte)pcVar13[2] * 0x80 + iVar16 + 0x10600,
                            *(undefined4 *)(pcVar13 + 0x28),*(undefined4 *)(pcVar13 + 0x18));
      *(char **)(pcVar13 + 0x30) = pcVar13;
      *(undefined1 **)(pcVar13 + 0x38) = &LAB_1801c61d8;
      local_110 = (int *)(pcVar13 + 0x28);
      FUN_18014f7d4(pcVar13 + 0x28,uVar8);
      bVar5 = FUN_1801152ff(0x20a,1);
      bVar5 = 0 < *(int *)(pcVar13 + 0x28) & bVar5;
      local_f9 = bVar5 | pcVar13[0x5c];
      local_100 = -1;
      if (bVar5 != 0 || (pcVar13[0x5c] & 1U) != 0) {
        local_100 = FUN_1801bf40c(local_110,uVar8,*local_148);
      }
      pcVar13 = local_f8;
      local_f8[0x5c] = '\0';
      local_1c0 = CONCAT44(*(undefined4 *)(local_f8 + 0x78),*(undefined4 *)(local_f8 + 0x78));
      FUN_180101bbb(0xe);
      local_17c = FUN_180101385(0xdc232323);
      fVar19 = *(float *)(pcVar13 + 100);
      uVar30 = CONCAT44(uVar31,0xbf800000);
      FUN_1801023ca(&local_1c0,&DAT_18036dbe6,0,0,uVar30);
      fVar1 = (float)local_1c0;
      local_104 = *(int *)(pcVar13 + 0x80);
      FUN_1801003f2(&local_1c0);
      FUN_1801004b6(&local_1c0,*(undefined4 *)(local_f8 + 0x84),*(undefined4 *)(local_f8 + 0x70));
      if (local_100 != -1) {
        FUN_1801007ee(&local_1c0,(longlong)local_100 / (longlong)local_104 & 0xffffffff,
                      (int)((longlong)local_100 / (longlong)local_104) + 1);
      }
      uVar3 = *(ulonglong *)(uVar8 + 0x10);
      if (uVar3 != 0xffffffffffffffff) {
        uVar3 = (longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)local_104;
        FUN_1801007ee(&local_1c0,uVar3 & 0xffffffff,(int)uVar3 + 1);
      }
      fVar23 = DAT_1802df088;
      fVar2 = DAT_1802de650;
      fVar27 = _UNK_1802de644;
      fVar26 = _DAT_1802de640;
      fVar25 = DAT_1802de550._4_4_;
      fVar22 = (float)DAT_1802de550;
      local_160 = local_f8 + 100;
      fVar28 = (float)DAT_1803293a0;
      uVar3 = (ulonglong)DAT_1803293a0 >> 0x20;
      while (cVar4 = FUN_180100a32(&local_1c0), cVar4 != '\0') {
        iVar16 = (int)(float)local_1c0;
        while (iVar16 < local_1c0._4_4_) {
          iVar12 = iVar16 * local_104;
          local_178 = iVar16 + 1;
          local_180 = local_178 * local_104;
          if (*local_148 <= local_178 * local_104) {
            local_180 = *local_148;
          }
          fVar29 = (float)iVar16;
          while (iVar16 = local_178, iVar12 < local_180) {
            local_150 = *(longlong *)(local_f8 + 0x20);
            local_130 = (longlong)iVar12;
            local_11c = iVar12;
            FUN_18011810d(*(undefined4 *)(local_150 + local_130 * 8));
            local_188 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_f8 + 0x6c) >> 0x20) *
                                 fVar29 + (float)((ulonglong)local_170 >> 0x20),
                                 (float)*(undefined8 *)(local_f8 + 0x6c) *
                                 (float)(local_11c % local_104) + (float)local_170);
            FUN_180119e21(&local_188);
            FUN_18014f370(local_130);
            bVar5 = FUN_18014f686(local_110,*(undefined4 *)(local_150 + local_130 * 8));
            uVar14 = (undefined7)(uVar8 >> 8);
            local_fa = FUN_180117869(local_160);
            FUN_1801391f6(&DAT_1803861e4,CONCAT71(uVar14,bVar5) & 0xffffffff,0,local_160);
            bVar6 = FUN_180110c31();
            if (local_100 == local_11c) {
              FUN_180117268(0xffffffff);
            }
            cVar4 = FUN_18011c8b1(0);
            bVar5 = bVar5 ^ bVar6;
            uVar8 = CONCAT71(uVar14,bVar5);
            if (cVar4 != '\0') {
              lVar7 = FUN_18011d202();
              if (lVar7 == 0) {
                local_1e8 = 0;
                local_128 = local_128 & 0xffffffff00000000;
                if (bVar5 == 0) {
                  local_118 = (undefined4 *)0x0;
                  puVar10 = (undefined4 *)FUN_1800fe7f8(0x20);
                  *puVar10 = *(undefined4 *)(local_150 + local_130 * 8);
                  iVar16 = 4;
                }
                else {
                  uVar18 = 0;
                  puVar10 = (undefined4 *)0x0;
                  uVar20 = 0;
                  while (local_118 = puVar10, cVar4 = FUN_18014f6a0(local_110,&local_1e8,&local_128)
                        , cVar4 != '\0') {
                    uVar15 = uVar20 + 1;
                    puVar9 = puVar10;
                    if (uVar20 == (uint)uVar18) {
                      uVar17 = (uVar20 >> 1) + uVar20;
                      if (uVar20 == 0) {
                        uVar17 = 8;
                      }
                      if ((int)uVar17 <= (int)uVar15) {
                        uVar17 = uVar15;
                      }
                      uVar18 = (ulonglong)uVar17;
                      local_118 = puVar10;
                      puVar9 = (undefined4 *)FUN_1800fe7f8(uVar18 * 4);
                      if (puVar10 != (undefined4 *)0x0) {
                        FUN_1802a82f0(puVar9,puVar10,(ulonglong)uVar20 * 4);
                        local_118 = puVar10;
                        FUN_1800fe8d4(puVar10);
                      }
                    }
                    puVar10 = puVar9;
                    puVar10[uVar20] = (float)local_128;
                    uVar20 = uVar15;
                  }
                  iVar16 = uVar20 << 2;
                }
                local_118 = puVar10;
                FUN_18011cb49("ASSETS_BROWSER_ITEMS",puVar10,iVar16,0);
                local_118 = puVar10;
                if (puVar10 != (undefined4 *)0x0) {
                  FUN_1800fe8d4(puVar10);
                }
              }
              lVar7 = FUN_18011d202();
              iVar16 = *(int *)(lVar7 + 8);
              iVar12 = iVar16 + 3;
              if (-1 < iVar16) {
                iVar12 = iVar16;
              }
              FUN_1801330a5("%d assets",iVar12 >> 2);
              FUN_18011cb14();
            }
            if (local_fa != '\0') {
              fVar21 = (float)local_188 + fVar22;
              fVar24 = (float)((ulonglong)local_188 >> 0x20) + fVar25;
              local_128 = CONCAT44(fVar24,fVar21);
              local_168 = CONCAT44((float)((ulonglong)*(undefined8 *)local_160 >> 0x20) + fVar24 +
                                   fVar27,(float)*(undefined8 *)local_160 + fVar21 + fVar26);
              uVar30 = uVar30 & 0xffffffff00000000;
              FUN_180192d20(local_158,&local_128,&local_168,local_17c,uVar30,0);
              if ((*local_f8 == '\x01') &&
                 (iVar16 = *(int *)(local_150 + 4 + local_130 * 8), iVar16 != 0)) {
                local_134 = local_128._4_4_ + fVar2;
                local_138 = (float)local_168 + fVar28;
                local_1e8 = CONCAT44(local_134 + (float)uVar3,local_138);
                local_138 = local_138 + fVar23;
                uVar30 = uVar30 & 0xffffffff00000000;
                FUN_180192d20(local_158,&local_138,&local_1e8,
                              *(undefined4 *)(&DAT_180328ed0 + (longlong)(iVar16 % 3) * 4),uVar30,0)
                ;
              }
              if (fVar1 <= fVar19) {
                uVar20 = FUN_18010129b(bVar5 ^ 1);
                uVar8 = (ulonglong)uVar20;
                FUN_1801bf199(&local_1e8,&DAT_18036b4b0,*(undefined4 *)(local_150 + local_130 * 8));
                fVar21 = local_168._4_4_;
                local_134 = (float)FUN_180116c08();
                local_134 = fVar21 - local_134;
                local_138 = (float)local_128;
                uVar30 = 0;
                FUN_1801945d2(local_158,&local_138,uVar20,&local_1e8,0);
              }
            }
            FUN_18011834f();
            iVar12 = local_11c + 1;
          }
        }
      }
      FUN_180100412(&local_1c0);
      if (*local_148 == 0) {
        local_1e8 = 0;
        FUN_18013783d();
      }
      FUN_180101ccb(1);
      cVar4 = FUN_18011b8ee(0,0);
      if (cVar4 != '\0') {
        FUN_1801330a5("Selection: %d items",*local_110);
        FUN_180137ca1();
        cVar4 = FUN_1801377a6("Delete",&DAT_180366af8,0,0 < *local_110);
        if (cVar4 != '\0') {
          local_f8[0x5c] = '\x01';
        }
        FUN_18011b3ef();
      }
      uVar11 = FUN_18014ef2d();
      FUN_18014f7d4(local_110,uVar11);
      if ((local_f9 & 1) != 0) {
        FUN_1801c5f56(local_110,uVar11,local_148,local_100);
      }
      cVar4 = FUN_180116a76();
      if (cVar4 != '\0') {
        local_f8[0x60] = '\0';
        local_f8[0x61] = '\0';
        local_f8[0x62] = '\0';
        local_f8[99] = '\0';
      }
      cVar4 = FUN_18011689a(0);
      if ((cVar4 != '\0') &&
         ((((*(float *)(local_140 + 0xf8) != 0.0 || (NAN(*(float *)(local_140 + 0xf8)))) &&
           (cVar4 = FUN_180118a7b(0x1000), cVar4 != '\0')) &&
          (cVar4 = FUN_180110c62(), pcVar13 = local_f8, cVar4 == '\0')))) {
        fVar19 = *(float *)(local_140 + 0xf8) + *(float *)(local_f8 + 0x60);
        *(float *)(local_f8 + 0x60) = fVar19;
        if (DAT_1802ac570 <= (float)(_DAT_1802ac550 & (uint)fVar19)) {
          fVar27 = *(float *)(local_140 + 0xe8) - (float)local_170;
          fVar25 = *(float *)(local_f8 + 0x74) * DAT_1802dbb2c;
          fVar1 = *(float *)(local_f8 + 0x6c);
          fVar26 = ((*(float *)(local_140 + 0xec) - local_170._4_4_) + fVar25) /
                   *(float *)(local_f8 + 0x70);
          iVar16 = *(int *)(local_f8 + 0x80);
          fVar22 = (float)FUN_1802886b0(DAT_1802de794,(float)(int)fVar19);
          fVar22 = fVar22 * *(float *)(pcVar13 + 8);
          *(float *)(pcVar13 + 8) = fVar22;
          fVar19 = DAT_1802de7b0;
          if ((DAT_1802de7b0 <= fVar22) && (fVar19 = DAT_1803273b0, fVar22 <= DAT_1803273b0)) {
            fVar19 = fVar22;
          }
          *(float *)(local_f8 + 8) = fVar19;
          *(float *)(local_f8 + 0x60) =
               *(float *)(local_f8 + 0x60) - (float)(int)*(float *)(local_f8 + 0x60);
          FUN_1801c5e18(local_f8,local_174);
          pcVar13 = local_f8;
          iVar12 = *(int *)(local_f8 + 0x80);
          fVar23 = (float)FUN_180285540(fVar26,DAT_1802ac570);
          fVar19 = *(float *)(pcVar13 + 0x70);
          lVar7 = FUN_18010128e();
          fVar22 = *(float *)(lVar7 + 0x18);
          fVar2 = *(float *)(local_140 + 0xec);
          FUN_1801169cb(&local_1e8);
          iVar16 = (int)fVar26 * iVar16 + (int)((fVar27 + fVar25) / fVar1);
          FUN_18011a79b((fVar22 + fVar19 * (fVar23 + (float)(iVar16 / iVar12))) -
                        (fVar2 - local_1e8._4_4_),(longlong)iVar16 % (longlong)iVar12 & 0xffffffff);
        }
      }
      thunk_FUN_180100412(&local_1c0);
      pcVar13 = local_f8;
    }
    FUN_180111339();
    FUN_1801330a5("Selected: %d/%d items",*(undefined4 *)(pcVar13 + 0x28),
                  *(undefined4 *)(pcVar13 + 0x18));
  }
  FUN_18010f900();
  return;
}

