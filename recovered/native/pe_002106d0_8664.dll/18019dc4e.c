/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019dc4e */

byte * FUN_18019dc4e(int *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined *puVar8;
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
  if (param_3 == (byte *)0x0) {
    SetLastError(0xd);
    return (byte *)0x0;
  }
  pbVar5 = (byte *)(param_1 + 0x10);
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
  }
  puVar7 = (uint *)(&DAT_18044c230 + (ulonglong)*param_3 * 0x10);
  pbVar11 = param_3;
  switch(*param_3) {
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
    return param_3 + 1;
  case 0xf:
switchD_18019dc7b_caseD_f:
    *pbVar5 = *param_3;
    pbVar11 = param_3 + 1;
    param_3 = param_3 + 1;
    puVar7 = (uint *)(&DAT_18044d230 + (ulonglong)*pbVar11 * 0x10);
    pbVar5 = pbVar5 + 1;
    switch(*pbVar11) {
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
      puVar8 = &DAT_18044c010;
      if (*param_1 == 0 && param_1[5] == 0) {
        puVar8 = &DAT_18044c000;
      }
      pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar8);
      return pbVar5;
    }
    break;
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
switchD_18019dc7b_caseD_26:
    *(byte *)(param_1 + 7) = *param_3;
switchD_18019dc7b_caseD_f0:
    *pbVar5 = *param_3;
    pbVar1 = param_3 + 1;
    param_3 = param_3 + 1;
    puVar7 = (uint *)(&DAT_18044c230 + (ulonglong)*pbVar1 * 0x10);
    pbVar5 = pbVar5 + 1;
    pbVar11 = param_3;
    switch(*pbVar1) {
    default:
      break;
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
      goto code_r0x00018019df84;
    case 0xf:
      goto switchD_18019dc7b_caseD_f;
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
    case 100:
    case 0x65:
      goto switchD_18019dc7b_caseD_26;
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
switchD_18019dc7b_caseD_40:
      if ((*param_3 & 8) != 0) {
        param_1[2] = 1;
      }
      goto switchD_18019dc7b_caseD_f0;
    case 0x62:
      goto switchD_18019dc7b_caseD_62;
    case 0x66:
switchD_18019dc7b_caseD_66:
      *param_1 = 1;
      goto switchD_18019dc7b_caseD_f0;
    case 0x67:
switchD_18019dc7b_caseD_67:
      param_1[1] = 1;
      goto switchD_18019dc7b_caseD_f0;
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
      goto switchD_18019dc7b_caseD_70;
    case 0x8f:
      goto switchD_18019dc7b_caseD_8f;
    case 0xc4:
      goto switchD_18019dc7b_caseD_c4;
    case 0xc5:
      goto switchD_18019dc7b_caseD_c5;
    case 199:
      goto switchD_18019dc7b_caseD_c7;
    case 0xd5:
      goto switchD_18019dc7b_caseD_d5;
    case 0xf0:
      goto switchD_18019dc7b_caseD_f0;
    case 0xf2:
switchD_18019dc7b_caseD_f2:
      param_1[5] = 1;
      goto switchD_18019dc7b_caseD_f0;
    case 0xf3:
switchD_18019dc7b_caseD_f3:
      param_1[6] = 1;
      goto switchD_18019dc7b_caseD_f0;
    case 0xf6:
      goto switchD_18019dc7b_caseD_f6;
    case 0xf7:
      goto switchD_18019dc7b_caseD_f7;
    case 0xff:
      goto switchD_18019dc7b_caseD_ff;
    }
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
    goto switchD_18019dc7b_caseD_40;
  case 0x62:
switchD_18019dc7b_caseD_62:
    bVar4 = param_3[2];
    if ((bVar4 & 4) == 0) {
      pbVar5 = (byte *)switchD_18019e2f8::caseD_4();
      return pbVar5;
    }
    bVar2 = param_3[1];
    *(undefined4 *)pbVar5 = *(undefined4 *)param_3;
    param_1[4] = 1;
    param_1[2] = param_1[2] | (uint)(bVar4 >> 7);
    pbVar5 = (byte *)FUN_18019e0d8(param_1,CONCAT71((int7)((ulonglong)puVar7 >> 8),bVar2) &
                                           0xffffffffffffff03,pbVar5 + 4,param_3 + 4,
                                   CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffe8 >> 8),bVar4)
                                   & 0xffffffffffffff03,
                                   CONCAT71((int7)((ulonglong)in_stack_fffffffffffffff0 >> 8),bVar2)
                                   & 0xffffffffffffff04);
    return pbVar5;
  case 0x66:
    goto switchD_18019dc7b_caseD_66;
  case 0x67:
    goto switchD_18019dc7b_caseD_67;
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
switchD_18019dc7b_caseD_70:
    iVar15 = -4;
    bVar4 = param_3[1];
    **(undefined8 **)(param_1 + 8) = param_3 + (longlong)(char)bVar4 + 2;
    if (*param_3 == 0xeb) {
      *pbVar5 = 0xe9;
      iVar15 = -3;
      uVar12 = 3;
      lVar10 = 1;
    }
    else {
      *pbVar5 = 0xf;
      pbVar5[1] = *param_3 & 0xf | 0x80;
      uVar12 = 4;
      lVar10 = 2;
    }
    *(int *)(pbVar5 + lVar10) = (int)(char)bVar4 + iVar15 + ((int)param_3 - (int)pbVar5);
    **(undefined4 **)(param_1 + 10) = uVar12;
    return param_3 + 2;
  case 0x8f:
switchD_18019dc7b_caseD_8f:
    bVar4 = (param_3[1] & 0x1f) - 8;
    if (bVar4 < 3) {
      pbVar5 = (byte *)switchD_18019e2f8::caseD_0
                                 (param_1,&DAT_180327ff0 +
                                          *(int *)(&DAT_180327ff0 + (ulonglong)bVar4 * 4));
      return pbVar5;
    }
    pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0f0);
    return pbVar5;
  case 0xc4:
switchD_18019dc7b_caseD_c4:
    *pbVar5 = *param_3;
    pbVar5[1] = param_3[1];
    bVar4 = param_3[2];
    pbVar5[2] = bVar4;
    param_1[2] = param_1[2] | (uint)(bVar4 >> 7);
    pbVar5 = (byte *)FUN_18019e16e(param_1,CONCAT71((int7)((ulonglong)puVar7 >> 8),param_3[1]) &
                                           0xffffffffffffff1f,pbVar5 + 3,param_3 + 3);
    return pbVar5;
  case 0xc5:
switchD_18019dc7b_caseD_c5:
    *pbVar5 = *param_3;
    pbVar5[1] = param_3[1];
    pbVar5 = (byte *)FUN_18019e16e(param_1,CONCAT71((int7)((ulonglong)puVar7 >> 8),1),pbVar5 + 2,
                                   param_3 + 2);
    return pbVar5;
  case 199:
switchD_18019dc7b_caseD_c7:
    puVar8 = &DAT_18044c0c0;
    if ((~param_3[1] & 0x38) == 0) {
      puVar8 = &DAT_18044c0b0;
    }
    pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar8);
    return pbVar5;
  case 0xd5:
switchD_18019dc7b_caseD_d5:
    bVar4 = pbVar11[1];
    if ((bVar4 & 8) != 0) {
      param_1[2] = 1;
    }
    *pbVar5 = *pbVar11;
    pbVar5[1] = pbVar11[1];
    param_3 = pbVar11 + 2;
    pbVar5 = pbVar5 + 2;
    bVar2 = pbVar11[2];
    lVar10 = (ulonglong)bVar2 * 0x10;
    if (-1 < (char)bVar4) {
      pbVar5 = (byte *)(*(code *)(&switchD_18019dc7b::switchdataD_18044c238)[(ulonglong)bVar2 * 2])
                                 (param_1,&DAT_18044c230 + lVar10,pbVar5,param_3);
      if ((bVar4 == 0) && (*param_3 == 0xa1)) {
        **(undefined8 **)(param_1 + 8) = *(undefined8 *)(pbVar11 + 3);
      }
      return pbVar5;
    }
    puVar7 = (uint *)(&DAT_18044d230 + lVar10);
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
      goto code_r0x00018019df84;
    case 0x78:
      goto switchD_18019e2f8_caseD_78;
    }
    break;
  case 0xf0:
    goto switchD_18019dc7b_caseD_f0;
  case 0xf2:
    goto switchD_18019dc7b_caseD_f2;
  case 0xf3:
    goto switchD_18019dc7b_caseD_f3;
  case 0xf6:
switchD_18019dc7b_caseD_f6:
    puVar8 = &DAT_18044c070;
    if ((param_3[1] & 0x30) == 0) {
      puVar8 = &DAT_18044c060;
    }
    pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar8);
    return pbVar5;
  case 0xf7:
switchD_18019dc7b_caseD_f7:
    puVar8 = &DAT_18044c090;
    if ((param_3[1] & 0x30) == 0) {
      puVar8 = &DAT_18044c080;
    }
    pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,puVar8);
    return pbVar5;
  case 0xff:
switchD_18019dc7b_caseD_ff:
    pbVar5 = (byte *)switchD_18019e2f8::caseD_0(param_1,&DAT_18044c0a0);
    bVar4 = param_3[1];
    if ((bVar4 == 0x25) || (bVar4 == 0x15)) {
      uVar6 = 0xffffffffffffffff;
      if (((*(byte *)(param_1 + 7) & 0xfe) != 100) &&
         ((param_3 = param_3 + (longlong)*(int *)(param_3 + 2) + 6, DAT_18044f000 == 0 ||
          ((DAT_18044f008 <= param_3 && (param_3 < DAT_180404640)))))) {
        uVar6 = *(undefined8 *)param_3;
      }
    }
    else {
      uVar6 = 0xffffffffffffffff;
      if (((bVar4 & 0x30) != 0x20) && ((bVar4 & 0x30) != 0x10)) {
        return pbVar5;
      }
    }
    **(undefined8 **)(param_1 + 8) = uVar6;
    return pbVar5;
  }
  uVar3 = *puVar7;
  uVar9 = uVar3 >> 8 & 0xf;
  uVar14 = uVar3 & 0xf;
  if ((uVar3 >> 0x11 & 1) == 0) {
    if (param_1[2] == 0) {
      if (param_1[4] == 0 && param_1[3] == 0) {
        iVar15 = *param_1;
        goto LAB_18019dce2;
      }
    }
    else {
      uVar14 = uVar14 + (uVar3 >> 0x11 & 4);
    }
  }
  else {
    iVar15 = param_1[1];
LAB_18019dce2:
    if (iVar15 != 0) {
      uVar14 = uVar3 >> 4 & 0xf;
    }
  }
  uVar17 = uVar14;
  if (uVar9 == 0) {
LAB_18019dd76:
    uVar9 = uVar3 >> 0xc & 0xf;
    uVar13 = (ulonglong)uVar17;
    FUN_1802a82f0(pbVar5,param_3,uVar13);
    if (uVar9 == 0) goto LAB_18019ddd0;
    iVar15 = uVar14 - uVar9;
  }
  else {
    bVar4 = param_3[uVar9];
    bVar2 = (&DAT_18044c130)[bVar4];
    uVar16 = (bVar2 & 0xf) + uVar14;
    uVar17 = uVar16;
    if ((bVar2 & 0x10) != 0) {
      uVar14 = uVar16;
      if ((param_3[(ulonglong)uVar9 + 1] & 7) == 5) {
        if ((bVar4 & 0xc0) == 0x40) {
          uVar14 = uVar16 + 1;
          uVar17 = uVar14;
        }
        else if ((bVar4 & 0xc0) == 0) {
          uVar14 = uVar16 + 4;
          uVar17 = uVar14;
        }
        else {
          uVar14 = uVar16 + 4;
          uVar17 = uVar16 + 4;
          if (-0x41 < (char)bVar4) {
            uVar14 = uVar16;
            uVar17 = uVar16;
          }
        }
      }
      goto LAB_18019dd76;
    }
    if ((bVar2 & 0x20) == 0) goto LAB_18019dd76;
    uVar9 = uVar9 + 1;
    uVar13 = (ulonglong)uVar16;
    FUN_1802a82f0(pbVar5,param_3,uVar13);
    iVar15 = 4;
  }
  uVar6 = FUN_18019de04(param_1,pbVar5,param_3,uVar17,uVar9,CONCAT44(uVar12,iVar15),puVar7,unaff_RBX
                        ,unaff_RBP,unaff_RDI,unaff_RSI);
  **(undefined8 **)(param_1 + 8) = uVar6;
  if ((*puVar7 & 0xf000) == 0) {
    **(undefined8 **)(param_1 + 8) = 0;
  }
LAB_18019ddd0:
  if ((uVar3 >> 0x12 & 1) != 0) {
    **(int **)(param_1 + 10) = -**(int **)(param_1 + 10);
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    **(undefined8 **)(param_1 + 8) = 0xffffffffffffffff;
  }
  return param_3 + uVar13;
}

