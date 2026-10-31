/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020a7f2 */

int FUN_18020a7f2(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  iVar9 = FUN_1801ce63e(param_2,param_4 + param_3);
  if ((iVar9 == 0) && (iVar9 = FUN_1801cec60(param_2,param_5), iVar9 == 0)) {
    pcVar7 = *(char **)(param_2 + 0x38);
    if ((param_5 == 0) || (-1 < *pcVar7)) {
      iVar9 = FUN_18020acab(param_1);
      FUN_1801ced84(param_2);
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x28);
      uVar5 = *(uint *)(param_1 + 0x18);
      iVar9 = FUN_18020a9b4(param_1,pcVar7,pcVar7 + param_5);
      FUN_1801ced84();
      if (iVar9 == 0) {
        uVar6 = *(uint *)(param_1 + 0x18);
        if (uVar6 != uVar5) {
          uVar11 = 0;
          do {
            lVar10 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 0x18;
            uVar3 = *(ushort *)(lVar8 + 0x1a);
            uVar13 = (ulonglong)uVar3;
            iVar9 = FUN_18020a7f2(param_1,param_2,param_3,
                                  *(undefined4 *)(lVar10 + 0x10 + uVar11 * 0x18),
                                  *(undefined4 *)(lVar10 + 0x14 + uVar11 * 0x18));
            if (iVar9 != 0) {
              return iVar9;
            }
            piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 0x18 + uVar11 * 0x18
                            );
            uVar4 = *(ushort *)(lVar8 + 0x1a);
            iVar9 = (uint)uVar4 - (uint)uVar3;
            if ((*piVar1 == 0x10000) && (piVar1[1] == 0x10000)) {
              if (0 < iVar9) {
                lVar10 = *(longlong *)(lVar8 + 0x20);
                do {
                  piVar2 = (int *)(lVar10 + uVar13 * 8);
                  *piVar2 = *piVar2 + piVar1[2];
                  piVar2 = (int *)(lVar10 + 4 + uVar13 * 8);
                  *piVar2 = *piVar2 + piVar1[3];
                  uVar13 = uVar13 + 1;
                } while ((uint)uVar4 != (uint)uVar13);
              }
            }
            else if (0 < iVar9) {
              lVar10 = *(longlong *)(lVar8 + 0x20);
              uVar13 = (ulonglong)(uint)uVar3;
              do {
                lVar12 = (longlong)*(int *)(lVar10 + uVar13 * 8) * (longlong)*piVar1;
                *(int *)(lVar10 + uVar13 * 8) =
                     (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + piVar1[2];
                lVar12 = (longlong)*(int *)(lVar10 + 4 + uVar13 * 8) * (longlong)piVar1[1];
                *(int *)(lVar10 + 4 + uVar13 * 8) =
                     (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + piVar1[3];
                uVar13 = uVar13 + 1;
              } while ((uint)uVar4 != (uint)uVar13);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6 - uVar5);
        }
        iVar9 = 0;
      }
    }
  }
  return iVar9;
}

