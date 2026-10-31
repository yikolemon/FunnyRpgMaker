/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6287 */

void FUN_1400c6287(float *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  lVar4 = DAT_140f2a910;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((*(int *)(lVar2 + 0x1e0) != 0) &&
     ((*(uint *)(lVar2 + 0x1e4) >> ((byte)((char)*(int *)(lVar2 + 0x1e0) - 1) & 0x1f) & 1) != 0)) {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x2170) +
            (longlong)*(int *)(DAT_140f2a910 + 0x2168) * 0x28;
    fVar13 = (float)(int)*(float *)(lVar1 + -0xc);
    fVar11 = (float)(int)(*param_1 - *(float *)(DAT_140f2a910 + 0xe0c));
    fVar12 = (float)(int)param_1[1];
    fVar14 = 0.0;
    if (0.0 < *(float *)(DAT_140f2a910 + 0xe80)) {
      fVar14 = (float)FUN_14004863e(fVar11 - fVar13);
    }
    uVar10 = FUN_14007b71f(*(undefined4 *)(lVar1 + -8),fVar12 - fVar14);
    *(undefined4 *)(lVar1 + -8) = uVar10;
    if (fVar13 < fVar11) {
      if (fVar14 <= 0.0) {
        uVar3 = *(undefined8 *)(lVar2 + 800);
        uVar10 = *(undefined4 *)(lVar4 + 0xe7c);
        local_98 = FUN_14007a557(0x37,DAT_1401c86c8);
        local_90 = uVar10;
        FUN_1400dde72(uVar3,fVar13,fVar11,fVar12);
      }
      else {
        fVar13 = DAT_1401c86a0 + fVar14 + fVar13;
        local_98 = 3;
        local_88 = fVar13;
        local_84 = fVar12 - fVar14;
        FUN_1400dc632(*(undefined8 *)(lVar2 + 800),&local_88,fVar14,6);
        if (fVar13 < fVar11) {
          lVar1 = *(longlong *)(lVar2 + 800);
          iVar5 = *(int *)(lVar1 + 0x50);
          if (iVar5 == *(int *)(lVar1 + 0x54)) {
            if (iVar5 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar5 / 2 + iVar5;
            }
            iVar9 = iVar5 + 1;
            if (iVar5 + 1 < iVar8) {
              iVar9 = iVar8;
            }
            lVar7 = FUN_140077ab4((longlong)iVar9 << 3);
            if (*(longlong *)(lVar1 + 0x58) != 0) {
              FUN_1401c5180(lVar7,*(longlong *)(lVar1 + 0x58),(longlong)*(int *)(lVar1 + 0x50) << 3)
              ;
              FUN_140077b90(*(undefined8 *)(lVar1 + 0x58));
            }
            *(longlong *)(lVar1 + 0x58) = lVar7;
            *(int *)(lVar1 + 0x54) = iVar9;
            iVar5 = *(int *)(lVar1 + 0x50);
          }
          else {
            lVar7 = *(longlong *)(lVar1 + 0x58);
          }
          *(ulonglong *)(lVar7 + (longlong)iVar5 * 8) = CONCAT44(fVar12,fVar11);
          *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        }
        lVar2 = *(longlong *)(lVar2 + 800);
        uVar10 = *(undefined4 *)(lVar4 + 0xe7c);
        uVar6 = FUN_14007a557(0x37,DAT_1401c86c8);
        local_90 = 0;
        local_98 = uVar10;
        FUN_1400db1c8(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar6);
        *(undefined4 *)(lVar2 + 0x50) = 0;
      }
    }
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_b8);
}

