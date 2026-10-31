/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023340b */

void FUN_18023340b(int *param_1,ulonglong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ushort uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_f8 [44];
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  int *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_f8;
  local_50 = 0;
  iStack_4c = 0;
  if (param_1[8] == 3) {
    local_78 = param_2 >> 0x20;
    local_94 = *param_1;
    local_98 = param_1[1];
    iVar2 = param_1[4];
    iVar7 = param_1[5];
    lVar15 = (longlong)((iVar2 - param_1[6]) * 3 - local_94) + (longlong)param_1[2];
    lVar10 = (longlong)((iVar7 - param_1[7]) * 3 - local_98) + (longlong)param_1[3];
    local_9c = ((local_94 - iVar2) - iVar2) + param_1[6];
    local_a0 = ((local_98 - iVar7) - iVar7) + param_1[7];
    local_bc = (iVar2 - local_94) * 3;
    local_c0 = (iVar7 - local_98) * 3;
    local_b8 = (longlong)(local_9c * 3);
    local_60 = (longlong)local_bc;
    local_b0 = (longlong)(local_a0 * 3);
    local_68 = (longlong)local_c0;
    local_9c = local_9c * 6;
    local_a0 = local_a0 * 6;
    local_cc = 0x7fffffff;
    local_c4 = 0;
    local_c8 = 0;
    iVar2 = 0;
    local_88 = 0;
    local_90 = 0;
    local_80 = param_2;
    local_70 = param_3;
    do {
      uVar11 = iVar2 << 0xe;
      uVar16 = 0;
      local_a4 = iVar2;
      do {
        uVar8 = (ulonglong)uVar11;
        uVar9 = uVar8 * uVar8 + 0x8000;
        uVar3 = uVar9 >> 0x10 & 0xffffffff;
        uVar4 = uVar3 * uVar8 + 0x8000 >> 0x10 & 0xffffffff;
        lVar6 = uVar4 * lVar15;
        iVar13 = (int)(uVar8 * local_60 + 0x8000 + ((longlong)(uVar8 * local_60) >> 0x3f) >> 0x10) +
                 local_94 +
                 (int)(uVar3 * local_b8 + 0x8000 + ((longlong)(uVar3 * local_b8) >> 0x3f) >> 0x10) +
                 (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
        lVar6 = uVar4 * lVar10;
        iVar7 = (int)(uVar8 * local_68 + 0x8000 + ((longlong)(uVar8 * local_68) >> 0x3f) >> 0x10) +
                local_98 +
                (int)(uVar3 * local_b0 + 0x8000 + ((longlong)(uVar3 * local_b0) >> 0x3f) >> 0x10) +
                (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
        local_58._0_4_ = (iVar13 - (int)local_80) * 0x400;
        local_58._4_4_ = (iVar7 - (int)local_78) * 0x400;
        iVar2 = FUN_1801cf3b8(&local_58);
        if (iVar2 < local_cc) {
          local_c4 = iVar7 * 0x400;
          local_c8 = iVar13 * 0x400;
          local_90 = uVar9 >> 0x10 & 0xffffffff;
          local_88 = (ulonglong)uVar11;
          local_cc = iVar2;
        }
        uVar3 = (ulonglong)(uint)((int)(uVar9 >> 0x10) * 3);
        lVar12 = uVar3 * lVar15;
        lVar6 = (ulonglong)(uVar11 * 2) * local_b8;
        iVar7 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + local_bc +
                (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
        lVar6 = uVar3 * lVar10;
        lVar12 = (ulonglong)(uVar11 * 2) * local_b0;
        iVar5 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + local_c0 +
                (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
        lVar12 = (ulonglong)(uVar11 * 6) * lVar15;
        lVar6 = (ulonglong)(uVar11 * 6) * lVar10;
        iVar18 = (int)(((uint)((int)local_58 >> 0x1f) >> 0x16) + (int)local_58) >> 10;
        iVar19 = (int)(((uint)(local_58._4_4_ >> 0x1f) >> 0x16) + local_58._4_4_) >> 10;
        local_58 = CONCAT44(iVar19,iVar18);
        iVar13 = iVar18 * iVar7;
        iVar2 = iVar13 + 0x3f;
        if (-1 < iVar13) {
          iVar2 = iVar13;
        }
        iVar14 = iVar19 * iVar5;
        iVar13 = iVar14 + 0x3f;
        if (-1 < iVar14) {
          iVar13 = iVar14;
        }
        iVar18 = ((int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + local_9c) *
                 iVar18;
        iVar14 = iVar18 + 0x3f;
        if (-1 < iVar18) {
          iVar14 = iVar18;
        }
        iVar19 = ((int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + local_a0) * iVar19;
        iVar18 = iVar19 + 0x3f;
        if (-1 < iVar19) {
          iVar18 = iVar19;
        }
        iVar2 = FUN_1801cc3a4((iVar13 >> 6) + (iVar2 >> 6),
                              ((uint)(iVar5 * iVar5) >> 6) + ((uint)(iVar7 * iVar7) >> 6) +
                              (iVar14 >> 6) + (iVar18 >> 6));
        piVar1 = local_70;
        uVar11 = uVar11 - iVar2;
      } while ((uVar11 < 0x10001) && (bVar17 = uVar16 < 3, uVar16 = uVar16 + 1, bVar17));
      iVar2 = local_a4 + 1;
    } while (iVar2 != 5);
    lVar6 = (longlong)((int)local_90 * 3);
    lVar15 = lVar15 * lVar6;
    uVar3 = (ulonglong)(uint)((int)local_88 * 2);
    lVar12 = local_b8 * uVar3;
    iVar2 = local_bc + (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) +
            (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
    lVar10 = lVar10 * lVar6;
    lVar15 = local_b0 * uVar3;
    iVar7 = local_c0 + (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) +
            (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    iVar5 = local_c8 + (int)local_80 * -0x400;
    lVar10 = (longlong)iVar7 * (longlong)iVar5;
    iVar13 = local_c4 + (int)local_78 * -0x400;
    lVar15 = (longlong)iVar2 * (longlong)iVar13;
    local_58 = CONCAT44(iVar7,iVar2);
    *local_70 = local_cc;
    *(byte *)(local_70 + 2) =
         -((int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) <=
          (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10)) | 1;
    iVar2 = 0x10000;
    if ((local_88 & 0xfffeffff) == 0) {
      local_50 = iVar5;
      iStack_4c = iVar13;
      FUN_1801cdea1(&local_58);
      FUN_1801cdea1(&local_50);
      iVar2 = (int)((ulonglong)
                    ((longlong)(int)local_58 * (longlong)iStack_4c + 0x8000 +
                    ((longlong)(int)local_58 * (longlong)iStack_4c >> 0x3f)) >> 0x10) -
              (int)((ulonglong)
                    ((longlong)local_58._4_4_ * (longlong)local_50 + 0x8000 +
                    ((longlong)local_58._4_4_ * (longlong)local_50 >> 0x3f)) >> 0x10);
    }
    piVar1[1] = iVar2;
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_f8);
}

