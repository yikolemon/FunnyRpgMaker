/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068a4c */

void FUN_140068a4c(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if (1 < (int)param_2) {
    uVar2 = FUN_140067f2a(param_1);
    iVar3 = (uint)uVar2 - param_2;
    if ((uint)uVar2 < param_2) {
      FUN_140067118(*(int **)(param_1 + 8),0x82);
      return;
    }
    if ((int)param_3 < 0) {
      uVar4 = -(-param_3 % param_2);
    }
    else {
      uVar4 = param_3 % param_2;
    }
    if (uVar4 != 0) {
      uVar8 = 0x200000000;
      iVar11 = -1;
      iVar10 = -1;
      uVar5 = param_2;
      do {
        lVar1 = *(longlong *)(param_1 + 0x10);
        uVar9 = uVar8;
        iVar6 = iVar11;
        if (iVar10 == iVar11) {
          iVar6 = iVar11 + 1;
          uVar9 = *(undefined8 *)(lVar1 + (longlong)(iVar11 + iVar3 + 1) * 8);
          iVar10 = iVar6;
        }
        iVar6 = iVar6 + uVar4;
        uVar12 = iVar6 >> 0x1f & param_2;
        if ((int)param_2 <= iVar6) {
          uVar12 = -param_2;
        }
        iVar11 = uVar12 + iVar6;
        lVar7 = (longlong)(iVar11 + iVar3);
        uVar8 = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar9;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

