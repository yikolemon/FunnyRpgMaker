/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00454821 */

int __fastcall FUN_00454821(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar7 = FUN_00420696((int)param_2,param_4 + param_3);
  if ((iVar7 == 0) && (iVar7 = FUN_00420be1(param_2,param_5), iVar7 == 0)) {
    pbVar3 = (byte *)param_2[8];
    if ((param_5 == 0) || (-1 < (char)*pbVar3)) {
      iVar7 = FUN_00454c6a(param_1,pbVar3,pbVar3 + param_5);
      FUN_00420cde(param_2);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar7 = FUN_004549da(param_1,pbVar3,(ushort *)(pbVar3 + param_5));
      FUN_00420cde(param_2);
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 != iVar4) {
          iVar9 = 0;
          do {
            iVar8 = *(int *)(param_1 + 0x18) + iVar4 * 0x18;
            uVar12 = (uint)*(ushort *)(iVar5 + 0x16);
            iVar8 = FUN_00454821(param_1,param_2,param_3,*(int *)(iVar8 + 0x10 + iVar9 * 0x18),
                                 *(uint *)(iVar8 + 0x14 + iVar9 * 0x18));
            if (iVar8 != 0) {
              return iVar8;
            }
            piVar1 = (int *)(*(int *)(param_1 + 0x18) + iVar4 * 0x18 + iVar9 * 0x18);
            uVar10 = (uint)*(ushort *)(iVar5 + 0x16);
            if ((*piVar1 == 0x10000) && (piVar1[1] == 0x10000)) {
              if (0 < (int)(uVar10 - uVar12)) {
                iVar8 = *(int *)(iVar5 + 0x18);
                do {
                  piVar2 = (int *)(iVar8 + uVar12 * 8);
                  *piVar2 = *piVar2 + piVar1[2];
                  piVar2 = (int *)(iVar8 + 4 + uVar12 * 8);
                  *piVar2 = *piVar2 + piVar1[3];
                  uVar12 = uVar12 + 1;
                } while (uVar10 != uVar12);
              }
            }
            else if (uVar10 != uVar12 && -1 < (int)(uVar10 - uVar12)) {
              iVar8 = *(int *)(iVar5 + 0x18);
              do {
                lVar6 = (longlong)*(int *)(iVar8 + uVar12 * 8) * (longlong)*piVar1;
                iVar11 = (int)(lVar6 >> 0x3f);
                lVar6 = lVar6 + CONCAT44(iVar11,iVar11) + 0x8000;
                *(uint *)(iVar8 + uVar12 * 8) =
                     ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10) + piVar1[2];
                lVar6 = (longlong)*(int *)(iVar8 + 4 + uVar12 * 8) * (longlong)piVar1[1];
                iVar11 = (int)(lVar6 >> 0x3f);
                lVar6 = lVar6 + CONCAT44(iVar11,iVar11) + 0x8000;
                *(uint *)(iVar8 + 4 + uVar12 * 8) =
                     ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10) + piVar1[3];
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

