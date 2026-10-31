/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e26c */

char * switchD_18019dc7b::caseD_d5
                 (int *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

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
  bVar1 = param_4[1];
  if ((bVar1 & 8) != 0) {
    param_1[2] = 1;
  }
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  pcVar5 = param_4 + 2;
  param_3 = param_3 + 2;
  bVar2 = param_4[2];
  lVar6 = (ulonglong)bVar2 * 0x10;
  if (-1 < (char)bVar1) {
    pcVar7 = (char *)(*(code *)(&switchdataD_18044c238)[(ulonglong)bVar2 * 2])
                               (param_1,&DAT_18044c230 + lVar6,param_3,pcVar5);
    if ((bVar1 == 0) && (*pcVar5 == -0x5f)) {
      **(undefined8 **)(param_1 + 8) = *(undefined8 *)(param_4 + 3);
    }
    return pcVar7;
  }
  switch(bVar2) {
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
    puVar8 = &DAT_18044c010;
    if (*param_1 == 0 && param_1[5] == 0) {
      puVar8 = &DAT_18044c000;
    }
    pcVar5 = (char *)switchD_18019e2f8::caseD_0(param_1,puVar8);
    return pcVar5;
  }
  uVar3 = *(uint *)(&DAT_18044d230 + lVar6);
  uVar9 = uVar3 >> 8 & 0xf;
  uVar11 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar12 = *param_1;
        goto LAB_18019dce2;
      }
    }
    else {
      uVar11 = uVar11 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar12 = param_1[1];
LAB_18019dce2:
    if (iVar12 != 0) {
      uVar11 = uVar3 >> 4 & 0xf;
    }
  }
  uVar14 = uVar11;
  if (uVar9 == 0) {
LAB_18019dd76:
    uVar9 = uVar3 >> 0xc & 0xf;
    uVar10 = (ulonglong)uVar14;
    FUN_1802a82f0(param_3,pcVar5,uVar10);
    if (uVar9 == 0) goto LAB_18019ddd0;
    iVar12 = uVar11 - uVar9;
  }
  else {
    bVar1 = pcVar5[uVar9];
    bVar2 = (&DAT_18044c130)[bVar1];
    uVar13 = (bVar2 & 0xf) + uVar11;
    uVar14 = uVar13;
    if ((bVar2 & 0x10) != 0) {
      uVar11 = uVar13;
      if ((param_4[(ulonglong)uVar9 + 3] & 7) == 5) {
        if ((bVar1 & 0xc0) == 0x40) {
          uVar11 = uVar13 + 1;
          uVar14 = uVar11;
        }
        else if ((bVar1 & 0xc0) == 0) {
          uVar11 = uVar13 + 4;
          uVar14 = uVar11;
        }
        else {
          uVar11 = uVar13 + 4;
          uVar14 = uVar13 + 4;
          if (-0x41 < (char)bVar1) {
            uVar11 = uVar13;
            uVar14 = uVar13;
          }
        }
      }
      goto LAB_18019dd76;
    }
    if ((bVar2 & 0x20) == 0) goto LAB_18019dd76;
    uVar9 = uVar9 + 1;
    uVar10 = (ulonglong)uVar13;
    FUN_1802a82f0(param_3,pcVar5,uVar10);
    iVar12 = 4;
  }
  uVar4 = FUN_18019de04(param_1,param_3,pcVar5,uVar14,uVar9,CONCAT44(uVar15,iVar12));
  **(undefined8 **)(param_1 + 8) = uVar4;
  if (((&UNK_18044d231)[lVar6] & 0xf0) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_18019ddd0:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return pcVar5 + uVar10;
}

