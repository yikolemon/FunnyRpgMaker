/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010a98a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a98a(char *param_1,undefined8 param_2,undefined1 *param_3)

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
    FUN_14007b686(&local_1c0,&DAT_140ecdcda,0,0,in_stack_fffffffffffffe08);
    *(float *)(param_1 + 8) = (float)local_1c0;
    fVar19 = (float)local_1c0;
  }
  local_1c0 = CONCAT44(fVar19 * _UNK_140e8d724,fVar19 * _DAT_140e8d720);
  FUN_140085d59(&local_1c0,4);
  cVar4 = FUN_140085d7e(param_2,param_3,0x400);
  if (cVar4 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x2bf0,"Examples/Assets Browser");
    cVar4 = FUN_1400c9c0a();
    if (cVar4 != '\0') {
      cVar4 = FUN_1400cadcc("File",1);
      if (cVar4 != '\0') {
        cVar4 = FUN_1400b06d6("Add 10000 items",0,0,1);
        if (cVar4 != '\0') {
          FUN_14010b998(local_f8,10000);
        }
        cVar4 = FUN_1400b06d6("Clear items",0,0,1);
        if (cVar4 != '\0') {
          FUN_14010bae8(local_f8);
        }
        FUN_1400b0bd1();
        cVar4 = FUN_1400b06d6("Close",0,0,param_3 != (undefined1 *)0x0);
        if (cVar4 != '\0') {
          *param_3 = 0;
        }
        FUN_1400cadd6();
      }
      cVar4 = FUN_1400cadcc("Edit",1);
      if (cVar4 != '\0') {
        cVar4 = FUN_1400b06d6("Delete",&DAT_140ec7db0,0,0 < *(int *)(local_f8 + 0x28));
        if (cVar4 != '\0') {
          local_f8[0x5c] = '\x01';
        }
        FUN_1400cadd6();
      }
      cVar4 = FUN_1400cadcc("Options",1);
      if (cVar4 != '\0') {
        fVar19 = (float)FUN_14008ff20();
        FUN_140093372(fVar19 * DAT_1401c86d0);
        FUN_1400b1021("Contents");
        pcVar13 = local_f8;
        FUN_1400aeb6a("Show Type Overlay",local_f8);
        FUN_1400aeb6a("Allow Sorting",pcVar13 + 1);
        FUN_1400b1021("Selection Behavior");
        FUN_1400aeb6a("Allow box-selection",pcVar13 + 2);
        cVar4 = FUN_1400aeb6a("Allow box-selection from selected items",pcVar13 + 3);
        if ((cVar4 != '\0') && (pcVar13[3] != '\0')) {
          pcVar13[4] = '\0';
        }
        cVar4 = FUN_1400aeb6a("Allow dragging unselected item",pcVar13 + 4);
        if ((cVar4 != '\0') && (pcVar13[4] != '\0')) {
          pcVar13[3] = '\0';
        }
        FUN_1400b1021("Layout");
        FUN_1400ba2c0("Icon Size",param_1 + 8,_caseD_100,DAT_140e8c780,&DAT_140ec9859,0);
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92("Use Ctrl+Wheel to zoom");
        FUN_1400ba55a("Icon Spacing",pcVar13 + 0xc,0,0x20,&DAT_140ecbfd4,0);
        in_stack_fffffffffffffe08 = &DAT_140ecbfd4;
        FUN_1400ba55a("Icon Hit Spacing",pcVar13 + 0x10,0,0x20,&DAT_140ecbfd4,0);
        FUN_1400aeb6a("Stretch Spacing",pcVar13 + 0x14);
        FUN_1400aeb6a("Use ScrollX",pcVar13 + 0x15);
        FUN_14009366e();
        FUN_1400cadd6();
      }
      FUN_1400c9e35();
    }
    uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    if (local_f8[1] == '\x01') {
      local_1c0 = 0;
      FUN_14007ae77(0xe,&local_1c0);
      uVar20 = FUN_14009376e();
      local_1c0 = (ulonglong)uVar20 << 0x20;
      uVar8 = (ulonglong)in_stack_fffffffffffffe08 & 0xffffffff00000000;
      cVar4 = FUN_14010cbe8("for_sort_specs_only",2,0x4002788,&local_1c0,uVar8);
      uVar31 = (undefined4)(uVar8 >> 0x20);
      if (cVar4 != '\0') {
        FUN_140112128("Index",0,0,0);
        FUN_140112128("Type",0,0,0);
        FUN_1401133b4();
        lVar7 = FUN_140112e1c();
        if ((lVar7 != 0) && ((*(char *)(lVar7 + 0xc) != '\0' || (local_f8[0x5d] != '\0')))) {
          if (1 < (longlong)*(int *)(local_f8 + 0x18)) {
            DAT_140f30fe0 = lVar7;
            FUN_1401a7460(*(undefined8 *)(local_f8 + 0x20),(longlong)*(int *)(local_f8 + 0x18),8,
                          &LAB_14010be68);
          }
          DAT_140f30fe0 = 0;
          local_f8[0x5d] = '\0';
          *(undefined1 *)(lVar7 + 0xc) = 0;
        }
        FUN_140110400();
      }
      FUN_14007af87(1);
    }
    local_140 = FUN_140081200();
    pcVar13 = local_f8;
    local_1c0 = (ulonglong)
                (uint)((*(float *)(local_f8 + 0x68) + *(float *)(local_f8 + 0x74)) *
                       (float)*(int *)(local_f8 + 0x84) + *(float *)(local_f8 + 0x7c)) << 0x20;
    FUN_14008fe0a(&local_1c0);
    uVar20 = FUN_140093756();
    local_1c0 = (ulonglong)(uVar20 ^ _DAT_1401c8590) << 0x20;
    cVar4 = FUN_14008a029("Assets",&local_1c0,1,0x804);
    if (cVar4 != '\0') {
      local_158 = FUN_14008feed();
      FUN_14008a381(&local_1c0);
      local_174 = (float)local_1c0;
      FUN_14010bb1c(pcVar13);
      FUN_14009311d(&local_170);
      local_170 = CONCAT44(*(float *)(pcVar13 + 0x7c) + (float)((ulonglong)local_170 >> 0x20),
                           *(float *)(pcVar13 + 0x7c) + (float)local_170);
      FUN_140093139(&local_170);
      iVar16 = 0x8000;
      if (pcVar13[4] == '\0') {
        iVar16 = (uint)(byte)pcVar13[3] << 0xe;
      }
      local_148 = (int *)(pcVar13 + 0x18);
      uVar8 = FUN_1400c75df((uint)(byte)pcVar13[2] * 0x80 + iVar16 + 0x10600,
                            *(undefined4 *)(pcVar13 + 0x28),*(undefined4 *)(pcVar13 + 0x18));
      *(char **)(pcVar13 + 0x30) = pcVar13;
      *(undefined1 **)(pcVar13 + 0x38) = &LAB_14010bedc;
      local_110 = (int *)(pcVar13 + 0x28);
      FUN_1400c8704(pcVar13 + 0x28,uVar8);
      bVar5 = FUN_14008e617(0x20a,1);
      bVar5 = 0 < *(int *)(pcVar13 + 0x28) & bVar5;
      local_f9 = bVar5 | pcVar13[0x5c];
      local_100 = -1;
      if (bVar5 != 0 || (pcVar13[0x5c] & 1U) != 0) {
        local_100 = FUN_140105110(local_110,uVar8,*local_148);
      }
      pcVar13 = local_f8;
      local_f8[0x5c] = '\0';
      local_1c0 = CONCAT44(*(undefined4 *)(local_f8 + 0x78),*(undefined4 *)(local_f8 + 0x78));
      FUN_14007ae77(0xe);
      local_17c = FUN_14007a641(0xdc232323);
      fVar19 = *(float *)(pcVar13 + 100);
      uVar30 = CONCAT44(uVar31,0xbf800000);
      FUN_14007b686(&local_1c0,&DAT_140ecdcdc,0,0,uVar30);
      fVar1 = (float)local_1c0;
      local_104 = *(int *)(pcVar13 + 0x80);
      FUN_1400796ae(&local_1c0);
      FUN_140079772(&local_1c0,*(undefined4 *)(local_f8 + 0x84),*(undefined4 *)(local_f8 + 0x70));
      if (local_100 != -1) {
        FUN_140079aaa(&local_1c0,(longlong)local_100 / (longlong)local_104 & 0xffffffff,
                      (int)((longlong)local_100 / (longlong)local_104) + 1);
      }
      uVar3 = *(ulonglong *)(uVar8 + 0x10);
      if (uVar3 != 0xffffffffffffffff) {
        uVar3 = (longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                (longlong)local_104;
        FUN_140079aaa(&local_1c0,uVar3 & 0xffffffff,(int)uVar3 + 1);
      }
      fVar23 = DAT_140211df8;
      fVar2 = DAT_1402113a0;
      fVar27 = _UNK_140211394;
      fVar26 = _DAT_140211390;
      fVar25 = DAT_1402112d0._4_4_;
      fVar22 = (float)DAT_1402112d0;
      local_160 = local_f8 + 100;
      fVar28 = (float)DAT_140e8d730;
      uVar3 = (ulonglong)DAT_140e8d730 >> 0x20;
      while (cVar4 = FUN_140079cee(&local_1c0), cVar4 != '\0') {
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
            FUN_140091425(*(undefined4 *)(local_150 + local_130 * 8));
            local_188 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_f8 + 0x6c) >> 0x20) *
                                 fVar29 + (float)((ulonglong)local_170 >> 0x20),
                                 (float)*(undefined8 *)(local_f8 + 0x6c) *
                                 (float)(local_11c % local_104) + (float)local_170);
            FUN_140093139(&local_188);
            FUN_1400c82a0(local_130);
            bVar5 = FUN_1400c85b6(local_110,*(undefined4 *)(local_150 + local_130 * 8));
            uVar14 = (undefined7)(uVar8 >> 8);
            local_fa = FUN_140090b81(local_160);
            FUN_1400b2126(&DAT_140edcdbf,CONCAT71(uVar14,bVar5) & 0xffffffff,0,local_160);
            bVar6 = FUN_140089f49();
            if (local_100 == local_11c) {
              FUN_140090580(0xffffffff);
            }
            cVar4 = FUN_140095b6d(0);
            bVar5 = bVar5 ^ bVar6;
            uVar8 = CONCAT71(uVar14,bVar5);
            if (cVar4 != '\0') {
              lVar7 = FUN_1400964be();
              if (lVar7 == 0) {
                local_1e8 = 0;
                local_128 = local_128 & 0xffffffff00000000;
                if (bVar5 == 0) {
                  local_118 = (undefined4 *)0x0;
                  puVar10 = (undefined4 *)FUN_140077ab4(0x20);
                  *puVar10 = *(undefined4 *)(local_150 + local_130 * 8);
                  iVar16 = 4;
                }
                else {
                  uVar18 = 0;
                  puVar10 = (undefined4 *)0x0;
                  uVar20 = 0;
                  while (local_118 = puVar10, cVar4 = FUN_1400c85d0(local_110,&local_1e8,&local_128)
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
                      puVar9 = (undefined4 *)FUN_140077ab4(uVar18 * 4);
                      if (puVar10 != (undefined4 *)0x0) {
                        FUN_1401c5180(puVar9,puVar10,(ulonglong)uVar20 * 4);
                        local_118 = puVar10;
                        FUN_140077b90(puVar10);
                      }
                    }
                    puVar10 = puVar9;
                    puVar10[uVar20] = (float)local_128;
                    uVar20 = uVar15;
                  }
                  iVar16 = uVar20 << 2;
                }
                local_118 = puVar10;
                FUN_140095e05("ASSETS_BROWSER_ITEMS",puVar10,iVar16,0);
                local_118 = puVar10;
                if (puVar10 != (undefined4 *)0x0) {
                  FUN_140077b90(puVar10);
                }
              }
              lVar7 = FUN_1400964be();
              iVar16 = *(int *)(lVar7 + 8);
              iVar12 = iVar16 + 3;
              if (-1 < iVar16) {
                iVar12 = iVar16;
              }
              FUN_1400abfd5("%d assets",iVar12 >> 2);
              FUN_140095dd0();
            }
            if (local_fa != '\0') {
              fVar21 = (float)local_188 + fVar22;
              fVar24 = (float)((ulonglong)local_188 >> 0x20) + fVar25;
              local_128 = CONCAT44(fVar24,fVar21);
              local_168 = CONCAT44((float)((ulonglong)*(undefined8 *)local_160 >> 0x20) + fVar24 +
                                   fVar27,(float)*(undefined8 *)local_160 + fVar21 + fVar26);
              uVar30 = uVar30 & 0xffffffff00000000;
              FUN_1400de294(local_158,&local_128,&local_168,local_17c,uVar30,0);
              if ((*local_f8 == '\x01') &&
                 (iVar16 = *(int *)(local_150 + 4 + local_130 * 8), iVar16 != 0)) {
                local_134 = local_128._4_4_ + fVar2;
                local_138 = (float)local_168 + fVar28;
                local_1e8 = CONCAT44(local_134 + (float)uVar3,local_138);
                local_138 = local_138 + fVar23;
                uVar30 = uVar30 & 0xffffffff00000000;
                FUN_1400de294(local_158,&local_138,&local_1e8,
                              *(undefined4 *)(&DAT_140e8d260 + (longlong)(iVar16 % 3) * 4),uVar30,0)
                ;
              }
              if (fVar1 <= fVar19) {
                uVar20 = FUN_14007a557(bVar5 ^ 1);
                uVar8 = (ulonglong)uVar20;
                FUN_140104e1d(&local_1e8,&DAT_140ecbfd4,*(undefined4 *)(local_150 + local_130 * 8));
                fVar21 = local_168._4_4_;
                local_134 = (float)FUN_14008ff20();
                local_134 = fVar21 - local_134;
                local_138 = (float)local_128;
                uVar30 = 0;
                FUN_1400dfb46(local_158,&local_138,uVar20,&local_1e8,0);
              }
            }
            FUN_140091667();
            iVar12 = local_11c + 1;
          }
        }
      }
      FUN_1400796ce(&local_1c0);
      if (*local_148 == 0) {
        local_1e8 = 0;
        FUN_1400b076d();
      }
      FUN_14007af87(1);
      cVar4 = FUN_140094baa(0,0);
      if (cVar4 != '\0') {
        FUN_1400abfd5("Selection: %d items",*local_110);
        FUN_1400b0bd1();
        cVar4 = FUN_1400b06d6("Delete",&DAT_140ec7db0,0,0 < *local_110);
        if (cVar4 != '\0') {
          local_f8[0x5c] = '\x01';
        }
        FUN_1400946ab();
      }
      uVar11 = FUN_1400c7e5d();
      FUN_1400c8704(local_110,uVar11);
      if ((local_f9 & 1) != 0) {
        FUN_14010bc5a(local_110,uVar11,local_148,local_100);
      }
      cVar4 = FUN_14008fd8e();
      if (cVar4 != '\0') {
        local_f8[0x60] = '\0';
        local_f8[0x61] = '\0';
        local_f8[0x62] = '\0';
        local_f8[99] = '\0';
      }
      cVar4 = FUN_14008fbb2(0);
      if ((cVar4 != '\0') &&
         ((((*(float *)(local_140 + 0xf8) != 0.0 || (NAN(*(float *)(local_140 + 0xf8)))) &&
           (cVar4 = FUN_140091d93(0x1000), cVar4 != '\0')) &&
          (cVar4 = FUN_140089f7a(), pcVar13 = local_f8, cVar4 == '\0')))) {
        fVar19 = *(float *)(local_140 + 0xf8) + *(float *)(local_f8 + 0x60);
        *(float *)(local_f8 + 0x60) = fVar19;
        if (DAT_1401c86c8 <= (float)(_DAT_1401ced40 & (uint)fVar19)) {
          fVar27 = *(float *)(local_140 + 0xe8) - (float)local_170;
          fVar25 = *(float *)(local_f8 + 0x74) * DAT_1401c86a0;
          fVar1 = *(float *)(local_f8 + 0x6c);
          fVar26 = ((*(float *)(local_140 + 0xec) - local_170._4_4_) + fVar25) /
                   *(float *)(local_f8 + 0x70);
          iVar16 = *(int *)(local_f8 + 0x80);
          fVar22 = (float)FUN_1401a65a0(DAT_14020ff9c,(float)(int)fVar19);
          fVar22 = fVar22 * *(float *)(pcVar13 + 8);
          *(float *)(pcVar13 + 8) = fVar22;
          fVar19 = _caseD_100;
          if ((_caseD_100 <= fVar22) && (fVar19 = DAT_140e8c780, fVar22 <= DAT_140e8c780)) {
            fVar19 = fVar22;
          }
          *(float *)(local_f8 + 8) = fVar19;
          *(float *)(local_f8 + 0x60) =
               *(float *)(local_f8 + 0x60) - (float)(int)*(float *)(local_f8 + 0x60);
          FUN_14010bb1c(local_f8,local_174);
          pcVar13 = local_f8;
          iVar12 = *(int *)(local_f8 + 0x80);
          fVar23 = (float)FUN_1401a3780(fVar26,DAT_1401c86c8);
          fVar19 = *(float *)(pcVar13 + 0x70);
          lVar7 = FUN_14007a54a();
          fVar22 = *(float *)(lVar7 + 0x18);
          fVar2 = *(float *)(local_140 + 0xec);
          FUN_14008fce3(&local_1e8);
          iVar16 = (int)fVar26 * iVar16 + (int)((fVar27 + fVar25) / fVar1);
          FUN_140093a57((fVar22 + fVar19 * (fVar23 + (float)(iVar16 / iVar12))) -
                        (fVar2 - local_1e8._4_4_),(longlong)iVar16 % (longlong)iVar12 & 0xffffffff);
        }
      }
      thunk_FUN_1400796ce(&local_1c0);
      pcVar13 = local_f8;
    }
    FUN_14008a651();
    FUN_1400abfd5("Selected: %d/%d items",*(undefined4 *)(pcVar13 + 0x28),
                  *(undefined4 *)(pcVar13 + 0x18));
  }
  FUN_140088c18();
  return;
}

