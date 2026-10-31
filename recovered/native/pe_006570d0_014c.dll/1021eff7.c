/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021eff7 */

undefined4 __fastcall
FUN_1021eff7(byte *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
            uint param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
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
      uVar8 = param_7 - param_6 >> (*param_1 & 0x1f);
      piVar9 = *(int **)(param_1 + 0x20);
      if (*(int **)(param_1 + 0x1c) <= piVar9 + uVar8 + 1) {
        param_1[0x24] = 0x62;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        return 1;
      }
      iVar6 = param_4 - param_2;
      if (iVar6 == 0) {
        iVar6 = uVar8 + 1;
        do {
          *piVar9 = param_4;
          piVar9 = piVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      else {
        iVar5 = param_5 - param_3;
        iVar2 = __alldiv((longlong)(int)(param_6 - param_3) * (longlong)iVar6,iVar5,iVar5 >> 0x1f);
        param_2 = param_2 + iVar2;
        *piVar9 = param_2;
        piVar9 = piVar9 + 1;
        if (uVar8 != 0) {
          iVar4 = *(int *)(param_1 + 4);
          iVar7 = (param_6 - param_3) * iVar6 - iVar2 * iVar5;
          iVar3 = __alldiv((longlong)iVar6 * (longlong)iVar4,iVar5,iVar5 >> 0x1f);
          iVar4 = (int)((longlong)iVar6 * (longlong)iVar4) - iVar5 * iVar3;
          iVar2 = -iVar7;
          iVar6 = -iVar4;
          if (param_2 <= param_4) {
            iVar2 = iVar7;
            iVar6 = iVar4;
          }
          bVar1 = param_2 <= param_4;
          do {
            iVar4 = 0;
            iVar7 = 0;
            if (iVar5 <= iVar2 + iVar6) {
              iVar4 = iVar5;
              iVar7 = (uint)bVar1 * 2 + -1;
            }
            param_2 = param_2 + iVar3 + iVar7;
            iVar2 = (iVar2 + iVar6) - iVar4;
            *piVar9 = param_2;
            piVar9 = piVar9 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      *(int **)(param_1 + 0x20) = piVar9;
    }
  }
  return 0;
}

