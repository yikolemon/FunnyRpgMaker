/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020a86c */

void __fastcall
FUN_1020a86c(uint param_1,uint param_2,int param_3,int *param_4,int param_5,char param_6,
            int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  *param_4 = 0;
  if ((int)param_1 < 0x28f) {
    return;
  }
  if (param_5 == 0 && param_6 == '\0') {
    return;
  }
  if (param_6 == '\0') {
    iVar8 = 0;
    goto LAB_1020aa44;
  }
  lVar4 = (ulonglong)(uint)(param_3 + param_5) * (ulonglong)param_1;
  uVar5 = (uint)lVar4;
  iVar9 = (param_3 + param_5 >> 0x1f) * param_1 + (int)((ulonglong)lVar4 >> 0x20);
  uVar11 = iVar9 >> 0x1f;
  uVar6 = uVar5 + uVar11;
  iVar8 = *param_7;
  uVar5 = (uVar11 + iVar9 + (uint)CARRY4(uVar5,uVar11) + (uint)(0xffff7fff < uVar6)) * 0x10000 |
          uVar6 + 0x8000 >> 0x10;
  iVar9 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  iVar7 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar1 = param_7[6];
  if ((uint)(iVar7 + iVar9) < 0x2e) {
    uVar6 = (uint)((ulonglong)uVar5 * (ulonglong)param_2);
    iVar9 = ((int)uVar5 >> 0x1f) * param_2 + (int)((ulonglong)uVar5 * (ulonglong)param_2 >> 0x20);
    uVar10 = iVar9 >> 0x1f;
    uVar11 = uVar6 + uVar10;
    uVar6 = (uVar10 + iVar9 + (uint)CARRY4(uVar6,uVar10) + (uint)(0xffff7fff < uVar11)) * 0x10000 |
            uVar11 + 0x8000 >> 0x10;
  }
  else {
    uVar6 = iVar1 << 0x10;
  }
  iVar9 = param_7[1];
  iVar7 = iVar8 * 0x10000;
  if ((int)uVar6 < iVar7) {
LAB_1020aa2a:
    iVar8 = FUN_101c2523(iVar9 << 0x10,param_2);
  }
  else {
    iVar2 = param_7[2];
    iVar14 = param_7[3];
    iVar13 = param_7[4];
    iVar12 = param_7[5];
    iVar3 = param_7[7];
    if ((int)uVar6 < iVar2 * 0x10000) {
      iVar7 = FUN_101c2523(iVar7,param_2,param_2,iVar12,param_1,iVar13,iVar14);
      iVar8 = iVar2 - iVar8;
      if (iVar8 == 0) {
LAB_1020a9c9:
        uVar11 = param_2;
        iVar8 = FUN_101c2523(iVar2 * 0x10000,param_2,param_2,iVar12,param_1,iVar13,iVar14);
        if (iVar13 - iVar2 == 0) {
          iVar8 = iVar13 << 0x10;
          goto LAB_1020aa0d;
        }
        iVar9 = FUN_101c16ea(uVar5 - iVar8,iVar12 - iVar14,iVar13 - iVar2);
        iVar8 = FUN_101c2523(iVar14 << 0x10,param_2);
        iVar8 = iVar8 + iVar9;
      }
      else {
        iVar7 = FUN_101c16ea(uVar5 - iVar7,iVar14 - iVar9,iVar8);
        iVar8 = FUN_101c2523(iVar9 << 0x10,param_2);
        iVar8 = iVar8 + iVar7;
      }
    }
    else {
      iVar8 = iVar13 * 0x10000;
      if ((int)uVar6 < iVar8) goto LAB_1020a9c9;
      uVar11 = param_2;
      iVar9 = iVar3;
      if (iVar1 * 0x10000 <= (int)uVar6) goto LAB_1020aa2a;
LAB_1020aa0d:
      iVar8 = FUN_101c2523(iVar8,param_2);
      param_2 = uVar11;
      iVar9 = iVar3;
      if (iVar1 - iVar13 == 0) goto LAB_1020aa2a;
      iVar9 = FUN_101c16ea(uVar5 - iVar8,iVar3 - iVar12,iVar1 - iVar13);
      iVar8 = FUN_101c2523(iVar12 << 0x10,param_2);
      iVar8 = iVar8 + iVar9;
    }
  }
  *param_4 = iVar8;
  iVar8 = FUN_101c2523(iVar8,param_1 * 2);
LAB_1020aa44:
  *param_4 = param_5 / 2 + iVar8;
  return;
}

