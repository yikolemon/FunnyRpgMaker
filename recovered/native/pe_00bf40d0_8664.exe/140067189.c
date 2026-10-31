/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067189 */

void FUN_140067189(uint param_1,uint param_2,int param_3,uint *param_4,int param_5,char param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  *param_4 = 0;
  if ((int)param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar9 = 0;
    goto LAB_14006738f;
  }
  iVar9 = *param_7;
  iVar8 = param_7[6];
  lVar12 = (ulonglong)param_1 * (longlong)(param_3 + param_5);
  iVar11 = 0x1f;
  uVar7 = (uint)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
  if (uVar7 != 0) {
    for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
  iVar6 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if ((uint)(iVar6 + iVar11) < 0x2e) {
    iVar11 = (int)((ulonglong)param_2 * (longlong)(int)uVar7 +
                   ((longlong)((ulonglong)param_2 * (longlong)(int)uVar7) >> 0x3f) + 0x8000 >> 0x10)
    ;
  }
  else {
    iVar11 = iVar8 << 0x10;
  }
  iVar6 = param_7[1];
  uVar10 = iVar9 * 0x10000;
  if (iVar11 < (int)uVar10) {
LAB_14006731b:
    uVar7 = FUN_14001ecff(iVar6 << 0x10,param_2);
  }
  else {
    iVar1 = param_7[2];
    iVar2 = param_7[3];
    iVar3 = param_7[4];
    iVar4 = param_7[5];
    iVar5 = param_7[7];
    if (iVar11 < iVar1 * 0x10000) {
      iVar11 = FUN_14001ecff(uVar10,param_2);
      uVar10 = iVar1 - iVar9;
      if (uVar10 == 0) {
LAB_1400672cc:
        iVar9 = FUN_14001ecff(iVar1 * 0x10000,param_2);
        if (iVar3 - iVar1 == 0) goto LAB_140067308;
        iVar9 = FUN_14001de7c(uVar7 - iVar9,iVar4 - iVar2,iVar3 - iVar1);
      }
      else {
        iVar9 = FUN_14001de7c(uVar7 - iVar11,iVar2 - iVar6,uVar10);
        iVar2 = iVar6;
      }
      iVar8 = FUN_14001ecff(iVar2 << 0x10,param_2);
      uVar7 = iVar8 + iVar9;
    }
    else {
      if (iVar11 < iVar3 * 0x10000) goto LAB_1400672cc;
      iVar6 = iVar5;
      if (iVar8 * 0x10000 <= iVar11) goto LAB_14006731b;
LAB_140067308:
      iVar9 = FUN_14001ecff(iVar3 << 0x10,param_2);
      iVar6 = iVar5;
      if (iVar8 - iVar3 == 0) goto LAB_14006731b;
      iVar9 = FUN_14001de7c(uVar7 - iVar9,iVar5 - iVar4,iVar8 - iVar3);
      iVar8 = FUN_14001ecff(iVar4 << 0x10,param_2);
      uVar7 = iVar8 + iVar9;
    }
  }
  *param_4 = uVar7;
  iVar9 = FUN_14001ecff(uVar7,param_1 * 2);
LAB_14006738f:
  *param_4 = param_5 / 2 + iVar9;
  return;
}

