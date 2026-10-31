/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ded0 */

byte * switchD_18019dc7b::caseD_f0(int *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined7 uVar8;
  undefined *puVar7;
  uint uVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  longlong lVar10;
  undefined8 unaff_RDI;
  byte *pbVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 in_stack_fffffffffffffff0;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
code_r0x00018019ded0:
  pbVar11 = param_4;
  pbVar4 = param_3;
  *pbVar4 = *pbVar11;
  param_4 = pbVar11 + 1;
  puVar6 = (uint *)(&DAT_18044c230 + (ulonglong)pbVar11[1] * 0x10);
  param_3 = pbVar4 + 1;
  uVar8 = (undefined7)((ulonglong)puVar6 >> 8);
  switch(pbVar11[1]) {
  default:
    goto code_r0x00018019dc92;
  case 6:
  case 7:
  case 0xe:
  case 0x16:
  case 0x17:
  case 0x1e:
  case 0x1f:
  case 0x27:
  case 0x2f:
  case 0x37:
  case 0x3f:
  case 0x60:
  case 0x61:
  case 0x82:
  case 0x9a:
  case 0xce:
  case 0xd4:
  case 0xd6:
  case 0xea:
code_r0x00018019df84:
    return param_4 + 1;
  case 0xf:
    *param_3 = *param_4;
    param_4 = pbVar11 + 2;
    puVar6 = (uint *)(&DAT_18044d230 + (ulonglong)pbVar11[2] * 0x10);
    param_3 = pbVar4 + 2;
    switch(pbVar11[2]) {
    default:
      goto code_r0x00018019dc92;
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
      goto code_r0x00018019df84;
    case 0x78:
switchD_18019e2f8_caseD_78:
      puVar7 = &DAT_18044c010;
      if (*param_1 == 0 && param_1[5] == 0) {
        puVar7 = &DAT_18044c000;
      }
      pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar7);
      return pbVar4;
    }
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    *(byte *)(param_1 + 7) = *param_4;
    goto code_r0x00018019ded0;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    if ((*param_4 & 8) != 0) {
      param_1[2] = 1;
    }
    goto code_r0x00018019ded0;
  case 0x62:
    bVar3 = pbVar11[3];
    if ((bVar3 & 4) == 0) {
      pbVar4 = (byte *)switchD_18019e2f8::caseD_4();
      return pbVar4;
    }
    bVar1 = pbVar11[2];
    *(undefined4 *)param_3 = *(undefined4 *)param_4;
    param_1[4] = 1;
    param_1[2] = param_1[2] | (uint)(bVar3 >> 7);
    pbVar4 = (byte *)FUN_18019e0d8(param_1,CONCAT71(uVar8,bVar1) & 0xffffffffffffff03,pbVar4 + 5,
                                   pbVar11 + 5,
                                   CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffe8 >> 8),bVar3)
                                   & 0xffffffffffffff03,
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffff0 >> 8),bVar1)
                                   & 0xffffffffffffff04);
    return pbVar4;
  case 0x66:
    *param_1 = 1;
    goto code_r0x00018019ded0;
  case 0x67:
    param_1[1] = 1;
    goto code_r0x00018019ded0;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0xeb:
    iVar15 = -4;
    bVar3 = pbVar11[2];
    **(undefined8 **)(param_1 + 8) = param_4 + (longlong)(char)bVar3 + 2;
    if (*param_4 == 0xeb) {
      *param_3 = 0xe9;
      iVar15 = -3;
      uVar12 = 3;
      lVar10 = 1;
    }
    else {
      *param_3 = 0xf;
      pbVar4[2] = *param_4 & 0xf | 0x80;
      uVar12 = 4;
      lVar10 = 2;
    }
    *(int *)(param_3 + lVar10) = (int)(char)bVar3 + iVar15 + ((int)param_4 - (int)param_3);
    **(undefined4 **)(param_1 + 10) = uVar12;
    return pbVar11 + 3;
  case 0x8f:
    bVar3 = (pbVar11[2] & 0x1f) - 8;
    if (bVar3 < 3) {
      pbVar4 = (byte *)switchD_18019e2f8::caseD_0
                                 (param_1,&DAT_180327ff0 +
                                          *(int *)(&DAT_180327ff0 + (ulonglong)bVar3 * 4));
      return pbVar4;
    }
    pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0f0);
    return pbVar4;
  case 0xc4:
    *param_3 = *param_4;
    pbVar4[2] = pbVar11[2];
    bVar3 = pbVar11[3];
    pbVar4[3] = bVar3;
    param_1[2] = param_1[2] | (uint)(bVar3 >> 7);
    pbVar4 = (byte *)FUN_18019e16e(param_1,CONCAT71(uVar8,pbVar11[2]) & 0xffffffffffffff1f,
                                   pbVar4 + 4,pbVar11 + 4);
    return pbVar4;
  case 0xc5:
    *param_3 = *param_4;
    pbVar4[2] = pbVar11[2];
    pbVar4 = (byte *)FUN_18019e16e(param_1,CONCAT71(uVar8,1),pbVar4 + 3,pbVar11 + 3);
    return pbVar4;
  case 199:
    puVar7 = &DAT_18044c0c0;
    if ((~pbVar11[2] & 0x38) == 0) {
      puVar7 = &DAT_18044c0b0;
    }
    pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar7);
    return pbVar4;
  case 0xd5:
    bVar3 = pbVar11[2];
    if ((bVar3 & 8) != 0) {
      param_1[2] = 1;
    }
    *param_3 = *param_4;
    pbVar4[2] = pbVar11[2];
    param_4 = pbVar11 + 3;
    param_3 = pbVar4 + 3;
    bVar1 = pbVar11[3];
    lVar10 = (ulonglong)bVar1 * 0x10;
    if (-1 < (char)bVar3) {
      pbVar4 = (byte *)(*(code *)(&switchdataD_18044c238)[(ulonglong)bVar1 * 2])
                                 (param_1,&DAT_18044c230 + lVar10,param_3,param_4);
      if ((bVar3 == 0) && (*param_4 == 0xa1)) {
        **(undefined8 **)(param_1 + 8) = *(undefined8 *)(pbVar11 + 4);
      }
      return pbVar4;
    }
    puVar6 = (uint *)(&DAT_18044d230 + lVar10);
    switch(bVar1) {
    default:
      goto code_r0x00018019dc92;
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
      goto code_r0x00018019df84;
    case 0x78:
      goto switchD_18019e2f8_caseD_78;
    }
  case 0xf0:
    goto code_r0x00018019ded0;
  case 0xf2:
    param_1[5] = 1;
    goto code_r0x00018019ded0;
  case 0xf3:
    break;
  case 0xf6:
    puVar7 = &DAT_18044c070;
    if ((pbVar11[2] & 0x30) == 0) {
      puVar7 = &DAT_18044c060;
    }
    pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar7);
    return pbVar4;
  case 0xf7:
    puVar7 = &DAT_18044c090;
    if ((pbVar11[2] & 0x30) == 0) {
      puVar7 = &DAT_18044c080;
    }
    pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar7);
    return pbVar4;
  case 0xff:
    pbVar4 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0a0);
    bVar3 = pbVar11[2];
    if ((bVar3 == 0x25) || (bVar3 == 0x15)) {
      uVar5 = 0xffffffffffffffff;
      if (((*(byte *)(param_1 + 7) & 0xfe) != 100) &&
         ((param_4 = param_4 + (longlong)*(int *)(pbVar11 + 3) + 6, DAT_18044f000 == 0 ||
          ((DAT_18044f008 <= param_4 && (param_4 < DAT_180404640)))))) {
        uVar5 = *(undefined8 *)param_4;
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
      if (((bVar3 & 0x30) != 0x20) && ((bVar3 & 0x30) != 0x10)) {
        return pbVar4;
      }
    }
    **(undefined8 **)(param_1 + 8) = uVar5;
    return pbVar4;
  }
  param_1[6] = 1;
  goto code_r0x00018019ded0;
code_r0x00018019dc92:
  uVar2 = *puVar6;
  uVar9 = uVar2 >> 8 & 0xf;
  uVar14 = uVar2 & 0xf;
  if ((uVar2 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar15 = *param_1;
        goto LAB_18019dce2;
      }
    }
    else {
      uVar14 = uVar14 + (uVar2 >> 0x11 & 4);
    }
  }
  else {
    iVar15 = param_1[1];
LAB_18019dce2:
    if (iVar15 != 0) {
      uVar14 = uVar2 >> 4 & 0xf;
    }
  }
  uVar17 = uVar14;
  if (uVar9 == 0) {
LAB_18019dd76:
    uVar9 = uVar2 >> 0xc & 0xf;
    uVar13 = (ulonglong)uVar17;
    FUN_1802a82f0(param_3,param_4,uVar13);
    if (uVar9 == 0) goto LAB_18019ddd0;
    iVar15 = uVar14 - uVar9;
  }
  else {
    bVar3 = param_4[uVar9];
    bVar1 = (&DAT_18044c130)[bVar3];
    uVar16 = (bVar1 & 0xf) + uVar14;
    uVar17 = uVar16;
    if ((bVar1 & 0x10) != 0) {
      uVar14 = uVar16;
      if ((param_4[(ulonglong)uVar9 + 1] & 7) == 5) {
        if ((bVar3 & 0xc0) == 0x40) {
          uVar14 = uVar16 + 1;
          uVar17 = uVar14;
        }
        else if ((bVar3 & 0xc0) == 0) {
          uVar14 = uVar16 + 4;
          uVar17 = uVar14;
        }
        else {
          uVar14 = uVar16 + 4;
          uVar17 = uVar16 + 4;
          if (-0x41 < (char)bVar3) {
            uVar14 = uVar16;
            uVar17 = uVar16;
          }
        }
      }
      goto LAB_18019dd76;
    }
    if ((bVar1 & 0x20) == 0) goto LAB_18019dd76;
    uVar9 = uVar9 + 1;
    uVar13 = (ulonglong)uVar16;
    FUN_1802a82f0(param_3,param_4,uVar13);
    iVar15 = 4;
  }
  uVar5 = FUN_18019de04(param_1,param_3,param_4,uVar17,uVar9,CONCAT44(uVar12,iVar15),puVar6,
                        unaff_RBX,unaff_RBP,unaff_RDI,unaff_RSI);
  **(undefined8 **)(param_1 + 8) = uVar5;
  if ((*puVar6 & 0xf000) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_18019ddd0:
  if ((uVar2 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return param_4 + uVar13;
}

