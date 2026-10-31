/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fd0a9 */

int __fastcall FUN_101fd0a9(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar7 = FUN_101c461e(param_2,param_4 + param_3);
  if ((iVar7 == 0) && (iVar7 = FUN_101c4b69(param_2,param_5), iVar7 == 0)) {
    pcVar1 = *(char **)(param_2 + 0x20) + param_5;
    if ((param_5 == 0) || (-1 < **(char **)(param_2 + 0x20))) {
      iVar7 = FUN_101fd4f2(pcVar1);
      FUN_101c4c66(param_2);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar7 = FUN_101fd262(pcVar1);
      FUN_101c4c66(param_2);
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 != iVar4) {
          iVar9 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x18) + iVar4 * 0x18;
            uVar12 = (uint)*(ushort *)(iVar5 + 0x16);
            iVar8 = FUN_101fd0a9(param_3,*(undefined4 *)(iVar8 + 0x10 + iVar9 * 0x18),
                                 *(undefined4 *)(iVar8 + 0x14 + iVar9 * 0x18));
            if (iVar8 != 0) {
              return iVar8;
            }
            piVar2 = (int *)(*(int *)(param_1 + 0x18) + iVar4 * 0x18 + iVar9 * 0x18);
            uVar10 = (uint)*(ushort *)(iVar5 + 0x16);
            if ((*piVar2 == 0x10000) && (piVar2[1] == 0x10000)) {
              if (0 < (int)(uVar10 - uVar12)) {
                iVar8 = *(int *)(iVar5 + 0x18);
                do {
                  piVar3 = (int *)(iVar8 + uVar12 * 8);
                  *piVar3 = *piVar3 + piVar2[2];
                  piVar3 = (int *)(iVar8 + 4 + uVar12 * 8);
                  *piVar3 = *piVar3 + piVar2[3];
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
            }
            else if (uVar10 != uVar12 && -1 < (int)(uVar10 - uVar12)) {
              iVar8 = *(int *)(iVar5 + 0x18);
              do {
                lVar6 = (longlong)*(int *)(iVar8 + uVar12 * 8) * (longlong)*piVar2;
                iVar11 = (int)(lVar6 >> 0x3f);
                lVar6 = lVar6 + CONCAT44(iVar11,iVar11) + 0x8000;
                *(uint *)(iVar8 + uVar12 * 8) =
                     ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10) + piVar2[2];
                lVar6 = (longlong)*(int *)(iVar8 + 4 + uVar12 * 8) * (longlong)piVar2[1];
                iVar11 = (int)(lVar6 >> 0x3f);
                lVar6 = lVar6 + CONCAT44(iVar11,iVar11) + 0x8000;
                *(uint *)(iVar8 + 4 + uVar12 * 8) =
                     ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10) + piVar2[3];
                uVar12 = uVar12 + 1;
              } while (uVar10 != uVar12);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar7 - iVar4);
        }
        iVar7 = 0;
      }
    }
  }
  return iVar7;
}

