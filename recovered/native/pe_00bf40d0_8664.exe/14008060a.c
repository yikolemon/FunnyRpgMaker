/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008060a */

void FUN_14008060a(int *param_1,ulonglong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_d8 [36];
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  local_50 = 0;
  iStack_4c = 0;
  if (param_1[8] == 2) {
    local_88 = param_2 >> 0x20;
    local_8c = *param_1;
    local_90 = param_1[1];
    iVar2 = param_1[4];
    iVar12 = param_1[5];
    lVar11 = (longlong)((local_8c - iVar2) - iVar2) + (longlong)param_1[2];
    lVar13 = (longlong)((local_90 - iVar12) - iVar12) + (longlong)param_1[3];
    local_78 = (ulonglong)(uint)(iVar2 - local_8c);
    local_94 = (iVar2 - local_8c) * 2;
    local_80 = (ulonglong)(uint)(iVar12 - local_90);
    local_98 = (iVar12 - local_90) * 2;
    local_60 = (longlong)local_94;
    local_68 = (longlong)local_98;
    local_9c = (int)lVar11 * 2;
    local_a0 = (int)lVar13 * 2;
    local_b4 = 0x7fffffff;
    local_a8 = 0;
    local_ac = 0;
    iVar2 = 0;
    local_b0 = 0;
    local_70 = param_3;
    do {
      uVar9 = iVar2 << 0xe;
      uVar8 = 0;
      local_a4 = iVar2;
      do {
        uVar7 = (ulonglong)uVar9;
        uVar3 = uVar7 * uVar7 + 0x8000 >> 0x10 & 0xffffffff;
        lVar5 = uVar3 * lVar11;
        iVar12 = (int)(uVar7 * local_60 + 0x8000 + ((longlong)(uVar7 * local_60) >> 0x3f) >> 0x10) +
                 local_8c + (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
        lVar5 = uVar3 * lVar13;
        iVar2 = (int)(uVar7 * local_68 + 0x8000 + ((longlong)(uVar7 * local_68) >> 0x3f) >> 0x10) +
                local_90 + (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10);
        local_58._0_4_ = (iVar12 - (int)param_2) * 0x400;
        local_58._4_4_ = (iVar2 - (int)local_88) * 0x400;
        uVar3 = FUN_1400217bb(&local_58);
        if ((int)uVar3 < local_b4) {
          local_a8 = iVar2 * 0x400;
          local_ac = iVar12 * 0x400;
          local_b4 = (int)uVar3;
          local_b0 = uVar9;
        }
        lVar5 = (ulonglong)(uVar9 * 2) * lVar11;
        iVar12 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + local_94;
        lVar5 = (ulonglong)(uVar9 * 2) * lVar13;
        iVar6 = (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + local_98;
        iVar15 = (int)(((uint)((int)(uint)local_58 >> 0x1f) >> 0x16) + (uint)local_58) >> 10;
        iVar16 = (int)(((uint)(local_58._4_4_ >> 0x1f) >> 0x16) + local_58._4_4_) >> 10;
        local_58 = CONCAT44(iVar16,iVar15);
        iVar4 = iVar15 * iVar12;
        iVar2 = iVar4 + 0x3f;
        if (-1 < iVar4) {
          iVar2 = iVar4;
        }
        iVar10 = iVar16 * iVar6;
        iVar4 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar4 = iVar10;
        }
        iVar15 = iVar15 * local_9c;
        iVar10 = iVar15 + 0x3f;
        if (-1 < iVar15) {
          iVar10 = iVar15;
        }
        iVar16 = iVar16 * local_a0;
        iVar15 = iVar16 + 0x3f;
        if (-1 < iVar16) {
          iVar15 = iVar16;
        }
        iVar2 = FUN_14001ecff((iVar4 >> 6) + (iVar2 >> 6),
                              ((uint)(iVar6 * iVar6) >> 6) + ((uint)(iVar12 * iVar12) >> 6) +
                              (iVar10 >> 6) + (iVar15 >> 6));
        piVar1 = local_70;
        uVar9 = uVar9 - iVar2;
      } while ((uVar9 < 0x10001) && (bVar14 = uVar8 < 3, uVar8 = uVar8 + 1, bVar14));
      iVar2 = local_a4 + 1;
    } while (iVar2 != 5);
    uVar3 = (ulonglong)(int)local_b0;
    iVar2 = ((int)local_78 +
            (int)(lVar11 * uVar3 + 0x8000 + ((longlong)(lVar11 * uVar3) >> 0x3f) >> 0x10)) * 2;
    iVar12 = ((int)local_80 +
             (int)(lVar13 * uVar3 + 0x8000 + ((longlong)(lVar13 * uVar3) >> 0x3f) >> 0x10)) * 2;
    local_58 = CONCAT44(iVar12,iVar2);
    uVar9 = local_ac + (int)param_2 * -0x400;
    lVar11 = (longlong)iVar12 * (longlong)(int)uVar9;
    iVar12 = local_a8 + (int)local_88 * -0x400;
    lVar13 = (longlong)iVar2 * (longlong)iVar12;
    *local_70 = local_b4;
    *(byte *)(local_70 + 2) =
         -((int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) <=
          (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10)) | 1;
    iVar2 = 0x10000;
    if ((uVar3 & 0xfffeffff) == 0) {
      local_50 = uVar9;
      iStack_4c = iVar12;
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
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
}

