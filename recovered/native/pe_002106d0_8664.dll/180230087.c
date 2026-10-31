/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180230087 */

undefined8
FUN_180230087(byte *param_1,ulonglong param_2,int *param_3,code *param_4,uint param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  param_2 = param_2 & 0xffffffff;
  uVar2 = param_3[param_2 * 2 + 1];
  uVar3 = param_3[1];
  if ((int)uVar2 <= (int)param_6 && (int)param_5 <= (int)uVar3) {
    if ((int)uVar3 <= (int)param_6) {
      param_6 = uVar3 & -*(int *)(param_1 + 4);
    }
    if ((int)param_5 <= (int)uVar2) {
      param_5 = -*(int *)(param_1 + 4) & (uVar2 + *(int *)(param_1 + 4)) - 1;
    }
    if (uVar2 == param_5) {
      param_5 = uVar2 + *(int *)(param_1 + 4);
    }
    if ((int)param_5 <= (int)param_6) {
      piVar9 = *(int **)(param_1 + 0x30);
      if (*(int **)(param_1 + 0x28) <=
          piVar9 + (ulonglong)(param_6 - param_5 >> (*param_1 & 0x1f)) + 1) {
        param_1[0x38] = 0x62;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        return CONCAT71((int7)((ulonglong)
                               (piVar9 + (ulonglong)(param_6 - param_5 >> (*param_1 & 0x1f)) + 1) >>
                              8),1);
      }
      do {
        iVar7 = *param_3;
        iVar4 = param_3[1];
        iVar8 = iVar4 - param_5;
        if (iVar8 == 0 || iVar4 < (int)param_5) {
          if (iVar8 == 0) goto LAB_180230160;
LAB_18023016b:
          lVar1 = param_2 * -8;
        }
        else {
          iVar5 = *(int *)(param_1 + 0x10);
          if (((iVar4 - param_3[param_2 * 2 + 1] <= iVar5) &&
              (iVar6 = iVar7 - param_3[param_2 * 2], iVar6 <= iVar5)) && (-iVar6 <= iVar5)) {
            iVar7 = iVar7 - (iVar6 * iVar8) / (iVar4 - param_3[param_2 * 2 + 1]);
LAB_180230160:
            *piVar9 = iVar7;
            piVar9 = piVar9 + 1;
            param_5 = param_5 + *(int *)(param_1 + 4);
            goto LAB_18023016b;
          }
          lVar1 = param_2 * 8;
          (*param_4)(param_3);
        }
        param_3 = (int *)((longlong)param_3 + lVar1);
      } while ((int)param_5 <= (int)param_6);
      *(int **)(param_1 + 0x30) = piVar9;
    }
  }
  return 0;
}

