/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001bb6c */

longlong switchD_14001c1d2::caseD_0
                   (int *param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = *param_2;
  uVar6 = uVar3 >> 8 & 0xf;
  uVar8 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar4 = *param_1;
        goto LAB_14001bbbc;
      }
    }
    else {
      uVar8 = uVar8 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar4 = param_1[1];
LAB_14001bbbc:
    if (iVar4 != 0) {
      uVar8 = uVar3 >> 4 & 0xf;
    }
  }
  uVar10 = uVar8;
  if (uVar6 == 0) {
LAB_14001bc50:
    uVar6 = uVar3 >> 0xc & 0xf;
    uVar7 = (ulonglong)uVar10;
    FUN_1400b3550(param_3,param_4,uVar7);
    if (uVar6 == 0) goto LAB_14001bcaa;
    uVar8 = uVar8 - uVar6;
  }
  else {
    bVar1 = *(byte *)((longlong)param_4 + (ulonglong)uVar6);
    bVar2 = (&DAT_14014d130)[bVar1];
    uVar9 = (bVar2 & 0xf) + uVar8;
    uVar10 = uVar9;
    if ((bVar2 & 0x10) != 0) {
      uVar8 = uVar9;
      if ((*(byte *)((longlong)param_4 + (ulonglong)uVar6 + 1) & 7) == 5) {
        if ((bVar1 & 0xc0) == 0x40) {
          uVar8 = uVar9 + 1;
          uVar10 = uVar8;
        }
        else if ((bVar1 & 0xc0) == 0) {
          uVar8 = uVar9 + 4;
          uVar10 = uVar8;
        }
        else {
          uVar8 = uVar9 + 4;
          uVar10 = uVar9 + 4;
          if (-0x41 < (char)bVar1) {
            uVar8 = uVar9;
            uVar10 = uVar9;
          }
        }
      }
      goto LAB_14001bc50;
    }
    if ((bVar2 & 0x20) == 0) goto LAB_14001bc50;
    uVar6 = uVar6 + 1;
    uVar7 = (ulonglong)uVar9;
    FUN_1400b3550(param_3,param_4,uVar7);
    uVar8 = 4;
  }
  lVar5 = FUN_14001bcde((longlong)param_1,(longlong)param_3,(longlong)param_4,uVar10,uVar6,uVar8);
  **(longlong **)(param_1 + 8) = lVar5;
  if ((*param_2 & 0xf000) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_14001bcaa:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return (longlong)param_4 + uVar7;
}

