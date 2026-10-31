/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001c3fe */

longlong * FUN_14001c3fe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  char ***pppcVar7;
  char cVar8;
  int iVar9;
  undefined7 uVar16;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  char ****ppppcVar14;
  undefined8 uVar15;
  uint *puVar17;
  char *pcVar18;
  undefined8 ****ppppuVar19;
  bool bVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *local_308;
  longlong local_300;
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [64];
  undefined1 local_218 [32];
  undefined8 ***local_1f8 [2];
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  ulonglong local_1a0;
  ulonglong uStack_198;
  int local_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_178;
  ulonglong uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  int local_128;
  int local_124;
  char ***local_120;
  char ***local_118;
  char ***pppcStack_110;
  ulonglong local_108;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  char ***local_e8;
  char ***pppcStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  uint local_c4;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char ***local_98;
  char ***pppcStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  char local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_e8 = (char ***)0x0;
  pppcStack_e0 = (char ***)0x0;
  local_d8 = 0;
  uStack_d0 = 0xf;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0xf;
  local_c0 = param_2;
  FUN_14000169c(&local_168,"default");
  FUN_14000169c(local_218,"default");
  uVar15 = local_148;
  *local_c0 = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  bVar3 = *(byte *)(param_1 + 0x21);
  uVar16 = (undefined7)((ulonglong)local_c0 >> 8);
  bVar4 = *(byte *)(param_1 + 0x22);
  local_18c = (int)(char)bVar3;
  local_128 = (int)(char)bVar4;
  if (bVar4 == 0x5d && bVar3 == 0x5b) {
    local_f0 = (undefined4)CONCAT71(uVar16,*(char *)(param_1 + 0x23) == ',');
  }
  else {
    if (((bVar3 & 0xdf) == 0) && (bVar3 == bVar4)) {
      local_128 = 0x5d;
      local_f0 = (undefined4)CONCAT71(uVar16,1);
      local_18c = 0x5b;
      bVar20 = true;
      goto code_r0x00014001c51f;
    }
    local_f0 = 0;
  }
  bVar20 = false;
code_r0x00014001c51f:
  bVar3 = *(byte *)(param_1 + 0x23);
  local_f4 = 0x2c;
  if (bVar3 != 0x20) {
    local_f4 = (uint)bVar3;
  }
  if (!bVar20) {
    local_f4 = (uint)bVar3;
  }
  local_308 = &local_148;
  local_148._3_5_ = SUB85(uVar15,3);
  local_148._0_3_ =
       CONCAT12(*(undefined1 *)(param_1 + 0x24),
                CONCAT11(*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28)));
  local_300 = (longlong)&local_148 + 3;
  FUN_14002766a(local_1f8,&local_308,&local_b8);
  local_124 = 0;
  local_c4 = 0;
  do {
    plVar10 = (longlong *)FUN_1400276be(param_3,&local_1d8);
    if ((*(byte *)((longlong)plVar10 + (longlong)*(int *)(*plVar10 + 4) + 0x10) & 6) != 0) {
      cVar8 = FUN_14000d7b8(&local_168,"default");
      if (cVar8 == '\0') {
        local_148 = (char ****)0x0;
        uStack_140 = (char ****)0x0;
        local_138 = 0;
        uStack_130 = 0xf;
        FUN_140028a54(local_c0);
        FUN_14002781a(&local_b8,&local_168,&local_148,*(undefined1 *)(param_1 + 0x28));
        lVar11 = local_c0[1];
        if ((undefined8 *)(lVar11 + -0x50) != &local_b8) {
          FUN_14000eeca();
          *(char *****)(lVar11 + -0x50) = local_b8;
          *(char *****)(lVar11 + -0x48) = uStack_b0;
          *(ulonglong *)(lVar11 + -0x40) = local_a8;
          local_b8 = (char ****)0x0;
          uStack_b0 = (char ****)0x0;
          local_a8 = 0;
        }
        FUN_14000eeca(&local_b8);
        plVar10 = local_c0;
        FUN_140017200(local_c0[1] + -0x38,&DAT_140171466,2);
        while (lVar11 = plVar10[1],
              0x20 < (ulonglong)(*(longlong *)(lVar11 + -0x48) - *(longlong *)(lVar11 + -0x50))) {
          FUN_140029b98(plVar10,lVar11 + -0x50);
          lVar11 = plVar10[1];
          FUN_1400017de(*(longlong *)(lVar11 + -0x48) + -0x20);
          plVar2 = (longlong *)(lVar11 + -0x48);
          *plVar2 = *plVar2 + -0x20;
        }
        FUN_1400017de(&local_148);
      }
      FUN_1400017de(local_1f8);
      FUN_1400017de(local_218);
      FUN_1400017de(&local_168);
      FUN_1400017de(&local_1d8);
      FUN_1400017de(&local_e8);
      return local_c0;
    }
    local_118 = (char ***)0x0;
    pppcStack_110 = (char ***)0x0;
    local_108 = 0;
    local_148 = (char ****)0x0;
    uStack_140 = (char ****)0x0;
    local_138 = 0;
    uStack_130 = 0xf;
    FUN_1400276ef(&local_b8,&local_1d8);
    FUN_1400065bc(&local_e8);
    local_d8 = local_a8;
    uStack_d0 = uStack_a0;
    local_e8 = (char ***)local_b8;
    pppcStack_e0 = (char ***)uStack_b0;
    local_a8 = 0;
    uStack_a0 = 0xf;
    local_b8 = (char ****)((ulonglong)local_b8 & 0xffffffffffffff00);
    FUN_1400017de(&local_b8);
    uVar22 = local_d8;
    if (local_d8 < 3) goto LAB_14001c654;
    iVar9 = FUN_14000d73c(&local_e8,0,3,&DAT_140171d20);
    if (iVar9 == 0) {
code_r0x00014001c99d:
      ppppcVar14 = &local_e8;
      if (0xf < uStack_d0) {
        ppppcVar14 = (char ****)local_e8;
      }
      cVar8 = *(char *)ppppcVar14;
      do {
        do {
          plVar10 = (longlong *)FUN_1400276be(param_3,&local_e8);
          if ((*(byte *)((longlong)plVar10 + (longlong)*(int *)(*plVar10 + 4) + 0x10) & 6) != 0)
          goto LAB_14001c654;
          ppppcVar14 = &local_e8;
          if (0xf < uStack_d0) {
            ppppcVar14 = (char ****)local_e8;
          }
          FUN_1400293e4(&local_b8,(char *)((longlong)ppppcVar14 + local_d8));
          ppppcVar14 = &local_e8;
          if (0xf < uStack_d0) {
            ppppcVar14 = (char ****)local_e8;
          }
          pcVar13 = (char *)((longlong)ppppcVar14 + (local_d8 - (longlong)local_b8));
          pcVar18 = (char *)(local_d8 - ((longlong)local_b8 - (longlong)ppppcVar14));
          if (pcVar13 <= pcVar18) {
            pcVar18 = pcVar13;
          }
          uVar22 = local_d8 - (longlong)pcVar18;
          FUN_140135ff0(local_b8,(char *)((longlong)local_b8 + (longlong)pcVar18),
                        (uVar22 - ((longlong)local_b8 - (longlong)ppppcVar14)) + 1);
          ppppcVar14 = &local_e8;
          if (0xf < uStack_d0) {
            ppppcVar14 = (char ****)local_e8;
          }
          local_d8 = uVar22;
          FUN_14002930a(&local_b8,ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22));
          ppppcVar14 = &local_e8;
          if (0xf < uStack_d0) {
            ppppcVar14 = (char ****)local_e8;
          }
          uVar22 = (longlong)local_b8 - (longlong)ppppcVar14;
          if (local_d8 < (ulonglong)((longlong)local_b8 - (longlong)ppppcVar14)) {
            uVar22 = local_d8;
          }
          uVar12 = local_d8 - uVar22;
          FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),uVar12 + 1);
          local_d8 = uVar12;
        } while (uVar12 < 3);
        ppppcVar14 = &local_e8;
        if (0xf < uStack_d0) {
          ppppcVar14 = (char ****)local_e8;
        }
      } while (((*(char *)((longlong)ppppcVar14 + (uVar12 - 1)) != cVar8) ||
               (*(char *)((longlong)ppppcVar14 + (uVar12 - 2)) != cVar8)) ||
              (*(char *)((longlong)ppppcVar14 + (uVar12 - 3)) != cVar8));
    }
    else {
      iVar9 = FUN_14000d73c(&local_e8,0,3,&DAT_140171cd8);
      if (iVar9 == 0) goto code_r0x00014001c99d;
      ppppcVar14 = &local_e8;
      if (0xf < uStack_d0) {
        ppppcVar14 = (char ****)local_e8;
      }
      cVar8 = *(char *)ppppcVar14;
      if ((cVar8 != '#') && (cVar8 != ';')) {
        if ((cVar8 == '[') && (*(char *)((longlong)ppppcVar14 + (local_d8 - 1)) == ']')) {
          cVar8 = FUN_14000d7b8(&local_168,"default");
          if (cVar8 == '\0') {
            FUN_140028a54(local_c0);
            FUN_14002781a(&local_b8,&local_168,&local_148,*(undefined1 *)(param_1 + 0x28));
            lVar11 = local_c0[1];
            if ((char ****)(lVar11 + -0x50) != (char ****)&local_b8) {
              FUN_14000eeca();
              *(char *****)(lVar11 + -0x50) = local_b8;
              *(char *****)(lVar11 + -0x48) = uStack_b0;
              *(ulonglong *)(lVar11 + -0x40) = local_a8;
              local_b8 = (char ****)0x0;
              uStack_b0 = (char ****)0x0;
              local_a8 = 0;
            }
            FUN_14000eeca(&local_b8);
            FUN_140017200(local_c0[1] + -0x38,&DAT_140171466,2);
          }
          FUN_1400191d4(&local_b8,&local_e8,1,uVar22 - 2,&local_98);
          FUN_1400065bc(&local_168);
          local_158 = (undefined4)local_a8;
          uStack_154 = local_a8._4_4_;
          uStack_150 = (undefined4)uStack_a0;
          uStack_14c = uStack_a0._4_4_;
          local_168 = (undefined4)local_b8;
          uStack_164 = local_b8._4_4_;
          uStack_160 = (undefined4)uStack_b0;
          uStack_15c = uStack_b0._4_4_;
          local_a8 = 0;
          uStack_a0 = 0xf;
          local_b8 = (char ****)((ulonglong)local_b8 & 0xffffffffffffff00);
          FUN_1400017de(&local_b8);
          uVar22 = CONCAT44(uStack_154,local_158);
          if (1 < uVar22) {
            pcVar18 = (char *)&local_168;
            if (0xf < CONCAT44(uStack_14c,uStack_150)) {
              pcVar18 = (char *)CONCAT44(uStack_164,local_168);
            }
            if ((*pcVar18 == '[') && (pcVar18[uVar22 - 1] == ']')) {
              FUN_1400191d4(&local_b8,&local_168,1,uVar22 - 2,&local_98);
              FUN_1400065bc(&local_168);
              local_158 = (undefined4)local_a8;
              uStack_154 = local_a8._4_4_;
              uStack_150 = (undefined4)uStack_a0;
              uStack_14c = uStack_a0._4_4_;
              local_168 = (undefined4)local_b8;
              uStack_164 = local_b8._4_4_;
              uStack_160 = (undefined4)uStack_b0;
              uStack_15c = uStack_b0._4_4_;
              local_a8 = 0;
              uStack_a0 = 0xf;
              local_b8 = (char ****)((ulonglong)local_b8 & 0xffffffffffffff00);
              FUN_1400017de(&local_b8);
            }
          }
          FUN_140006874(&local_1b0,&local_168);
          puVar17 = &local_1b0;
          if (0xf < uStack_198) {
            puVar17 = (uint *)CONCAT44(uStack_1ac,local_1b0);
          }
          FUN_140017bc5(&local_b8,puVar17,local_1a0 + (longlong)puVar17,puVar17);
          local_b8 = (char ****)CONCAT44(uStack_1ac,local_1b0);
          uStack_b0 = (char ****)CONCAT44(uStack_1a4,uStack_1a8);
          local_a8 = local_1a0;
          uStack_a0 = uStack_198;
          local_1a0 = 0;
          uStack_198 = 0xf;
          local_1b0 = local_1b0 & 0xffffff00;
          FUN_1400017de(&local_1b0);
          cVar8 = FUN_14000d7b8(&local_b8,"default");
          FUN_1400017de(&local_b8);
          if (cVar8 == '\0') {
            FUN_140027c93(local_c0,&local_168,*(undefined1 *)(param_1 + 0x28));
          }
          else {
            FUN_140017200(&local_168,"default",7);
          }
          puVar21 = &local_168;
          cVar8 = FUN_1400170b4(puVar21,local_218);
          if (cVar8 == '\0') {
            if (0xf < CONCAT44(uStack_14c,uStack_150)) {
              puVar21 = (undefined4 *)CONCAT44(uStack_164,local_168);
            }
            local_124 = 0;
            FUN_140017200(local_218,puVar21,CONCAT44(uStack_154,local_158));
            local_c4 = 0;
          }
          else {
            local_124 = local_124 + 1;
            local_c4 = 0;
          }
        }
        else if (cVar8 != *(char *)(param_1 + 0x20)) {
          lVar11 = FUN_14000d806(ppppcVar14,local_d8,0,&DAT_140170498,3);
          uVar22 = 0;
          if (lVar11 != -1) {
            uVar22 = 0;
            while (uVar22 < local_d8) {
              ppppcVar14 = &local_e8;
              if (0xf < uStack_d0) {
                ppppcVar14 = (char ****)local_e8;
              }
              bVar3 = *(byte *)((longlong)ppppcVar14 + uVar22);
              uVar6 = (uint)bVar3;
              if ((uVar6 - 0x22 < 0x3f) &&
                 ((0x4000000000000021U >> ((ulonglong)(uVar6 - 0x22) & 0x3f) & 1) != 0)) {
                uVar22 = FUN_140027fd2(&local_e8,uVar22);
LAB_14001cb93:
                uVar22 = uVar22 + 1;
              }
              else {
                if ((bVar3 == *(byte *)(param_1 + 0x24)) || (bVar3 == *(byte *)(param_1 + 0x20))) {
                  uVar22 = uVar22 - 1;
                  break;
                }
                if (((uVar6 == 9) || (uVar6 == 0x20)) || (bVar3 == *(byte *)(param_1 + 0x28)))
                goto LAB_14001cb93;
                ppppuVar19 = local_1f8;
                if (0xf < local_1e0) {
                  ppppuVar19 = (undefined8 ****)local_1f8[0];
                }
                uVar22 = FUN_14000d806(ppppcVar14,local_d8,uVar22,ppppuVar19,local_1e8);
              }
            }
          }
          uVar12 = FUN_14000e108(&local_e8,*(undefined1 *)(param_1 + 0x24),uVar22 + 1);
          uVar22 = FUN_14000e108(&local_e8,*(undefined1 *)(param_1 + 0x20),uVar22);
          if (uVar12 == 0xffffffffffffffff || uVar22 < uVar12) {
            FUN_1400191d4(&local_98,&local_e8,0,uVar22,&local_b8);
            FUN_1400276ef(&local_b8,&local_98);
            FUN_1400065bc(&local_148);
            local_138 = local_a8;
            uStack_130 = uStack_a0;
            local_148 = local_b8;
            uStack_140 = uStack_b0;
            local_a8 = 0;
            uStack_a0 = 0xf;
            local_b8 = (char ****)((ulonglong)local_b8 & 0xffffffffffffff00);
            FUN_1400017de(&local_b8);
            FUN_1400017de(&local_98);
            FUN_14000169c(&local_b8,&DAT_14016fed7);
            FUN_140020e9e(&local_118,&local_b8,1);
            FUN_1400017de(&local_b8);
          }
          else {
            FUN_1400191d4(&local_98,&local_e8,0,uVar12,&local_b8);
            FUN_1400276ef(&local_b8,&local_98);
            FUN_1400065bc(&local_148);
            local_138 = local_a8;
            uStack_130 = uStack_a0;
            local_148 = local_b8;
            uStack_140 = uStack_b0;
            local_a8 = 0;
            uStack_a0 = 0xf;
            local_b8 = (char ****)((ulonglong)local_b8 & 0xffffffffffffff00);
            FUN_1400017de(&local_b8);
            FUN_1400017de(&local_98);
            lVar11 = uVar12 + 1;
            FUN_1400191d4(&local_98,&local_e8,lVar11,0xffffffffffffffff,&local_b8);
            FUN_1400276ef(&local_b8,&local_98);
            FUN_1400017de(&local_98);
            iVar9 = FUN_14000d73c(&local_b8,0,3,&DAT_140171cd8);
            if (iVar9 == 0) {
code_r0x00014001d0ed:
              ppppcVar14 = (char ****)&local_b8;
              if (0xf < uStack_a0) {
                ppppcVar14 = local_b8;
              }
              local_71 = *(char *)ppppcVar14;
              FUN_1400191d4(&local_98,&local_1d8,lVar11,0xffffffffffffffff,&local_188);
              FUN_1400065bc(&local_b8);
              local_a8 = local_88;
              uStack_a0 = uStack_80;
              local_b8 = (char ****)local_98;
              uStack_b0 = (char ****)pppcStack_90;
              local_88 = 0;
              uStack_80 = 0xf;
              local_98 = (char ***)((ulonglong)local_98 & 0xffffffffffffff00);
              FUN_1400017de(&local_98);
              ppppcVar14 = (char ****)&local_b8;
              if (0xf < uStack_a0) {
                ppppcVar14 = local_b8;
              }
              FUN_14002930a(&local_98,ppppcVar14,(char *)((longlong)ppppcVar14 + local_a8));
              ppppcVar14 = (char ****)&local_b8;
              if (0xf < uStack_a0) {
                ppppcVar14 = local_b8;
              }
              uVar22 = (longlong)local_98 - (longlong)ppppcVar14;
              if (local_a8 < (ulonglong)((longlong)local_98 - (longlong)ppppcVar14)) {
                uVar22 = local_a8;
              }
              uVar12 = local_a8 - uVar22;
              FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),uVar12 + 1);
              uVar22 = 3;
              if (uVar12 < 3) {
                uVar22 = uVar12;
              }
              ppppcVar14 = (char ****)&local_b8;
              if (0xf < uStack_a0) {
                ppppcVar14 = local_b8;
              }
              uVar23 = uVar12 - uVar22;
              local_a8 = uVar12;
              ppppcVar14 = (char ****)
                           FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),
                                         uVar23 + 1);
              local_a8 = uVar23;
              if (uVar12 < 4) {
LAB_14001d311:
                local_120 = (char ***)0x0;
              }
              else {
                ppppcVar14 = (char ****)&local_b8;
                if (0xf < uStack_a0) {
                  ppppcVar14 = local_b8;
                }
                if (*(char *)((longlong)ppppcVar14 + (uVar23 - 1)) != '\\') goto LAB_14001d311;
                local_a8 = uVar23 - 1;
                *(char *)((longlong)ppppcVar14 + (uVar23 - 1)) = '\0';
                ppppcVar14 = (char ****)CONCAT71((int7)((ulonglong)ppppcVar14 >> 8),1);
                local_120 = (char ***)ppppcVar14;
              }
              bVar20 = true;
              local_ec = (undefined4)CONCAT71((int7)((ulonglong)ppppcVar14 >> 8),1);
              do {
                if (!bVar20) break;
                local_98 = (char ***)0x0;
                pppcStack_90 = (char ***)0x0;
                local_88 = 0;
                uStack_80 = 0xf;
                plVar10 = (longlong *)FUN_1400276be(param_3,&local_98);
                uVar6 = *(uint *)((longlong)plVar10 + (longlong)*(int *)(*plVar10 + 4) + 0x10);
                bVar20 = true;
                if ((uVar6 & 6) == 0) {
                  ppppcVar14 = &local_98;
                  if (0xf < uStack_80) {
                    ppppcVar14 = (char ****)local_98;
                  }
                  FUN_140017200(&local_e8,ppppcVar14,local_88);
                  ppppcVar14 = &local_e8;
                  if (0xf < uStack_d0) {
                    ppppcVar14 = (char ****)local_e8;
                  }
                  FUN_1400293e4(&local_188,(char *)((longlong)ppppcVar14 + local_d8));
                  ppppcVar14 = &local_e8;
                  if (0xf < uStack_d0) {
                    ppppcVar14 = (char ****)local_e8;
                  }
                  lVar11 = CONCAT44(uStack_184,local_188);
                  pcVar13 = (char *)((longlong)ppppcVar14 + (local_d8 - lVar11));
                  pcVar18 = (char *)(local_d8 - (lVar11 - (longlong)ppppcVar14));
                  if (pcVar13 <= pcVar18) {
                    pcVar18 = pcVar13;
                  }
                  uVar22 = local_d8 - (longlong)pcVar18;
                  FUN_140135ff0(lVar11,pcVar18 + lVar11,
                                (uVar22 - (lVar11 - (longlong)ppppcVar14)) + 1);
                  local_d8 = uVar22;
                  if (2 < uVar22) {
                    ppppcVar14 = &local_e8;
                    if (0xf < uStack_d0) {
                      ppppcVar14 = (char ****)local_e8;
                    }
                    if (((*(char *)((longlong)ppppcVar14 + (uVar22 - 1)) == local_71) &&
                        (*(char *)((longlong)ppppcVar14 + (uVar22 - 2)) == local_71)) &&
                       (*(char *)((longlong)ppppcVar14 + (uVar22 - 3)) == local_71)) {
                      local_d8 = uVar22 - 1;
                      *(char *)((longlong)ppppcVar14 + (uVar22 - 1)) = '\0';
                      ppppcVar14 = &local_e8;
                      if (0xf < uStack_d0) {
                        ppppcVar14 = (char ****)local_e8;
                      }
                      lVar11 = local_d8 + -1;
                      local_d8 = local_d8 + -1;
                      *(char *)((longlong)ppppcVar14 + lVar11) = '\0';
                      ppppcVar14 = &local_e8;
                      if (0xf < uStack_d0) {
                        ppppcVar14 = (char ****)local_e8;
                      }
                      lVar11 = local_d8 + -1;
                      local_d8 = local_d8 - 1;
                      *(char *)((longlong)ppppcVar14 + lVar11) = '\0';
                      if ((char)local_120 == '\x01') {
                        ppppcVar14 = &local_e8;
                        if (0xf < uStack_d0) {
                          ppppcVar14 = (char ****)local_e8;
                        }
                        FUN_14002930a(&local_188,ppppcVar14,
                                      (char *)((longlong)ppppcVar14 + local_d8));
                        ppppcVar14 = &local_e8;
                        if (0xf < uStack_d0) {
                          ppppcVar14 = (char ****)local_e8;
                        }
                        uVar22 = CONCAT44(uStack_184,local_188) - (longlong)ppppcVar14;
                        if (local_d8 < uVar22) {
                          uVar22 = local_d8;
                        }
                        uVar12 = local_d8 - uVar22;
                        FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),uVar12 + 1)
                        ;
                        local_d8 = uVar12;
                      }
                      else if (((char)local_ec != '\x01') || (local_a8 != 0)) {
                        FUN_14000cf50(&local_b8,10);
                      }
                      ppppcVar14 = &local_e8;
                      if (0xf < uStack_d0) {
                        ppppcVar14 = (char ****)local_e8;
                      }
                      FUN_14000b1f8(&local_b8,ppppcVar14,local_d8);
                      if (local_a8 != 0) {
                        ppppcVar14 = (char ****)&local_b8;
                        if (0xf < uStack_a0) {
                          ppppcVar14 = local_b8;
                        }
                        if (*(char *)((longlong)ppppcVar14 + (local_a8 - 1)) == '\n') {
                          lVar11 = local_a8 - 1;
                          local_a8 = local_a8 - 1;
                          *(char *)((longlong)ppppcVar14 + lVar11) = '\0';
                        }
                      }
                      bVar20 = false;
                      local_ec = 0;
                      if (local_71 == '\"') {
                        FUN_14000e389(&local_188,&local_b8);
                        FUN_1400065bc(&local_b8);
                        local_a8 = local_178;
                        uStack_a0 = uStack_170;
                        local_b8 = (char ****)CONCAT44(uStack_184,local_188);
                        uStack_b0 = (char ****)CONCAT44(uStack_17c,uStack_180);
                        local_178 = 0;
                        uStack_170 = 0xf;
                        local_188 = local_188 & 0xffffff00;
                        FUN_1400017de(&local_188);
                        local_ec = 0;
                        bVar20 = false;
                      }
                      goto LAB_14001d72d;
                    }
                  }
                  if ((char)local_120 == '\x01') {
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    FUN_1400293e4(&local_188,(char *)((longlong)ppppcVar14 + local_88));
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    lVar11 = CONCAT44(uStack_184,local_188);
                    pcVar13 = (char *)((longlong)ppppcVar14 + (local_88 - lVar11));
                    pcVar18 = (char *)(local_88 - (lVar11 - (longlong)ppppcVar14));
                    if (pcVar13 <= pcVar18) {
                      pcVar18 = pcVar13;
                    }
                    uVar22 = local_88 - (longlong)pcVar18;
                    FUN_140135ff0(lVar11,pcVar18 + lVar11,
                                  (uVar22 - (lVar11 - (longlong)ppppcVar14)) + 1);
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    local_88 = uVar22;
                    FUN_14002930a(&local_188,ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22));
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    uVar22 = CONCAT44(uStack_184,local_188) - (longlong)ppppcVar14;
                    if (local_88 < uVar22) {
                      uVar22 = local_88;
                    }
                    uVar12 = local_88 - uVar22;
                    FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),uVar12 + 1);
                    local_88 = uVar12;
                  }
                  else if (((char)local_ec != '\x01') || (local_a8 != 0)) {
                    FUN_14000cf50(&local_b8,10);
                  }
                  if (local_88 == 0) {
                    uVar22 = 0;
LAB_14001d6fd:
                    local_120 = (char ***)0x0;
                  }
                  else {
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    uVar22 = local_88;
                    if (*(char *)((longlong)ppppcVar14 + (local_88 - 1)) != '\\')
                    goto LAB_14001d6fd;
                    lVar11 = local_88 - 1;
                    local_88 = local_88 - 1;
                    *(char *)((longlong)ppppcVar14 + lVar11) = '\0';
                    local_120 = (char ***)CONCAT71((int7)((ulonglong)ppppcVar14 >> 8),1);
                    uVar22 = local_88;
                  }
                  ppppcVar14 = (char ****)local_98;
                  if (uStack_80 < 0x10) {
                    ppppcVar14 = &local_98;
                  }
                  FUN_14000b1f8(&local_b8,ppppcVar14,uVar22);
                  local_ec = 0;
                }
LAB_14001d72d:
                FUN_1400017de(&local_98);
              } while ((uVar6 & 6) == 0);
              FUN_140006874(&local_98,&local_b8);
              FUN_140020e9e(&local_118,&local_98,1);
              FUN_1400017de(&local_98);
            }
            else {
              iVar9 = FUN_14000d73c(&local_b8,0,3,&DAT_140171d20);
              if ((uVar22 == 0xffffffffffffffff) || (iVar9 == 0)) {
                if (iVar9 == 0) goto code_r0x00014001d0ed;
              }
              else {
                uVar5 = *(undefined1 *)(param_1 + 0x20);
                FUN_140006874(local_2f8,&local_b8);
                FUN_14002823b(&local_188,local_2f8,
                              CONCAT71((int7)((ulonglong)lVar11 >> 8),uVar5) & 0xffffffff);
                FUN_1400276ef(&local_98,CONCAT44(uStack_184,local_188));
                FUN_1400065bc(&local_b8);
                local_a8 = local_88;
                uStack_a0 = uStack_80;
                local_b8 = (char ****)local_98;
                uStack_b0 = (char ****)pppcStack_90;
                local_88 = 0;
                uStack_80 = 0xf;
                local_98 = (char ***)((ulonglong)local_98 & 0xffffffffffffff00);
                FUN_1400017de(&local_98);
                FUN_14000eeca(&local_188);
              }
              if (1 < local_a8) {
                ppppcVar14 = (char ****)&local_b8;
                if (0xf < uStack_a0) {
                  ppppcVar14 = local_b8;
                }
                if (local_18c == *(char *)ppppcVar14) {
                  local_98 = (char ***)0x0;
                  pppcStack_90 = (char ***)0x0;
                  local_88 = 0;
                  uStack_80 = 0xf;
                  while( true ) {
                    ppppcVar14 = (char ****)&local_b8;
                    if (0xf < uStack_a0) {
                      ppppcVar14 = local_b8;
                    }
                    if ((local_128 == *(char *)((longlong)ppppcVar14 + (local_a8 - 1))) ||
                       (plVar10 = (longlong *)FUN_1400276be(param_3,&local_98),
                       (*(byte *)((longlong)plVar10 + (longlong)*(int *)(*plVar10 + 4) + 0x10) & 6)
                       != 0)) break;
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    FUN_1400293e4(&local_188,(char *)((longlong)ppppcVar14 + local_88));
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    lVar11 = CONCAT44(uStack_184,local_188);
                    pcVar13 = (char *)((longlong)ppppcVar14 + (local_88 - lVar11));
                    pcVar18 = (char *)(local_88 - (lVar11 - (longlong)ppppcVar14));
                    if (pcVar13 <= pcVar18) {
                      pcVar18 = pcVar13;
                    }
                    uVar22 = local_88 - (longlong)pcVar18;
                    FUN_140135ff0(lVar11,pcVar18 + lVar11,
                                  (uVar22 - (lVar11 - (longlong)ppppcVar14)) + 1);
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    local_88 = uVar22;
                    FUN_14002930a(&local_188,ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22));
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    uVar22 = CONCAT44(uStack_184,local_188) - (longlong)ppppcVar14;
                    if (local_88 < uVar22) {
                      uVar22 = local_88;
                    }
                    uVar12 = local_88 - uVar22;
                    FUN_140135ff0(ppppcVar14,(char *)((longlong)ppppcVar14 + uVar22),uVar12 + 1);
                    ppppcVar14 = &local_98;
                    if (0xf < uStack_80) {
                      ppppcVar14 = (char ****)local_98;
                    }
                    local_88 = uVar12;
                    FUN_14000b1f8(&local_b8,ppppcVar14,uVar12);
                  }
                  FUN_1400017de(&local_98);
                  ppppcVar14 = (char ****)&local_b8;
                  if (0xf < uStack_a0) {
                    ppppcVar14 = local_b8;
                  }
                  if (local_128 == *(char *)((longlong)ppppcVar14 + (local_a8 - 1))) {
                    FUN_1400191d4(local_2b8,&local_b8,1,local_a8 - 2,&local_98);
                    FUN_14002823b(&local_98,local_2b8,local_f4);
                    FUN_14000eeca(&local_118);
                    local_118 = local_98;
                    pppcStack_110 = pppcStack_90;
                    local_108 = local_88;
                    local_98 = (char ***)0x0;
                    pppcStack_90 = (char ***)0x0;
                    local_88 = 0;
                    FUN_14000eeca(&local_98);
                  }
                  else {
                    FUN_1400191d4(local_298,&local_b8,1,0xffffffffffffffff,&local_98);
                    FUN_14002823b(&local_98,local_298,local_f4);
                    FUN_14000eeca(&local_118);
                    local_118 = local_98;
                    pppcStack_110 = pppcStack_90;
                    local_108 = local_88;
                    local_98 = (char ***)0x0;
                    pppcStack_90 = (char ***)0x0;
                    local_88 = 0;
                    FUN_14000eeca(&local_98);
                  }
                  goto LAB_14001da9e;
                }
              }
              if ((char)local_f0 == '\0') {
LAB_14001d9d7:
                FUN_140006874(&local_98,&local_b8);
                FUN_140020e9e(&local_118,&local_98,1);
                FUN_1400017de(&local_98);
              }
              else {
                lVar11 = FUN_14000e108(&local_b8,local_f4,0);
                if (lVar11 == -1) {
                  lVar11 = FUN_14000e108(&local_b8,0x20,0);
                  if (lVar11 == -1) goto LAB_14001d9d7;
                  FUN_140006874(local_258,&local_b8);
                  FUN_14002823b(&local_98,local_258,0);
                  FUN_14000eeca(&local_118);
                  local_118 = local_98;
                  pppcStack_110 = pppcStack_90;
                  local_108 = local_88;
                  local_98 = (char ***)0x0;
                  pppcStack_90 = (char ***)0x0;
                  local_88 = 0;
                  FUN_14000eeca(&local_98);
                }
                else {
                  FUN_140006874(local_278,&local_b8);
                  FUN_14002823b(&local_98,local_278,local_f4);
                  FUN_14000eeca(&local_118);
                  local_118 = local_98;
                  pppcStack_110 = pppcStack_90;
                  local_108 = local_88;
                  local_98 = (char ***)0x0;
                  pppcStack_90 = (char ***)0x0;
                  local_88 = 0;
                  FUN_14000eeca(&local_98);
                }
              }
            }
LAB_14001da9e:
            FUN_1400017de(&local_b8);
          }
          local_b8 = (char ****)0x0;
          uStack_b0 = (char ****)0x0;
          local_a8 = 0;
          FUN_14002781a(&local_98,&local_168,&local_148,*(undefined1 *)(param_1 + 0x28));
          FUN_14000eeca(&local_b8);
          local_b8 = (char ****)local_98;
          uStack_b0 = (char ****)pppcStack_90;
          local_a8 = local_88;
          local_98 = (char ***)0x0;
          pppcStack_90 = (char ***)0x0;
          local_88 = 0;
          FUN_14000eeca(&local_98);
          FUN_14000de8f(&local_148,0x22,0x27);
          pppcVar7 = pppcStack_110;
          for (ppppcVar14 = (char ****)local_118; ppppcVar14 != (char ****)pppcVar7;
              ppppcVar14 = ppppcVar14 + 4) {
            FUN_14000de8f(ppppcVar14,*(undefined1 *)(param_1 + 0x25),*(undefined1 *)(param_1 + 0x26)
                         );
          }
          if ((ulonglong)((longlong)uStack_b0 - (longlong)local_b8 >> 5) <=
              (ulonglong)*(byte *)(param_1 + 0x27)) {
            if (*(longlong *)(param_1 + 0x40) != 0 && (local_c4 & 1) == 0) {
              if (((local_b8 == uStack_b0) ||
                  (cVar8 = FUN_1400170b4(local_b8,param_1 + 0x30), cVar8 == '\0')) ||
                 (local_124 != *(short *)(param_1 + 0x2a) && -1 < *(short *)(param_1 + 0x2a))) {
                local_c4 = 0;
                goto LAB_14001dd82;
              }
              uVar15 = FUN_14002897e(&local_b8,&local_98,local_b8);
              local_c4 = (uint)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            }
            if (((*local_c0 == local_c0[1]) ||
                (cVar8 = FUN_1400170b4(&local_148,local_c0[1] + -0x38), cVar8 == '\0')) ||
               (cVar8 = FUN_1400289ff(&local_b8,local_c0[1] + -0x50), cVar8 == '\0')) {
              FUN_140028a54(local_c0);
              plVar10 = local_c0;
              lVar11 = local_c0[1];
              if ((char ****)(lVar11 + -0x50) != (char ****)&local_b8) {
                FUN_14000eeca();
                *(char *****)(lVar11 + -0x50) = local_b8;
                *(char *****)(lVar11 + -0x48) = uStack_b0;
                *(ulonglong *)(lVar11 + -0x40) = local_a8;
                local_b8 = (char ****)0x0;
                uStack_b0 = (char ****)0x0;
                local_a8 = 0;
                lVar11 = plVar10[1];
              }
              puVar1 = (undefined8 *)(lVar11 + -0x38);
              if (puVar1 != &local_148) {
                FUN_1400065bc(puVar1);
                *(ulonglong *)(lVar11 + -0x28) = local_138;
                *(ulonglong *)(lVar11 + -0x20) = uStack_130;
                *(undefined4 *)puVar1 = (undefined4)local_148;
                *(undefined4 *)(lVar11 + -0x34) = local_148._4_4_;
                *(undefined4 *)(lVar11 + -0x30) = (undefined4)uStack_140;
                *(undefined4 *)(lVar11 + -0x2c) = uStack_140._4_4_;
                local_138 = 0;
                uStack_130 = 0xf;
                local_148 = (char ****)((ulonglong)local_148 & 0xffffffffffffff00);
                lVar11 = local_c0[1];
              }
              if ((char ****)(lVar11 + -0x18) != &local_118) {
                FUN_14000eeca();
                *(char ****)(lVar11 + -0x18) = local_118;
                *(char ****)(lVar11 + -0x10) = pppcStack_110;
                *(ulonglong *)(lVar11 + -8) = local_108;
                local_118 = (char ***)0x0;
                pppcStack_110 = (char ***)0x0;
                local_108 = 0;
              }
            }
            else {
              FUN_1400294be(local_c0[1] + -0x18,*(undefined8 *)(local_c0[1] + -0x10),local_118,
                            (longlong)pppcStack_110 - (longlong)local_118 >> 5);
            }
          }
LAB_14001dd82:
          FUN_14000eeca(&local_b8);
        }
      }
    }
LAB_14001c654:
    FUN_1400017de(&local_148);
    FUN_14000eeca(&local_118);
  } while( true );
}

