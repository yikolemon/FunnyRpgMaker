/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016e6f3 */

void FUN_14016e6f3(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  
  *(bool *)(param_1 + 0x208) = param_2 < param_1[0x204];
  iVar9 = param_1[0x205];
  if ((0 < (longlong)iVar9) &&
     (lVar6 = (longlong)iVar9 * (longlong)param_2,
     0x20 < (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10))) {
    iVar9 = (int)(0x200000 / (longlong)param_2);
  }
  lVar6 = (longlong)param_2;
  param_1[0x206] = iVar9;
  iVar9 = 0;
  do {
    piVar7 = param_1;
    if (((iVar9 != 0) && (piVar7 = param_1 + 0x102, iVar9 != 2)) &&
       (piVar7 = param_1 + 0x81, iVar9 != 1)) {
      piVar7 = param_1 + 0x183;
    }
    iVar8 = *piVar7;
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar7[8] = (int)((ulonglong)(piVar7[3] * lVar6 + 0x8000 + (piVar7[3] * lVar6 >> 0x3f)) >>
                       0x10) + param_3;
      piVar7[7] = (int)((ulonglong)(piVar7[4] * lVar6 + 0x8000 + (piVar7[4] * lVar6 >> 0x3f)) >>
                       0x10) + param_3;
      piVar7[6] = (int)((ulonglong)(piVar7[2] * lVar6 + 0x8000 + (piVar7[2] * lVar6 >> 0x3f)) >>
                       0x10);
      piVar7[5] = (int)((ulonglong)(piVar7[1] * lVar6 + 0x8000 + (piVar7[1] * lVar6 >> 0x3f)) >>
                       0x10) + param_3 + 0x20 & 0xffffffc0;
      piVar7 = piVar7 + 8;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 4);
  bVar4 = true;
  do {
    piVar7 = param_1 + 0x81;
    if (bVar4) {
      piVar7 = param_1;
    }
    lVar10 = 0x60c;
    if (bVar4) {
      lVar10 = 0x408;
    }
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      piVar7 = piVar7 + 1;
      do {
        iVar8 = *(int *)((longlong)param_1 + lVar10);
        if (iVar8 != 0) {
          iVar1 = *piVar7;
          piVar11 = (int *)((longlong)param_1 + lVar10 + 0x20);
          do {
            iVar2 = piVar11[-7];
            uVar3 = iVar2 - iVar1;
            if (iVar2 < iVar1) {
              uVar3 = iVar1 - iVar2;
            }
            if ((int)((ulonglong)uVar3 * lVar6 + ((longlong)((ulonglong)uVar3 * lVar6) >> 0x3f) +
                      0x8000 >> 0x10) < 0x40) {
              piVar7[7] = *piVar11;
              piVar7[6] = piVar11[-1];
              piVar7[4] = piVar11[-3];
              piVar7[5] = piVar11[-2];
              break;
            }
            piVar11 = piVar11 + 8;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        piVar7 = piVar7 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    bVar5 = !bVar4;
    bVar4 = false;
    if (bVar5) {
      return;
    }
  } while( true );
}

