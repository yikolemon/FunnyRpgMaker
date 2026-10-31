/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8704 */

void FUN_1400c8704(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong unaff_RBP;
  ulonglong uVar11;
  int iVar12;
  ulonglong unaff_R14;
  int *piVar13;
  
  if ((longlong)*param_2 != 0) {
    piVar13 = *(int **)(param_2 + 2);
    piVar2 = piVar13 + (longlong)*param_2 * 6;
    do {
      if (*piVar13 == 2) {
        iVar12 = piVar13[2];
        iVar4 = piVar13[4];
        iVar7 = iVar4 - iVar12;
        if (iVar7 != 0) {
          iVar1 = iVar7 + 1;
          if (*param_1 / 100 <= iVar1) {
            unaff_RBP = (ulonglong)(uint)param_1[8];
            if (iVar12 <= iVar4) {
              if (-1 < *(char *)((longlong)piVar13 + 5)) {
                iVar7 = 0;
              }
              iVar7 = iVar7 + param_1[6];
              do {
                unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),(char)piVar13[1]);
                uVar6 = (**(code **)(param_1 + 4))(param_1,iVar12);
                FUN_1400c88dd(param_1,uVar6,unaff_R14 & 0xffffffff,unaff_RBP,iVar7);
                iVar7 = *(char *)((longlong)piVar13 + 5) + iVar7;
                bVar5 = iVar12 < piVar13[4];
                iVar12 = iVar12 + 1;
              } while (bVar5);
            }
            uVar11 = unaff_RBP;
            if ((char)piVar13[1] == '\0') {
              uVar9 = 0;
            }
            else {
              param_1[6] = param_1[6] + iVar1;
              uVar9 = (undefined1)piVar13[1];
            }
            goto LAB_1400c88ba;
          }
        }
        if (iVar12 <= iVar4) {
          do {
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)piVar13[1]);
            uVar6 = (**(code **)(param_1 + 4))(param_1,iVar12);
            FUN_1400c86ba(param_1,uVar6,unaff_RBP & 0xffffffff);
            bVar5 = iVar12 < piVar13[4];
            iVar12 = iVar12 + 1;
          } while (bVar5);
        }
      }
      else if ((*piVar13 == 1) && (FUN_1400c8506(param_1), (char)piVar13[1] == '\x01')) {
        uVar10 = param_2[9];
        if (param_1[9] < (int)uVar10) {
          uVar8 = FUN_140077ab4((longlong)(int)uVar10 << 4);
          if (*(longlong *)(param_1 + 10) != 0) {
            FUN_1401c5180(uVar8,*(longlong *)(param_1 + 10),(longlong)param_1[8] << 4);
            FUN_140077b90(*(undefined8 *)(param_1 + 10));
          }
          *(undefined8 *)(param_1 + 10) = uVar8;
          param_1[9] = uVar10;
          uVar10 = param_2[9];
        }
        unaff_RBP = (ulonglong)uVar10;
        uVar3 = param_1[8];
        if (0 < (int)uVar10) {
          iVar12 = param_1[6];
          unaff_RBP = 0;
          do {
            unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),(char)piVar13[1]);
            uVar6 = (**(code **)(param_1 + 4))(param_1,unaff_RBP);
            FUN_1400c88dd(param_1,uVar6,unaff_R14 & 0xffffffff,uVar3,iVar12);
            uVar10 = (int)unaff_RBP + 1;
            unaff_RBP = (ulonglong)uVar10;
            iVar12 = param_1[6] + 1;
            param_1[6] = iVar12;
          } while ((int)uVar10 < param_2[9]);
        }
        uVar9 = (undefined1)piVar13[1];
        uVar11 = (ulonglong)uVar3;
LAB_1400c88ba:
        FUN_1400c89e0(param_1,uVar9,uVar11);
      }
      piVar13 = piVar13 + 6;
    } while (piVar13 != piVar2);
  }
  return;
}

