/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dc3c8 */

void FUN_1400dc3c8(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = *(int *)(param_1 + 0x50);
  if (DAT_1401c86a0 <= param_3) {
    iVar7 = param_6 + iVar7 + 1;
    if (*(int *)(param_1 + 0x54) < iVar7) {
      uVar4 = FUN_140077ab4((longlong)iVar7 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(uVar4,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      *(int *)(param_1 + 0x54) = iVar7;
    }
    if (-1 < param_6) {
      iVar7 = 0;
      do {
        fVar10 = ((float)iVar7 / (float)param_6) * (param_5 - param_4) + param_4;
        fVar1 = param_2[1];
        fVar9 = (float)FUN_1401a86e0(fVar10);
        fVar2 = *param_2;
        fVar10 = (float)FUN_1401a27d0(fVar10);
        iVar6 = *(int *)(param_1 + 0x50);
        if (iVar6 == *(int *)(param_1 + 0x54)) {
          if (iVar6 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar6 / 2 + iVar6;
          }
          iVar8 = iVar6 + 1;
          if (iVar6 + 1 < iVar3) {
            iVar8 = iVar3;
          }
          lVar5 = FUN_140077ab4((longlong)iVar8 << 3);
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_1401c5180(lVar5,*(longlong *)(param_1 + 0x58),
                          (longlong)*(int *)(param_1 + 0x50) << 3);
            FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
          }
          *(longlong *)(param_1 + 0x58) = lVar5;
          *(int *)(param_1 + 0x54) = iVar8;
          iVar6 = *(int *)(param_1 + 0x50);
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x58);
        }
        *(ulonglong *)(lVar5 + (longlong)iVar6 * 8) =
             CONCAT44(fVar1 + fVar9 * param_3,fVar2 + fVar10 * param_3);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        iVar7 = iVar7 + 1;
      } while (param_6 + 1 != iVar7);
    }
  }
  else {
    if (iVar7 == *(int *)(param_1 + 0x54)) {
      if (iVar7 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar7 / 2 + iVar7;
      }
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar6) {
        iVar3 = iVar6;
      }
      lVar5 = FUN_140077ab4((longlong)iVar3 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar5;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar7 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar5 + (longlong)iVar7 * 8) = *(undefined8 *)param_2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return;
}

