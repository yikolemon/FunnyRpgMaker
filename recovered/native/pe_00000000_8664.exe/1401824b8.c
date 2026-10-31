/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401824b8 */

void FUN_1401824b8(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  if (param_1[8] == 1) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    iVar4 = param_1[3];
    iVar15 = (int)((longlong)iVar3 - (longlong)iVar1);
    iVar16 = (int)((longlong)iVar4 - (longlong)iVar2);
    iVar13 = (int)((ulonglong)param_2 >> 0x20);
    iVar6 = ((int)param_2 - iVar1) * iVar15;
    iVar17 = iVar6 + 0x3f;
    if (-1 < iVar6) {
      iVar17 = iVar6;
    }
    iVar14 = (iVar13 - iVar2) * iVar16;
    iVar6 = iVar14 + 0x3f;
    if (-1 < iVar14) {
      iVar6 = iVar14;
    }
    local_60 = param_3;
    local_50 = iVar15;
    local_4c = iVar16;
    uVar7 = FUN_14012b378((iVar6 >> 6) + (iVar17 >> 6),
                          ((uint)(iVar16 * iVar16) >> 6) + ((uint)(iVar15 * iVar15) >> 6));
    puVar5 = local_60;
    uVar10 = 0;
    if (0 < (int)uVar7) {
      uVar10 = uVar7;
    }
    iVar17 = 0x10000;
    uVar11 = (ulonglong)uVar10;
    if (0xffff < (int)uVar10) {
      uVar11 = 0x10000;
    }
    lVar9 = ((longlong)iVar3 - (longlong)iVar1) * uVar11;
    lVar12 = ((longlong)iVar4 - (longlong)iVar2) * uVar11;
    local_58 = (iVar1 - (int)param_2) * 0x400 +
               (int)((ulonglong)((lVar9 >> 0x3f) + lVar9 * 0x400 + 0x8000) >> 0x10);
    local_54 = (iVar2 - iVar13) * 0x400 +
               (int)((ulonglong)((lVar12 >> 0x3f) + lVar12 * 0x400 + 0x8000) >> 0x10);
    *(byte *)(local_60 + 2) =
         -((int)((ulonglong)
                 ((longlong)iVar15 * (longlong)local_54 + 0x8000 +
                 ((longlong)iVar15 * (longlong)local_54 >> 0x3f)) >> 0x10) <=
          (int)((ulonglong)
                ((longlong)iVar16 * (longlong)local_58 + 0x8000 +
                ((longlong)iVar16 * (longlong)local_58 >> 0x3f)) >> 0x10)) | 1;
    uVar8 = FUN_14012e38c();
    *puVar5 = uVar8;
    if (0xfffe < uVar7 - 1) {
      FUN_14012ce75(&local_50);
      FUN_14012ce75(&local_58);
      iVar17 = (int)((ulonglong)
                     ((longlong)local_50 * (longlong)local_54 + 0x8000 +
                     ((longlong)local_50 * (longlong)local_54 >> 0x3f)) >> 0x10) -
               (int)((ulonglong)
                     ((longlong)local_4c * (longlong)local_58 + 0x8000 +
                     ((longlong)local_4c * (longlong)local_58 >> 0x3f)) >> 0x10);
    }
    puVar5[1] = iVar17;
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

