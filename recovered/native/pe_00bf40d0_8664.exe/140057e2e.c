/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140057e2e */

ulonglong FUN_140057e2e(longlong param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  uVar10 = FUN_140020a41((longlong)param_2,param_4 + param_3);
  uVar9 = (uint)uVar10;
  if ((uVar9 == 0) && (uVar9 = FUN_140021063(param_2,param_5), uVar9 == 0)) {
    pbVar7 = (byte *)param_2[7];
    if ((param_5 == 0) || (-1 < (char)*pbVar7)) {
      uVar9 = FUN_1400582e7(param_1,pbVar7,pbVar7 + param_5);
      FUN_140021187(param_2);
      uVar13 = (ulonglong)uVar9;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x28);
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar11 = FUN_140057ff0(param_1,pbVar7,(ushort *)(pbVar7 + param_5));
      uVar13 = uVar11 & 0xffffffff;
      FUN_140021187(param_2);
      if ((int)uVar11 == 0) {
        uVar6 = *(uint *)(param_1 + 0x18);
        if (uVar6 != uVar5) {
          uVar13 = 0;
          do {
            lVar12 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 0x18;
            uVar3 = *(ushort *)(lVar8 + 0x1a);
            uVar16 = (ulonglong)uVar3;
            uVar11 = FUN_140057e2e(param_1,param_2,param_3,*(int *)(lVar12 + 0x10 + uVar13 * 0x18),
                                   *(uint *)(lVar12 + 0x14 + uVar13 * 0x18));
            uVar9 = (uint)uVar11;
            if (uVar9 != 0) goto LAB_140057e6e;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 0x18 + uVar13 * 0x18
                            );
            uVar4 = *(ushort *)(lVar8 + 0x1a);
            iVar14 = (uint)uVar4 - (uint)uVar3;
            if ((*piVar1 == 0x10000) && (piVar1[1] == 0x10000)) {
              if (0 < iVar14) {
                lVar12 = *(longlong *)(lVar8 + 0x20);
                do {
                  piVar2 = (int *)(lVar12 + uVar16 * 8);
                  *piVar2 = *piVar2 + piVar1[2];
                  piVar2 = (int *)(lVar12 + 4 + uVar16 * 8);
                  *piVar2 = *piVar2 + piVar1[3];
                  uVar16 = uVar16 + 1;
                } while ((uint)uVar4 != (uint)uVar16);
              }
            }
            else if (0 < iVar14) {
              lVar12 = *(longlong *)(lVar8 + 0x20);
              uVar11 = (ulonglong)(uint)uVar3;
              do {
                lVar15 = (longlong)*(int *)(lVar12 + uVar11 * 8) * (longlong)*piVar1;
                *(int *)(lVar12 + uVar11 * 8) =
                     (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) + piVar1[2];
                lVar15 = (longlong)*(int *)(lVar12 + 4 + uVar11 * 8) * (longlong)piVar1[1];
                *(int *)(lVar12 + 4 + uVar11 * 8) =
                     (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10) + piVar1[3];
                uVar11 = uVar11 + 1;
              } while ((uint)uVar4 != (uint)uVar11);
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar6 - uVar5);
        }
        uVar13 = 0;
      }
    }
  }
  else {
LAB_140057e6e:
    uVar13 = (ulonglong)uVar9;
  }
  return uVar13;
}

