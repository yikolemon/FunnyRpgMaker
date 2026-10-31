/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00461fe4 */

void __fastcall
FUN_00461fe4(uint param_1,uint param_2,int param_3,uint *param_4,int param_5,char param_6,
            int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  *param_4 = 0;
  if ((int)param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar11 = 0;
    goto LAB_004621bc;
  }
  lVar7 = (ulonglong)(uint)(param_3 + param_5) * (ulonglong)param_1;
  uVar8 = (uint)lVar7;
  iVar12 = (param_3 + param_5 >> 0x1f) * param_1 + (int)((ulonglong)lVar7 >> 0x20);
  uVar14 = iVar12 >> 0x1f;
  uVar9 = uVar8 + uVar14;
  iVar11 = *param_7;
  uVar8 = (uVar14 + iVar12 + (uint)CARRY4(uVar8,uVar14) + (uint)(0xffff7fff < uVar9)) * 0x10000 |
          uVar9 + 0x8000 >> 0x10;
  iVar12 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  iVar6 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar1 = param_7[6];
  if ((uint)(iVar6 + iVar12) < 0x2e) {
    uVar9 = (uint)((ulonglong)uVar8 * (ulonglong)param_2);
    iVar12 = ((int)uVar8 >> 0x1f) * param_2 + (int)((ulonglong)uVar8 * (ulonglong)param_2 >> 0x20);
    uVar13 = iVar12 >> 0x1f;
    uVar14 = uVar9 + uVar13;
    uVar9 = (uVar13 + iVar12 + (uint)CARRY4(uVar9,uVar13) + (uint)(0xffff7fff < uVar14)) * 0x10000 |
            uVar14 + 0x8000 >> 0x10;
  }
  else {
    uVar9 = iVar1 << 0x10;
  }
  iVar12 = param_7[1];
  uVar14 = iVar11 * 0x10000;
  if ((int)uVar9 < (int)uVar14) {
LAB_004621a2:
    uVar8 = FUN_0041eaa0(iVar12 << 0x10,param_2);
  }
  else {
    iVar6 = param_7[2];
    iVar2 = param_7[3];
    iVar3 = param_7[4];
    iVar4 = param_7[5];
    iVar5 = param_7[7];
    if ((int)uVar9 < iVar6 * 0x10000) {
      iVar10 = FUN_0041eaa0(uVar14,param_2);
      uVar9 = iVar6 - iVar11;
      if (uVar9 == 0) {
LAB_00462141:
        iVar11 = FUN_0041eaa0(iVar6 * 0x10000,param_2);
        if (iVar3 - iVar6 == 0) {
          uVar14 = iVar3 << 0x10;
          goto LAB_00462185;
        }
        iVar11 = FUN_0041dcda(uVar8 - iVar11,iVar4 - iVar2,iVar3 - iVar6);
        iVar12 = FUN_0041eaa0(iVar2 << 0x10,param_2);
        uVar8 = iVar12 + iVar11;
      }
      else {
        iVar11 = FUN_0041dcda(uVar8 - iVar10,iVar2 - iVar12,uVar9);
        iVar12 = FUN_0041eaa0(iVar12 << 0x10,param_2);
        uVar8 = iVar12 + iVar11;
      }
    }
    else {
      uVar14 = iVar3 * 0x10000;
      if ((int)uVar9 < (int)uVar14) goto LAB_00462141;
      iVar12 = iVar5;
      if (iVar1 * 0x10000 <= (int)uVar9) goto LAB_004621a2;
LAB_00462185:
      iVar11 = FUN_0041eaa0(uVar14,param_2);
      iVar12 = iVar5;
      if (iVar1 - iVar3 == 0) goto LAB_004621a2;
      iVar11 = FUN_0041dcda(uVar8 - iVar11,iVar5 - iVar4,iVar1 - iVar3);
      iVar12 = FUN_0041eaa0(iVar4 << 0x10,param_2);
      uVar8 = iVar12 + iVar11;
    }
  }
  *param_4 = uVar8;
  iVar11 = FUN_0041eaa0(uVar8,param_1 * 2);
LAB_004621bc:
  *param_4 = param_5 / 2 + iVar11;
  return;
}

