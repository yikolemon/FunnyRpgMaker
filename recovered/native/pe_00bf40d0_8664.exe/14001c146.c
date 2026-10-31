/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c146 */

char * FUN_14001c146(int *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  bVar2 = param_4[1];
  if ((bVar2 & 8) != 0) {
    param_1[2] = 1;
  }
  *param_3 = *param_4;
  param_3[1] = param_4[1];
  pcVar6 = param_4 + 2;
  puVar11 = (undefined8 *)(param_3 + 2);
  lVar7 = (ulonglong)(byte)param_4[2] * 0x10;
  if (-1 < (char)bVar2) {
    pcVar8 = (char *)(**(code **)(&DAT_14014d238 + lVar7))
                               (param_1,&DAT_14014d230 + lVar7,puVar11,pcVar6);
    if ((bVar2 == 0) && (*pcVar6 == -0x5f)) {
      **(undefined8 **)(param_1 + 8) = *(undefined8 *)(param_4 + 3);
    }
    return pcVar8;
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
    puVar9 = (uint *)&DAT_14014d010;
    if (*param_1 == 0 && param_1[5] == 0) {
      puVar9 = (uint *)&DAT_14014d000;
    }
    pcVar6 = (char *)switchD_14001c1d2::caseD_0(param_1,puVar9,puVar11,(undefined8 *)pcVar6);
    return pcVar6;
  }
  uVar3 = *(uint *)(&DAT_14014e230 + lVar7);
  uVar10 = uVar3 >> 8 & 0xf;
  uVar13 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar4 = *param_1;
        goto LAB_14001bbbc;
      }
    }
    else {
      uVar13 = uVar13 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar4 = param_1[1];
LAB_14001bbbc:
    if (iVar4 != 0) {
      uVar13 = uVar3 >> 4 & 0xf;
    }
  }
  uVar15 = uVar13;
  if (uVar10 == 0) {
LAB_14001bc50:
    uVar10 = uVar3 >> 0xc & 0xf;
    uVar12 = (ulonglong)uVar15;
    FUN_1400b3550(puVar11,(undefined8 *)pcVar6,uVar12);
    if (uVar10 == 0) goto LAB_14001bcaa;
    uVar13 = uVar13 - uVar10;
  }
  else {
    bVar2 = pcVar6[uVar10];
    bVar1 = (&DAT_14014d130)[bVar2];
    uVar14 = (bVar1 & 0xf) + uVar13;
    uVar15 = uVar14;
    if ((bVar1 & 0x10) != 0) {
      uVar13 = uVar14;
      if ((param_4[(ulonglong)uVar10 + 3] & 7) == 5) {
        if ((bVar2 & 0xc0) == 0x40) {
          uVar13 = uVar14 + 1;
          uVar15 = uVar13;
        }
        else if ((bVar2 & 0xc0) == 0) {
          uVar13 = uVar14 + 4;
          uVar15 = uVar13;
        }
        else {
          uVar13 = uVar14 + 4;
          uVar15 = uVar14 + 4;
          if (-0x41 < (char)bVar2) {
            uVar13 = uVar14;
            uVar15 = uVar14;
          }
        }
      }
      goto LAB_14001bc50;
    }
    if ((bVar1 & 0x20) == 0) goto LAB_14001bc50;
    uVar10 = uVar10 + 1;
    uVar12 = (ulonglong)uVar14;
    FUN_1400b3550(puVar11,(undefined8 *)pcVar6,uVar12);
    uVar13 = 4;
  }
  lVar5 = FUN_14001bcde((longlong)param_1,(longlong)puVar11,(longlong)pcVar6,uVar15,uVar10,uVar13);
  **(longlong **)(param_1 + 8) = lVar5;
  if (((&UNK_14014e231)[lVar7] & 0xf0) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_14001bcaa:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return pcVar6 + uVar12;
}

