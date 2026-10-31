/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140120210 */

void FUN_140120210(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5
                  ,char param_6,int param_7,undefined8 param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auStack_1a8 [32];
  byte *local_188;
  byte *local_180;
  int local_178;
  undefined8 local_170;
  undefined1 *local_168;
  longlong local_160;
  char local_158;
  uint local_148;
  int local_144;
  undefined8 local_140;
  undefined4 local_138;
  int local_134;
  byte *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  uint local_110;
  uint local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  int local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_1401c9640 ^ (ulonglong)auStack_1a8;
  local_130 = param_5;
  local_140 = param_3;
  local_120 = param_2;
  iVar5 = FUN_14011e9b0(param_2,param_4,param_5);
  local_144 = iVar5;
  if (-2 < iVar5) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      pbVar15 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8));
      uVar9 = *pbVar15 & 0xf;
      uVar9 = *(uint *)(pbVar15 + (-4 - (longlong)(char)(&DAT_1401661e0)[uVar9])) >>
              ((&DAT_1401661f0)[uVar9] & 0x1f);
    }
    if ((int)uVar9 <= iVar5) goto LAB_1401207ba;
    if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(param_1 + 0xc) == 0)) {
      lVar7 = FUN_14011d6e0();
      if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_140120753;
      lVar7 = FUN_14011d6e0();
      param_1 = *(int **)(lVar7 + 0x20);
      lVar7 = FUN_14011d6e0();
      param_3 = *(undefined8 *)(lVar7 + 0x28);
      local_140 = param_3;
      FUN_140107120(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1401207ba;
      lVar7 = FUN_14011d6e0();
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        lVar7 = FUN_14011d6e0();
        uVar3 = *(undefined8 *)(lVar7 + 0x38);
        lVar7 = FUN_14011d6e0();
        *(undefined8 *)(lVar7 + 0x38) = 0;
        cVar4 = FUN_14011ee10(param_1,uVar3);
        param_3 = local_140;
        if (cVar4 == '\0') {
          cVar4 = FUN_14011ef20(uVar3);
          if (cVar4 != '\0') {
            __DestructExceptionObject(param_1,1);
            FUN_14011ece0(&local_118);
                    /* WARNING: Subroutine does not return */
            FUN_140106270(&local_118,&DAT_1401c4498);
          }
                    /* WARNING: Subroutine does not return */
          FUN_14011c8b8();
        }
      }
    }
    FUN_14011dda0(local_78,param_5,*(undefined8 *)(param_4 + 8));
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (local_78[0] != 0) {
        local_180 = (byte *)CONCAT44(local_180._4_4_,param_7);
        local_188 = param_5;
        FUN_140106f40(&local_118,local_78,iVar5,param_4);
        local_128 = local_118;
        local_148 = local_110;
        if (local_110 < local_100) {
          do {
            local_134 = *(int *)(local_118 + 0x18);
            if ((local_134 <= iVar5) && (iVar5 <= *(int *)(local_118 + 0x1c))) {
              local_138 = *(undefined4 *)(local_118 + 0x20);
              uVar9 = 0;
              iVar6 = *(int *)(local_118 + 0x24);
              local_88 = *(longlong *)(param_4 + 8);
              local_c0 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_80 = **(undefined4 **)(param_4 + 0x10);
              local_ac = 0;
              local_a4 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_148 = local_110;
              if (iVar6 == 0) {
                local_c8[0] = 0;
              }
              else {
                uVar14 = *(byte *)(local_88 + iVar6) & 0xf;
                local_c0 = (local_88 - (char)(&DAT_1401661e0)[uVar14]) + (longlong)iVar6;
                local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_1401661f0)[uVar14] & 0x1f);
                local_b8 = local_c0;
                FUN_14011e080(local_c8);
              }
              uVar14 = local_c8[0];
              param_5 = local_130;
              if (local_c8[0] != 0) {
                do {
                  local_f0 = local_b0;
                  local_ef = local_af;
                  local_ed = local_ad;
                  local_ec = (undefined4)local_ac;
                  local_e8 = local_ac._4_4_;
                  local_e4 = (undefined4)local_a4;
                  local_e0 = local_a4._4_4_;
                  local_dc = local_9c;
                  local_d8 = local_98;
                  local_d0 = uStack_90;
                  iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_140107100();
                  piVar13 = (int *)((longlong)iVar5 + lVar7 + 4);
                  iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_140107100();
                  for (iVar5 = *(int *)(lVar7 + iVar5); 0 < iVar5; iVar5 = iVar5 + -1) {
                    iVar6 = *piVar13;
                    lVar7 = FUN_140107100();
                    lVar7 = iVar6 + lVar7;
                    iVar6 = FUN_14011f150(&local_f0,lVar7,*(undefined8 *)(param_1 + 0xc));
                    uVar3 = local_120;
                    param_5 = local_130;
                    if (iVar6 != 0) {
                      uVar8 = FUN_140106f10(local_120,param_4,local_130,local_f8);
                      if (lVar7 != 0) {
                        FUN_14011f710(param_1,uVar8,&local_f0,lVar7);
                      }
                      lVar12 = (longlong)local_e0;
                      lVar7 = FUN_1401070c0();
                      local_188 = (byte *)(lVar7 + lVar12);
                      local_158 = param_6;
                      local_168 = &local_f0;
                      local_170 = CONCAT44(local_170._4_4_,local_138);
                      local_178 = local_134;
                      local_180 = param_5;
                      local_160 = param_4;
                      FUN_140106d90(uVar3,param_1,local_140,uVar8);
                      local_118 = local_128;
                      local_110 = local_148;
                      iVar5 = local_144;
                      goto LAB_1401205aa;
                    }
                    piVar13 = piVar13 + 1;
                  }
                  FUN_14011e080(local_c8);
                  uVar9 = uVar9 + 1;
                  local_118 = local_128;
                  param_5 = local_130;
                  local_110 = local_148;
                  iVar5 = local_144;
                } while (uVar9 != uVar14);
              }
            }
LAB_1401205aa:
            pbVar15 = *(byte **)(local_118 + 8);
            local_148 = local_110 + 1;
            lVar7 = (longlong)(char)(&DAT_1401661e0)[*pbVar15 & 0xf];
            bVar1 = (&DAT_1401661f0)[*pbVar15 & 0xf];
            pbVar10 = pbVar15 + -lVar7;
            uVar9 = *(uint *)(pbVar10 + -4);
            *(byte **)(local_118 + 8) = pbVar10;
            *(uint *)(local_118 + 0x18) = uVar9 >> (bVar1 & 0x1f);
            cVar4 = (&DAT_1401661e0)[*pbVar10 & 0xf];
            pbVar11 = pbVar15 + (-lVar7 - (longlong)cVar4);
            *(uint *)(local_118 + 0x1c) =
                 *(uint *)(pbVar11 + -4) >> ((&DAT_1401661f0)[*pbVar10 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar11;
            pbVar15 = pbVar15 + ((-(longlong)cVar4 -
                                 (longlong)(char)(&DAT_1401661e0)[*pbVar11 & 0xf]) - lVar7);
            *(uint *)(local_118 + 0x20) =
                 *(uint *)(pbVar15 + -4) >> ((&DAT_1401661f0)[*pbVar11 & 0xf] & 0x1f);
            *(byte **)(local_118 + 8) = pbVar15;
            uVar2 = *(undefined4 *)pbVar15;
            *(byte **)(local_118 + 8) = pbVar15 + 4;
            *(undefined4 *)(local_118 + 0x24) = uVar2;
            local_110 = local_148;
          } while (local_148 < local_100);
        }
      }
      if (((*param_5 & 0x40) != 0) && (cVar4 = FUN_140106d40(param_4,param_5), cVar4 == '\0')) {
        lVar7 = FUN_14011d6e0();
        *(int **)(lVar7 + 0x20) = param_1;
        lVar7 = FUN_14011d6e0();
        *(undefined8 *)(lVar7 + 0x28) = local_140;
                    /* WARNING: Subroutine does not return */
        FUN_14011c8b8();
      }
    }
    else if (local_78[0] != 0) {
      if (param_6 != '\0') goto LAB_1401207ba;
      local_170 = param_8;
      local_178 = param_7;
      local_180 = (byte *)CONCAT44(local_180._4_4_,iVar5);
      local_188 = param_5;
      FUN_140120a20(param_1,param_2,param_3,param_4);
    }
    lVar7 = FUN_14011d6e0();
    if (*(longlong *)(lVar7 + 0x38) == 0) {
LAB_140120753:
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_50 ^ (ulonglong)auStack_1a8);
    }
  }
LAB_1401207ba:
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

