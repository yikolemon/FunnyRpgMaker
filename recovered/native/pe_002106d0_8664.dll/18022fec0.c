/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022fec0 */

undefined8
FUN_18022fec0(byte *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
             uint param_7)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  int iVar10;
  ulonglong uVar8;
  
  if ((int)param_3 <= (int)param_7 && (int)param_6 <= (int)param_5) {
    if ((int)param_5 <= (int)param_7) {
      param_7 = -*(int *)(param_1 + 4) & param_5;
    }
    if ((int)param_6 <= (int)param_3) {
      param_6 = -*(int *)(param_1 + 4) & (param_3 + *(int *)(param_1 + 4)) - 1;
    }
    if (param_3 == param_6) {
      param_6 = *(int *)(param_1 + 4) + param_3;
    }
    if ((int)param_6 <= (int)param_7) {
      uVar7 = param_7 - param_6 >> (*param_1 & 0x1f);
      uVar8 = (ulonglong)uVar7;
      piVar3 = *(int **)(param_1 + 0x30);
      if (*(int **)(param_1 + 0x28) <= piVar3 + uVar8 + 1) {
        param_1[0x38] = 0x62;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        return CONCAT71((int7)((ulonglong)(piVar3 + uVar8 + 1) >> 8),1);
      }
      iVar4 = param_4 - param_2;
      if (iVar4 == 0) {
        iVar4 = uVar7 + 1;
        do {
          *piVar3 = param_4;
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      else {
        iVar9 = param_5 - param_3;
        iVar5 = (int)(((longlong)(int)(param_6 - param_3) * (longlong)iVar4) / (longlong)iVar9);
        param_2 = param_2 + iVar5;
        *piVar3 = param_2;
        piVar3 = piVar3 + 1;
        if (uVar7 != 0) {
          iVar6 = (param_6 - param_3) * iVar4 - iVar5 * iVar9;
          iVar2 = (int)(((longlong)*(int *)(param_1 + 4) * (longlong)iVar4) / (longlong)iVar9);
          iVar10 = *(int *)(param_1 + 4) * iVar4 - iVar9 * iVar2;
          bVar1 = param_2 <= param_4;
          iVar5 = -iVar6;
          iVar4 = -iVar10;
          if (param_2 <= param_4) {
            iVar5 = iVar6;
            iVar4 = iVar10;
          }
          do {
            iVar6 = 0;
            iVar10 = 0;
            if (iVar9 <= iVar5 + iVar4) {
              iVar6 = (bVar1 - 1) + (uint)bVar1;
              iVar10 = iVar9;
            }
            param_2 = param_2 + iVar2 + iVar6;
            iVar5 = (iVar5 + iVar4) - iVar10;
            *piVar3 = param_2;
            piVar3 = piVar3 + 1;
            uVar7 = (int)uVar8 - 1;
            uVar8 = (ulonglong)uVar7;
          } while (uVar7 != 0);
        }
      }
      *(int **)(param_1 + 0x30) = piVar3;
    }
  }
  return 0;
}

