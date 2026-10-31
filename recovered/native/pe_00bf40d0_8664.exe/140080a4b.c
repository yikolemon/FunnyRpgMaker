/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140080a4b */

void FUN_140080a4b(int *param_1,ulonglong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
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
  uint local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_f8;
  local_50 = 0;
  iStack_4c = 0;
  if (param_1[8] == 3) {
    local_78 = param_2 >> 0x20;
    local_94 = *param_1;
    local_98 = param_1[1];
    iVar2 = param_1[4];
    iVar13 = param_1[5];
    lVar15 = (longlong)((iVar2 - param_1[6]) * 3 - local_94) + (longlong)param_1[2];
    lVar10 = (longlong)((iVar13 - param_1[7]) * 3 - local_98) + (longlong)param_1[3];
    local_9c = ((local_94 - iVar2) - iVar2) + param_1[6];
    local_a0 = ((local_98 - iVar13) - iVar13) + param_1[7];
    local_bc = (iVar2 - local_94) * 3;
    local_c0 = (iVar13 - local_98) * 3;
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
        uVar5 = uVar3 * uVar8 + 0x8000 >> 0x10 & 0xffffffff;
        lVar7 = uVar5 * lVar15;
        iVar13 = (int)(uVar8 * local_60 + 0x8000 + ((longlong)(uVar8 * local_60) >> 0x3f) >> 0x10) +
                 local_94 +
                 (int)(uVar3 * local_b8 + 0x8000 + ((longlong)(uVar3 * local_b8) >> 0x3f) >> 0x10) +
                 (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        lVar7 = uVar5 * lVar10;
        iVar2 = (int)(uVar8 * local_68 + 0x8000 + ((longlong)(uVar8 * local_68) >> 0x3f) >> 0x10) +
                local_98 +
                (int)(uVar3 * local_b0 + 0x8000 + ((longlong)(uVar3 * local_b0) >> 0x3f) >> 0x10) +
                (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        local_58._0_4_ = (iVar13 - (int)local_80) * 0x400;
        local_58._4_4_ = (iVar2 - (int)local_78) * 0x400;
        uVar3 = FUN_1400217bb(&local_58);
        if ((int)uVar3 < local_cc) {
          local_c4 = iVar2 * 0x400;
          local_c8 = iVar13 * 0x400;
          local_90 = uVar9 >> 0x10 & 0xffffffff;
          local_88 = (ulonglong)uVar11;
          local_cc = (int)uVar3;
        }
        uVar3 = (ulonglong)(uint)((int)(uVar9 >> 0x10) * 3);
        lVar12 = uVar3 * lVar15;
        lVar7 = (ulonglong)(uVar11 * 2) * local_b8;
        iVar13 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + local_bc +
                 (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
        lVar7 = uVar3 * lVar10;
        lVar12 = (ulonglong)(uVar11 * 2) * local_b0;
        iVar6 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + local_c0 +
                (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        lVar12 = (ulonglong)(uVar11 * 6) * lVar15;
        lVar7 = (ulonglong)(uVar11 * 6) * lVar10;
        iVar18 = (int)(((uint)((int)(uint)local_58 >> 0x1f) >> 0x16) + (uint)local_58) >> 10;
        iVar19 = (int)(((uint)(local_58._4_4_ >> 0x1f) >> 0x16) + local_58._4_4_) >> 10;
        local_58 = CONCAT44(iVar19,iVar18);
        iVar4 = iVar18 * iVar13;
        iVar2 = iVar4 + 0x3f;
        if (-1 < iVar4) {
          iVar2 = iVar4;
        }
        iVar14 = iVar19 * iVar6;
        iVar4 = iVar14 + 0x3f;
        if (-1 < iVar14) {
          iVar4 = iVar14;
        }
        iVar18 = ((int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + local_9c) *
                 iVar18;
        iVar14 = iVar18 + 0x3f;
        if (-1 < iVar18) {
          iVar14 = iVar18;
        }
        iVar19 = ((int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + local_a0) * iVar19;
        iVar18 = iVar19 + 0x3f;
        if (-1 < iVar19) {
          iVar18 = iVar19;
        }
        iVar2 = FUN_14001ecff((iVar4 >> 6) + (iVar2 >> 6),
                              ((uint)(iVar6 * iVar6) >> 6) + ((uint)(iVar13 * iVar13) >> 6) +
                              (iVar14 >> 6) + (iVar18 >> 6));
        piVar1 = local_70;
        uVar11 = uVar11 - iVar2;
      } while ((uVar11 < 0x10001) && (bVar17 = uVar16 < 3, uVar16 = uVar16 + 1, bVar17));
      iVar2 = local_a4 + 1;
    } while (iVar2 != 5);
    lVar7 = (longlong)((int)local_90 * 3);
    lVar15 = lVar15 * lVar7;
    uVar3 = (ulonglong)(uint)((int)local_88 * 2);
    lVar12 = local_b8 * uVar3;
    iVar2 = local_bc + (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) +
            (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
    lVar10 = lVar10 * lVar7;
    lVar15 = local_b0 * uVar3;
    iVar13 = local_c0 + (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) +
             (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
    uVar11 = local_c8 + (int)local_80 * -0x400;
    lVar10 = (longlong)iVar13 * (longlong)(int)uVar11;
    iVar4 = local_c4 + (int)local_78 * -0x400;
    lVar15 = (longlong)iVar2 * (longlong)iVar4;
    local_58 = CONCAT44(iVar13,iVar2);
    *local_70 = local_cc;
    *(byte *)(local_70 + 2) =
         -((int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) <=
          (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10)) | 1;
    iVar2 = 0x10000;
    if ((local_88 & 0xfffeffff) == 0) {
      local_50 = uVar11;
      iStack_4c = iVar4;
      FUN_1400202a4((uint *)&local_58);
      FUN_1400202a4(&local_50);
      iVar2 = (int)((ulonglong)
                    ((longlong)(int)(uint)local_58 * (longlong)iStack_4c + 0x8000 +
                    ((longlong)(int)(uint)local_58 * (longlong)iStack_4c >> 0x3f)) >> 0x10) -
              (int)((ulonglong)
                    ((longlong)local_58._4_4_ * (longlong)(int)local_50 + 0x8000 +
                    ((longlong)local_58._4_4_ * (longlong)(int)local_50 >> 0x3f)) >> 0x10);
    }
    piVar1[1] = iVar2;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_f8);
}

