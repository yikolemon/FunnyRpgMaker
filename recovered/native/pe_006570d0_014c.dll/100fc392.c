/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fc392 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100fc392(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_50;
  int local_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined2 local_18;
  undefined1 local_16;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  local_38 = (float)param_1[10];
  iVar11 = param_1[0xb];
  local_4c = *(int *)((int)local_38 + 0x14cc);
  iVar6 = *(int *)((int)local_38 + 0x2308);
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x1ee) == '\x01')) {
    FUN_101639ce(iVar6);
  }
  iVar8 = param_1[3];
  if ((iVar8 == 0) || (cVar5 = FUN_10125c81(), fVar13 = local_38, iVar7 = local_4c, cVar5 != '\0'))
  goto LAB_100fc3e6;
  if (*(int *)(iVar11 + 8) == 0 && iVar6 != 0) {
    if (*(char *)(iVar6 + 0x1f9) == '\0') {
      iVar6 = *(int *)(iVar11 + 0xc);
      *param_1 = iVar6;
      iVar6 = FUN_100fa683(iVar6 + 1,iVar8);
      param_1[1] = iVar6;
      uVar10 = 1;
      if (*param_1 < iVar6) {
        *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + 1;
      }
      goto LAB_100fc3e8;
    }
LAB_100fc45f:
    *(double *)(param_1 + 6) = (double)*(float *)(local_4c + 0x148);
    fVar12 = (float)param_1[4];
    if (fVar12 <= 0.0) {
      local_20 = CONCAT44(*(int *)(iVar11 + 0xc) + 1,*(int *)(iVar11 + 0xc));
      local_18 = 0;
      local_16 = 0;
      FUN_10125ca6(&local_20);
      iVar6 = FUN_100fbc6a(**(undefined4 **)(iVar11 + 0x18),*(undefined4 *)(iVar11 + 0xc));
      *param_1 = iVar6;
      iVar6 = FUN_100fa683(*(undefined4 *)(*(int *)(iVar11 + 0x18) + 4),param_1[3]);
      param_1[1] = iVar6;
      *(undefined4 *)(iVar11 + 8) = 1;
      uVar10 = 1;
      goto LAB_100fc3e8;
    }
LAB_100fc47d:
    local_28 = param_1[1];
    *(double *)(param_1 + 8) =
         (double)*(float *)(iVar11 + 4) - (double)fVar12 * (double)*(int *)(iVar11 + 0xc);
    if (*(char *)((int)local_38 + 0x2748) == '\x01') {
      fVar13 = (float)param_1[3];
      iVar6 = *(int *)(iVar11 + 0x10);
      if (iVar6 == *(int *)(iVar11 + 0x14)) {
        if (iVar6 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar6 / 2 + iVar6;
        }
        iVar7 = iVar6 + 1;
        if (iVar6 + 1 < iVar8) {
          iVar7 = iVar8;
        }
        local_38 = fVar13;
        iVar8 = FUN_100fa1fa(iVar7 * 0xc);
        if (*(int *)(iVar11 + 0x18) != 0) {
          FUN_1025b2d0(iVar8,*(int *)(iVar11 + 0x18),*(int *)(iVar11 + 0x10) * 0xc);
          FUN_100fa2cb(*(undefined4 *)(iVar11 + 0x18));
        }
        *(int *)(iVar11 + 0x18) = iVar8;
        *(int *)(iVar11 + 0x14) = iVar7;
        iVar6 = *(int *)(iVar11 + 0x10);
        fVar13 = local_38;
      }
      else {
        iVar8 = *(int *)(iVar11 + 0x18);
      }
      *(undefined4 *)(iVar8 + iVar6 * 0xc) = 0;
      *(float *)(iVar8 + 4 + iVar6 * 0xc) = fVar13;
      *(undefined2 *)(iVar8 + 8 + iVar6 * 0xc) = 0;
      *(undefined1 *)(iVar8 + 10 + iVar6 * 0xc) = 0;
    }
    else {
      fVar12 = 0.0;
      uVar9 = 0;
      if (*(char *)((int)local_38 + 0x20d9) == '\x01') {
        if (*(int *)((int)local_38 + 0x2048) == 0) {
          fVar12 = 0.0;
          uVar9 = 0;
        }
        else {
          fVar12 = 0.0;
          if (*(int *)(*(int *)((int)local_38 + 0x2048) + 0x3b8) == *(int *)(local_4c + 0x3b8)) {
            iVar6 = *(int *)((int)local_38 + 0x20f0);
            local_50 = (uint)(byte)-(iVar6 == 2);
            local_16 = iVar6 == 3;
            local_48 = (float)CONCAT31((int3)((uint)iVar6 >> 8),local_16);
            local_20 = CONCAT44((int)*(float *)((int)local_38 + 0x2100),
                                (int)*(float *)((int)local_38 + 0x20f8));
            local_18 = CONCAT11(-(iVar6 == 2),1);
            FUN_100fc148(&local_20);
            if (*(float *)((int)fVar13 + 0x2104) < *(float *)((int)fVar13 + 0x210c) ||
                *(float *)((int)fVar13 + 0x2104) == *(float *)((int)fVar13 + 0x210c)) {
              if (*(float *)((int)fVar13 + 0x2108) <= *(float *)((int)fVar13 + 0x2110)) {
                local_20 = CONCAT44((int)*(float *)((int)fVar13 + 0x2110),
                                    (int)*(float *)((int)fVar13 + 0x2108));
                local_18 = CONCAT11((char)local_50,1);
                local_16 = SUB41(local_48,0);
                FUN_100fc148(&local_20);
              }
            }
            fVar12 = local_48;
            uVar9 = local_50;
            if (((*(byte *)((int)fVar13 + 0x20dd) & 4) != 0) &&
               (piVar1 = (int *)((int)fVar13 + 0x2118), fVar13 = local_38, *piVar1 == -1)) {
              local_20 = CONCAT44(param_1[3],param_1[3] + -1);
              local_18 = 0;
              local_16 = 0;
              FUN_100fc148(&local_20);
              fVar12 = local_48;
              uVar9 = local_50;
              fVar13 = local_38;
            }
          }
        }
      }
      if ((*(int *)((int)fVar13 + 0x2044) != 0) &&
         (*(int *)(iVar7 + 0x3c4) == *(int *)((int)fVar13 + 0x2044))) {
        local_20 = CONCAT44((int)(*(float *)(iVar7 + 0x3d8) + *(float *)(iVar7 + 0x158)),
                            (int)(*(float *)(iVar7 + 0x3d0) + *(float *)(iVar7 + 0x158)));
        local_18 = 1;
        local_16 = 0;
        local_50 = uVar9;
        local_48 = fVar12;
        FUN_100fc148(&local_20);
        fVar12 = local_48;
        uVar9 = local_50;
      }
      fVar14 = *(float *)(iVar7 + 0x290);
      fVar16 = 0.0;
      fVar2 = *(float *)(iVar7 + 0x298);
      fVar18 = 0.0;
      fVar15 = fVar14;
      fVar17 = fVar2;
      if ((*(char *)((int)fVar13 + 0x2398) == '\x01') && (*(int *)((int)fVar13 + 0x23bc) == iVar7))
      {
        fVar3 = *(float *)((int)fVar13 + 0xd20);
        fVar15 = fVar14 - fVar3;
        fVar17 = fVar2 + fVar3;
        if (*(char *)((int)fVar13 + 0x23c0) == '\x01') {
          fStack_34 = 0.0;
          iStack_30 = 0;
          iStack_2c = 0;
          fStack_44 = 0.0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_20 = CONCAT44((int)(*(float *)((int)fVar13 + 0x23d0) + fVar3),
                              (int)(*(float *)((int)fVar13 + 0x23c8) - fVar3));
          local_18 = 1;
          local_16 = 0;
          local_48 = fVar2 + fVar3;
          local_38 = fVar14 - fVar3;
          FUN_100fc148(&local_20);
          fVar15 = local_38;
          fVar16 = fStack_34;
          fVar17 = local_48;
          fVar18 = fStack_44;
        }
      }
      fVar13 = (float)(int)fVar15;
      fVar14 = (float)(int)fVar17;
      iVar6 = *(int *)(iVar11 + 0x10);
      if (iVar6 == *(int *)(iVar11 + 0x14)) {
        if (iVar6 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar6 / 2 + iVar6;
        }
        iVar7 = iVar6 + 1;
        if (iVar6 + 1 < iVar8) {
          iVar7 = iVar8;
        }
        local_50 = uVar9;
        local_48 = fVar12;
        local_38 = fVar13;
        fStack_34 = fVar14;
        iStack_30 = (int)fVar16;
        iStack_2c = (int)fVar18;
        iVar8 = FUN_100fa1fa(iVar7 * 0xc);
        if (*(int *)(iVar11 + 0x18) != 0) {
          FUN_1025b2d0(iVar8,*(int *)(iVar11 + 0x18),*(int *)(iVar11 + 0x10) * 0xc);
          FUN_100fa2cb(*(undefined4 *)(iVar11 + 0x18));
        }
        *(int *)(iVar11 + 0x18) = iVar8;
        *(int *)(iVar11 + 0x14) = iVar7;
        iVar6 = *(int *)(iVar11 + 0x10);
        fVar12 = local_48;
        uVar9 = local_50;
        fVar13 = local_38;
        fVar14 = fStack_34;
      }
      else {
        iVar8 = *(int *)(iVar11 + 0x18);
      }
      *(ulonglong *)(iVar8 + iVar6 * 0xc) = CONCAT44(fVar14,fVar13);
      *(undefined1 *)(iVar8 + 8 + iVar6 * 0xc) = 1;
      *(char *)(iVar8 + 9 + iVar6 * 0xc) = (char)uVar9;
      *(char *)(iVar8 + 10 + iVar6 * 0xc) = SUB41(fVar12,0);
    }
    iVar6 = *(int *)(iVar11 + 0x10) + 1;
    *(int *)(iVar11 + 0x10) = iVar6;
    local_50 = iVar11 + 0x10;
    if (iVar6 != 0) {
      iVar8 = *(int *)(iVar11 + 0x18);
      fVar13 = (float)(iVar6 * 0xc);
      fVar12 = 0.0;
      local_48 = fVar13;
      local_24 = iVar11;
      do {
        iVar6 = local_28;
        if (*(char *)(iVar8 + 8 + (int)fVar12) == '\x01') {
          local_38 = (float)(int)((((double)*(int *)(iVar8 + 4 + (int)fVar12) -
                                   (double)*(float *)(local_4c + 0x148)) -
                                  (double)*(float *)(iVar11 + 4)) / (double)(float)param_1[4] +
                                 _DAT_102b8a70);
          iVar7 = FUN_10125d9a(*(char *)(iVar8 + 9 + (int)fVar12) + local_28 +
                               (int)((((double)*(int *)(iVar8 + (int)fVar12) -
                                      (double)*(float *)(local_4c + 0x148)) -
                                     (double)*(float *)(iVar11 + 4)) / (double)(float)param_1[4]),
                               local_28,param_1[3] + -1);
          iVar11 = local_24;
          *(int *)(iVar8 + (int)fVar12) = iVar7;
          uVar10 = FUN_10125d9a(*(char *)(iVar8 + 10 + (int)fVar12) + iVar6 + (int)local_38,
                                iVar7 + 1,param_1[3]);
          *(undefined4 *)(iVar8 + 4 + (int)fVar12) = uVar10;
          *(undefined1 *)(iVar8 + 8 + (int)fVar12) = 0;
          fVar13 = local_48;
        }
        fVar12 = (float)((int)fVar12 + 0xc);
      } while (fVar13 != fVar12);
    }
    FUN_10125db1();
    iVar6 = local_28;
  }
  else {
    if (*(int *)(iVar11 + 8) == 0) goto LAB_100fc45f;
    if ((float)param_1[4] <= 0.0) {
      dVar4 = *(double *)(param_1 + 6);
      if ((_DAT_102b8a68 <= (float)((uint)(float)dVar4 & _DAT_1028b410)) ||
         (_DAT_102b8a68 <= (float)(_DAT_1028b410 & (uint)*(float *)(local_4c + 0x148)))) {
        fVar12 = *(float *)(local_4c + 0x178) + *(float *)((int)local_38 + 0xd20);
        param_1[4] = (int)fVar12;
        *(float *)(local_4c + 0x148) = (float)(dVar4 + (double)fVar12);
        fVar12 = (float)param_1[4];
      }
      else {
        fVar12 = (float)((double)*(float *)(local_4c + 0x148) - dVar4) /
                 (float)(param_1[1] - *param_1);
        param_1[4] = (int)fVar12;
      }
      if (((fVar12 == 0.0) && (!NAN(fVar12))) && (param_1[3] == 0x7fffffff)) {
LAB_100fc3e6:
        uVar10 = 0;
        goto LAB_100fc3e8;
      }
      if (fVar12 <= 0.0) {
        FUN_100fcef5(
                    "ImGuiListClipper: Failed to calculate item height! First item hasn\'t been submitted by user code, or has not moved the cursor vertically!"
                    );
        goto LAB_100fc3e6;
      }
      goto LAB_100fc47d;
    }
    iVar6 = param_1[1];
  }
  iVar8 = *(int *)(iVar11 + 8);
  do {
    if (*(int *)(iVar11 + 0x10) <= iVar8) {
      if (param_1[3] != 0x7fffffff) {
        FUN_100fc06e(param_1[3]);
      }
      goto LAB_100fc3e6;
    }
    iVar8 = FUN_100fbc6a(*(undefined4 *)(*(int *)(iVar11 + 0x18) + iVar8 * 0xc),iVar6);
    *param_1 = iVar8;
    iVar8 = FUN_100fa683(*(undefined4 *)(*(int *)(iVar11 + 0x18) + 4 + *(int *)(iVar11 + 8) * 0xc),
                         param_1[3]);
    param_1[1] = iVar8;
    iVar8 = *(int *)(iVar11 + 8) + 1;
    *(int *)(iVar11 + 8) = iVar8;
    iVar7 = *param_1;
  } while (param_1[1] <= iVar7);
  uVar10 = 1;
  if (iVar6 < iVar7) {
    FUN_100fc06e(iVar7);
  }
LAB_100fc3e8:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar10;
}

