/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130cde */

char * FUN_140130cde(int *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffffb0;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  bVar2 = param_4[1];
  if ((bVar2 & 8) != 0) {
    param_1[2] = 1;
  }
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  pcVar5 = param_4 + 2;
  param_3 = param_3 + 2;
  lVar6 = (ulonglong)(byte)param_4[2] * 0x10;
  if (-1 < (char)bVar2) {
    pcVar7 = (char *)(**(code **)(&DAT_140f4b238 + lVar6))
                               (param_1,&DAT_140f4b230 + lVar6,param_3,pcVar5);
    if ((bVar2 == 0) && (*pcVar5 == -0x5f)) {
      **(undefined8 **)(param_1 + 8) = *(undefined8 *)(param_4 + 3);
    }
    return pcVar7;
  }
  switch(param_4[2]) {
  case 4:
  case 10:
  case 0xc:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x36:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x7a:
  case 0x7b:
  case 0xb9:
  case 0xff:
    return param_4 + 3;
  case 0x78:
    puVar8 = &DAT_140f4b010;
    if (*param_1 == 0 && param_1[5] == 0) {
      puVar8 = &DAT_140f4b000;
    }
    pcVar5 = (char *)switchD_140130d6a::caseD_0(param_1,puVar8);
    return pcVar5;
  }
  uVar3 = *(uint *)(&DAT_140f4c230 + lVar6);
  uVar9 = uVar3 >> 8 & 0xf;
  uVar11 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar12 = *param_1;
        goto LAB_140130754;
      }
    }
    else {
      uVar11 = uVar11 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar12 = param_1[1];
LAB_140130754:
    if (iVar12 != 0) {
      uVar11 = uVar3 >> 4 & 0xf;
    }
  }
  uVar14 = uVar11;
  if (uVar9 == 0) {
LAB_1401307e8:
    uVar9 = uVar3 >> 0xc & 0xf;
    uVar10 = (ulonglong)uVar14;
    FUN_1401c5180(param_3,pcVar5,uVar10);
    if (uVar9 == 0) goto LAB_140130842;
    iVar12 = uVar11 - uVar9;
  }
  else {
    bVar2 = pcVar5[uVar9];
    bVar1 = (&DAT_140f4b130)[bVar2];
    uVar13 = (bVar1 & 0xf) + uVar11;
    uVar14 = uVar13;
    if ((bVar1 & 0x10) != 0) {
      uVar11 = uVar13;
      if ((param_4[(ulonglong)uVar9 + 3] & 7) == 5) {
        if ((bVar2 & 0xc0) == 0x40) {
          uVar11 = uVar13 + 1;
          uVar14 = uVar11;
        }
        else if ((bVar2 & 0xc0) == 0) {
          uVar11 = uVar13 + 4;
          uVar14 = uVar11;
        }
        else {
          uVar11 = uVar13 + 4;
          uVar14 = uVar13 + 4;
          if (-0x41 < (char)bVar2) {
            uVar11 = uVar13;
            uVar14 = uVar13;
          }
        }
      }
      goto LAB_1401307e8;
    }
    if ((bVar1 & 0x20) == 0) goto LAB_1401307e8;
    uVar9 = uVar9 + 1;
    uVar10 = (ulonglong)uVar13;
    FUN_1401c5180(param_3,pcVar5,uVar10);
    iVar12 = 4;
  }
  uVar4 = FUN_140130876(param_1,param_3,pcVar5,uVar14,uVar9,CONCAT44(uVar15,iVar12));
  **(undefined8 **)(param_1 + 8) = uVar4;
  if (((&UNK_140f4c231)[lVar6] & 0xf0) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_140130842:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return pcVar5 + uVar10;
}

