/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169239 */

void FUN_140169239(uint param_1,uint param_2,int param_3,int *param_4,int param_5,char param_6,
                  int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  *param_4 = 0;
  if ((int)param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar8 = 0;
    goto LAB_14016943f;
  }
  iVar8 = *param_7;
  iVar7 = param_7[6];
  lVar11 = (ulonglong)param_1 * (longlong)(param_3 + param_5);
  iVar10 = 0x1f;
  uVar12 = (uint)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
  if (uVar12 != 0) {
    for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  iVar6 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if ((uint)(iVar6 + iVar10) < 0x2e) {
    iVar10 = (int)((ulonglong)param_2 * (longlong)(int)uVar12 +
                   ((longlong)((ulonglong)param_2 * (longlong)(int)uVar12) >> 0x3f) + 0x8000 >> 0x10
                  );
  }
  else {
    iVar10 = iVar7 << 0x10;
  }
  iVar6 = param_7[1];
  iVar9 = iVar8 * 0x10000;
  if (iVar10 < iVar9) {
LAB_1401693cb:
    iVar7 = FUN_14012b378(iVar6 << 0x10,param_2);
  }
  else {
    iVar1 = param_7[2];
    iVar2 = param_7[3];
    iVar3 = param_7[4];
    iVar4 = param_7[5];
    iVar5 = param_7[7];
    if (iVar10 < iVar1 * 0x10000) {
      iVar10 = FUN_14012b378(iVar9,param_2);
      if (iVar1 == iVar8) {
LAB_14016937c:
        iVar8 = FUN_14012b378(iVar1 * 0x10000,param_2);
        if (iVar3 == iVar1) goto LAB_1401693b8;
        iVar8 = FUN_14012a478(uVar12 - iVar8,iVar4 - iVar2);
      }
      else {
        iVar8 = FUN_14012a478(uVar12 - iVar10,iVar2 - iVar6);
        iVar2 = iVar6;
      }
      iVar7 = FUN_14012b378(iVar2 << 0x10,param_2);
      iVar7 = iVar7 + iVar8;
    }
    else {
      if (iVar10 < iVar3 * 0x10000) goto LAB_14016937c;
      iVar6 = iVar5;
      if (iVar7 * 0x10000 <= iVar10) goto LAB_1401693cb;
LAB_1401693b8:
      iVar8 = FUN_14012b378(iVar3 << 0x10,param_2);
      iVar6 = iVar5;
      if (iVar7 - iVar3 == 0) goto LAB_1401693cb;
      iVar8 = FUN_14012a478(uVar12 - iVar8,iVar5 - iVar4,iVar7 - iVar3);
      iVar7 = FUN_14012b378(iVar4 << 0x10,param_2);
      iVar7 = iVar7 + iVar8;
    }
  }
  *param_4 = iVar7;
  iVar8 = FUN_14012b378(iVar7,param_1 * 2);
LAB_14016943f:
  *param_4 = param_5 / 2 + iVar8;
  return;
}

