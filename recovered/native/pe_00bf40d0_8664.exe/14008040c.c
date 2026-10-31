/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008040c */

void FUN_14008040c(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  if (param_1[8] == 1) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    uVar14 = (uint)((longlong)iVar3 - (longlong)iVar1);
    iVar15 = (int)((longlong)iVar4 - (longlong)iVar2);
    iVar12 = (int)((ulonglong)param_2 >> 0x20);
    iVar6 = ((int)param_2 - iVar1) * uVar14;
    iVar16 = iVar6 + 0x3f;
    if (-1 < iVar6) {
      iVar16 = iVar6;
    }
    iVar13 = (iVar12 - iVar2) * iVar15;
    iVar6 = iVar13 + 0x3f;
    if (-1 < iVar13) {
      iVar6 = iVar13;
    }
    local_60 = param_3;
    local_50 = uVar14;
    local_4c = iVar15;
    uVar7 = FUN_14001ecff((iVar6 >> 6) + (iVar16 >> 6),
                          ((uint)(iVar15 * iVar15) >> 6) + (uVar14 * uVar14 >> 6));
    puVar5 = local_60;
    uVar9 = 0;
    if (0 < (int)uVar7) {
      uVar9 = uVar7;
    }
    iVar16 = 0x10000;
    uVar10 = (ulonglong)uVar9;
    if (0xffff < (int)uVar9) {
      uVar10 = 0x10000;
    }
    lVar8 = ((longlong)iVar3 - (longlong)iVar1) * uVar10;
    lVar11 = ((longlong)iVar4 - (longlong)iVar2) * uVar10;
    local_58._0_4_ =
         (iVar1 - (int)param_2) * 0x400 +
         (int)((ulonglong)((lVar8 >> 0x3f) + lVar8 * 0x400 + 0x8000) >> 0x10);
    local_58._4_4_ =
         (iVar2 - iVar12) * 0x400 +
         (int)((ulonglong)((lVar11 >> 0x3f) + lVar11 * 0x400 + 0x8000) >> 0x10);
    *(byte *)(local_60 + 2) =
         -((int)((ulonglong)
                 ((longlong)(int)uVar14 * (longlong)local_58._4_4_ + 0x8000 +
                 ((longlong)(int)uVar14 * (longlong)local_58._4_4_ >> 0x3f)) >> 0x10) <=
          (int)((ulonglong)
                ((longlong)iVar15 * (longlong)(int)(uint)local_58 + 0x8000 +
                ((longlong)iVar15 * (longlong)(int)(uint)local_58 >> 0x3f)) >> 0x10)) | 1;
    uVar10 = FUN_1400217bb(&local_58);
    *puVar5 = (int)uVar10;
    if (0xfffe < uVar7 - 1) {
      FUN_1400202a4(&local_50);
      FUN_1400202a4((uint *)&local_58);
      iVar16 = (int)((ulonglong)
                     ((longlong)(int)local_50 * (longlong)local_58._4_4_ + 0x8000 +
                     ((longlong)(int)local_50 * (longlong)local_58._4_4_ >> 0x3f)) >> 0x10) -
               (int)((ulonglong)
                     ((longlong)local_4c * (longlong)(int)(uint)local_58 + 0x8000 +
                     ((longlong)local_4c * (longlong)(int)(uint)local_58 >> 0x3f)) >> 0x10);
    }
    puVar5[1] = iVar16;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_88);
}

