/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ad960 */

void FUN_1401ad960(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5
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
  byte *pbStack_188;
  byte *pbStack_180;
  int iStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  longlong lStack_160;
  char cStack_158;
  uint uStack_148;
  int local_144;
  undefined8 local_140;
  undefined4 uStack_138;
  int iStack_134;
  byte *local_130;
  longlong lStack_128;
  undefined8 local_120;
  longlong lStack_118;
  uint uStack_110;
  uint uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 uStack_f0;
  undefined2 uStack_ef;
  undefined1 uStack_ed;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint auStack_c8 [2];
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 uStack_b0;
  undefined2 uStack_af;
  undefined1 uStack_ad;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined4 uStack_80;
  int aiStack_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_1a8;
  local_130 = param_5;
  local_140 = param_3;
  local_120 = param_2;
  iVar5 = FUN_1401ac100(param_2,param_4,param_5);
  local_144 = iVar5;
  if (-2 < iVar5) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      pbVar15 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8));
      uVar9 = *pbVar15 & 0xf;
      uVar9 = *(uint *)(pbVar15 + (-4 - (longlong)(char)(&DAT_140eb2890)[uVar9])) >>
              ((&DAT_140eb28a0)[uVar9] & 0x1f);
    }
    if ((int)uVar9 <= iVar5) goto LAB_1401adf0a;
    if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(param_1 + 0xc) == 0)) {
      lVar7 = FUN_1401aae30();
      if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_1401adea3;
      lVar7 = FUN_1401aae30();
      param_1 = *(int **)(lVar7 + 0x20);
      lVar7 = FUN_1401aae30();
      param_3 = *(undefined8 *)(lVar7 + 0x28);
      local_140 = param_3;
      FUN_14018ff50(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1401adf0a;
      lVar7 = FUN_1401aae30();
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        lVar7 = FUN_1401aae30();
        uVar3 = *(undefined8 *)(lVar7 + 0x38);
        lVar7 = FUN_1401aae30();
        *(undefined8 *)(lVar7 + 0x38) = 0;
        cVar4 = FUN_1401ac560(param_1,uVar3);
        param_3 = local_140;
        if (cVar4 == '\0') {
          cVar4 = FUN_1401ac670(uVar3);
          if (cVar4 != '\0') {
            __DestructExceptionObject(param_1,1);
            FUN_1401ac430(&lStack_118);
                    /* WARNING: Subroutine does not return */
            FUN_14018f0a0(&lStack_118,&DAT_140f13838);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1401aa0e4();
        }
      }
    }
    FUN_1401ab4f0(aiStack_78,param_5,*(undefined8 *)(param_4 + 8));
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (aiStack_78[0] != 0) {
        pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,param_7);
        pbStack_188 = param_5;
        FUN_14018fd70(&lStack_118,aiStack_78,iVar5,param_4);
        lStack_128 = lStack_118;
        uStack_148 = uStack_110;
        if (uStack_110 < uStack_100) {
          do {
            iStack_134 = *(int *)(lStack_118 + 0x18);
            if ((iStack_134 <= iVar5) && (iVar5 <= *(int *)(lStack_118 + 0x1c))) {
              uStack_138 = *(undefined4 *)(lStack_118 + 0x20);
              uVar9 = 0;
              iVar6 = *(int *)(lStack_118 + 0x24);
              lStack_88 = *(longlong *)(param_4 + 8);
              lStack_c0 = 0;
              lStack_b8 = 0;
              uStack_b0 = 0;
              uStack_80 = **(undefined4 **)(param_4 + 0x10);
              uStack_ac = 0;
              uStack_a4 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_148 = uStack_110;
              if (iVar6 == 0) {
                auStack_c8[0] = 0;
              }
              else {
                uVar14 = *(byte *)(lStack_88 + iVar6) & 0xf;
                lStack_c0 = (lStack_88 - (char)(&DAT_140eb2890)[uVar14]) + (longlong)iVar6;
                auStack_c8[0] = *(uint *)(lStack_c0 + -4) >> ((&DAT_140eb28a0)[uVar14] & 0x1f);
                lStack_b8 = lStack_c0;
                FUN_1401ab7d0(auStack_c8);
              }
              uVar14 = auStack_c8[0];
              param_5 = local_130;
              if (auStack_c8[0] != 0) {
                do {
                  uStack_f0 = uStack_b0;
                  uStack_ef = uStack_af;
                  uStack_ed = uStack_ad;
                  uStack_ec = (undefined4)uStack_ac;
                  uStack_e8 = uStack_ac._4_4_;
                  uStack_e4 = (undefined4)uStack_a4;
                  iStack_e0 = uStack_a4._4_4_;
                  uStack_dc = uStack_9c;
                  uStack_d8 = uStack_98;
                  uStack_d0 = uStack_90;
                  iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_14018ff30();
                  piVar13 = (int *)((longlong)iVar5 + lVar7 + 4);
                  iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar7 = FUN_14018ff30();
                  for (iVar5 = *(int *)(lVar7 + iVar5); 0 < iVar5; iVar5 = iVar5 + -1) {
                    iVar6 = *piVar13;
                    lVar7 = FUN_14018ff30();
                    lVar7 = iVar6 + lVar7;
                    iVar6 = FUN_1401ac8a0(&uStack_f0,lVar7,*(undefined8 *)(param_1 + 0xc));
                    uVar3 = local_120;
                    param_5 = local_130;
                    if (iVar6 != 0) {
                      uVar8 = FUN_14018fd40(local_120,param_4,local_130,auStack_f8);
                      if (lVar7 != 0) {
                        FUN_1401ace60(param_1,uVar8,&uStack_f0,lVar7);
                      }
                      lVar12 = (longlong)iStack_e0;
                      lVar7 = FUN_14018fef0();
                      pbStack_188 = (byte *)(lVar7 + lVar12);
                      cStack_158 = param_6;
                      puStack_168 = &uStack_f0;
                      uStack_170 = CONCAT44(uStack_170._4_4_,uStack_138);
                      iStack_178 = iStack_134;
                      pbStack_180 = param_5;
                      lStack_160 = param_4;
                      FUN_14018fbc0(uVar3,param_1,local_140,uVar8);
                      lStack_118 = lStack_128;
                      uStack_110 = uStack_148;
                      iVar5 = local_144;
                      goto LAB_1401adcfa;
                    }
                    piVar13 = piVar13 + 1;
                  }
                  FUN_1401ab7d0(auStack_c8);
                  uVar9 = uVar9 + 1;
                  lStack_118 = lStack_128;
                  param_5 = local_130;
                  uStack_110 = uStack_148;
                  iVar5 = local_144;
                } while (uVar9 != uVar14);
              }
            }
LAB_1401adcfa:
            pbVar15 = *(byte **)(lStack_118 + 8);
            uStack_148 = uStack_110 + 1;
            lVar7 = (longlong)(char)(&DAT_140eb2890)[*pbVar15 & 0xf];
            bVar1 = (&DAT_140eb28a0)[*pbVar15 & 0xf];
            pbVar10 = pbVar15 + -lVar7;
            uVar9 = *(uint *)(pbVar10 + -4);
            *(byte **)(lStack_118 + 8) = pbVar10;
            *(uint *)(lStack_118 + 0x18) = uVar9 >> (bVar1 & 0x1f);
            cVar4 = (&DAT_140eb2890)[*pbVar10 & 0xf];
            pbVar11 = pbVar15 + (-lVar7 - (longlong)cVar4);
            *(uint *)(lStack_118 + 0x1c) =
                 *(uint *)(pbVar11 + -4) >> ((&DAT_140eb28a0)[*pbVar10 & 0xf] & 0x1f);
            *(byte **)(lStack_118 + 8) = pbVar11;
            pbVar15 = pbVar15 + ((-(longlong)cVar4 -
                                 (longlong)(char)(&DAT_140eb2890)[*pbVar11 & 0xf]) - lVar7);
            *(uint *)(lStack_118 + 0x20) =
                 *(uint *)(pbVar15 + -4) >> ((&DAT_140eb28a0)[*pbVar11 & 0xf] & 0x1f);
            *(byte **)(lStack_118 + 8) = pbVar15;
            uVar2 = *(undefined4 *)pbVar15;
            *(byte **)(lStack_118 + 8) = pbVar15 + 4;
            *(undefined4 *)(lStack_118 + 0x24) = uVar2;
            uStack_110 = uStack_148;
          } while (uStack_148 < uStack_100);
        }
      }
      if (((*param_5 & 0x40) != 0) && (cVar4 = FUN_14018fb70(param_4,param_5), cVar4 == '\0')) {
        lVar7 = FUN_1401aae30();
        *(int **)(lVar7 + 0x20) = param_1;
        lVar7 = FUN_1401aae30();
        *(undefined8 *)(lVar7 + 0x28) = local_140;
                    /* WARNING: Subroutine does not return */
        FUN_1401aa0e4();
      }
    }
    else if (aiStack_78[0] != 0) {
      if (param_6 != '\0') goto LAB_1401adf0a;
      uStack_170 = param_8;
      iStack_178 = param_7;
      pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,iVar5);
      pbStack_188 = param_5;
      FUN_1401ae170(param_1,param_2,param_3,param_4);
    }
    lVar7 = FUN_1401aae30();
    if (*(longlong *)(lVar7 + 0x38) == 0) {
LAB_1401adea3:
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(local_50 ^ (ulonglong)auStack_1a8);
    }
  }
LAB_1401adf0a:
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

