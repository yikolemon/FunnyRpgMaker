/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bf534 */

void FUN_1400bf534(longlong param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [36];
  int local_c4;
  float local_c0 [5];
  int local_ac;
  float local_a8 [3];
  int local_9c;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
LAB_1400bf586:
  switch(param_3) {
  case 0x200000:
    goto switchD_1400bf599_caseD_200000;
  case 0x200001:
    if (param_2[1] == param_2[2]) {
      iVar7 = FUN_1400ce967(param_1,*param_2);
      *param_2 = iVar7;
    }
    else {
      FUN_1400ce92d(param_1,param_2);
    }
    FUN_1400c0656(param_1,param_2);
    goto LAB_1400bfad2;
  case 0x200002:
  case 0x20000e:
switchD_1400bf599_caseD_200002:
    if ((param_3 & 0xffbfffff) == 0x20000e) {
      local_c4 = param_2[4];
    }
    else {
      if (*(char *)((longlong)param_2 + 0x17) != '\0') {
        param_3 = param_3 & 0x400000 | 0x200000;
        goto LAB_1400bf586;
      }
      local_c4 = 1;
    }
    if ((param_3 & 0x400000) == 0) {
      if (param_2[1] != param_2[2]) {
        FUN_1400ce8dc(param_2);
      }
    }
    else {
      FUN_1400c0606(param_2);
    }
    FUN_1400c0656(param_1,param_2);
    FUN_1400cea19(local_a8,param_1,*param_2,*(undefined1 *)((longlong)param_2 + 0x17));
    fVar2 = DAT_1401c86a4;
    if (local_c4 < 1) goto switchD_1400bf5b2_caseD_60000a;
    iVar11 = 0;
    iVar7 = local_9c;
    iVar9 = local_94;
    goto LAB_1400bf7b0;
  case 0x200003:
  case 0x20000f:
switchD_1400bf599_caseD_200003:
    if ((param_3 & 0xffbfffff) == 0x20000f) {
      local_c4 = param_2[4];
LAB_1400bf630:
      if ((param_3 & 0x400000) == 0) {
        if (param_2[1] != param_2[2]) {
          FUN_1400ce92d(param_1,param_2);
        }
      }
      else {
        FUN_1400c0606(param_2);
      }
      FUN_1400c0656(param_1,param_2);
      FUN_1400cea19(local_a8,param_1,*param_2,*(undefined1 *)((longlong)param_2 + 0x17));
      fVar2 = DAT_1401c86a4;
      if (local_c4 < 1) goto switchD_1400bf5b2_caseD_60000a;
      pfVar8 = local_a8;
      if (*(char *)((longlong)param_2 + 0x16) != '\0') {
        pfVar8 = (float *)(param_2 + 7);
      }
      iVar11 = 0;
      iVar9 = local_9c;
      iVar7 = local_98;
      goto LAB_1400bf6a0;
    }
    if (*(char *)((longlong)param_2 + 0x17) == '\0') {
      local_c4 = 1;
      goto LAB_1400bf630;
    }
    param_3 = param_3 & 0x400000 | 0x200001;
    goto LAB_1400bf586;
  case 0x200004:
    FUN_1400c0656(param_1,param_2);
    FUN_1400ce8dc(param_2);
    iVar7 = FUN_1400ced3a(param_1,param_2,*param_2);
    goto LAB_1400bfad0;
  case 0x200005:
    FUN_1400c0656(param_1,param_2);
    FUN_1400ce92d(param_1,param_2);
    iVar7 = FUN_1400ceec6(param_1,param_2,*param_2);
    goto LAB_1400bfad0;
  case 0x200006:
    param_2[2] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    goto LAB_1400bfad2;
  case 0x200007:
    iVar7 = FUN_1400cee8d(param_1);
    *param_2 = iVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    goto LAB_1400bfad2;
  case 0x200008:
switchD_1400bf599_caseD_200008:
    if (param_2[1] == param_2[2]) {
      iVar7 = FUN_1400cee8d(param_1);
      if (*param_2 < iVar7) {
        iVar7 = FUN_1400ce967(param_1);
        FUN_1400cee91(param_1,param_2,*param_2,iVar7 - *param_2);
      }
      goto LAB_1400bfad2;
    }
    break;
  case 0x200009:
switchD_1400bf599_caseD_200009:
    if (param_2[1] == param_2[2]) {
      FUN_1400c0656(param_1,param_2);
      if (0 < *param_2) {
        iVar7 = FUN_1400ce903(param_1);
        FUN_1400cee91(param_1,param_2,iVar7,*param_2 - iVar7);
        *param_2 = iVar7;
      }
      goto LAB_1400bfad2;
    }
    break;
  case 0x20000a:
    FUN_1400ce625(param_1,param_2);
    goto LAB_1400bfad2;
  case 0x20000b:
    FUN_1400ce7a9(param_1,param_2);
    goto LAB_1400bfad2;
  case 0x20000c:
    if (param_2[1] == param_2[2]) {
      iVar7 = FUN_1400ce9cd(param_1,*param_2);
      goto LAB_1400bfb86;
    }
    if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_e8)) {
      FUN_1400ce8dc(param_2);
      return;
    }
    goto LAB_1400bfc9f;
  case 0x20000d:
    if (param_2[1] == param_2[2]) {
      iVar7 = FUN_1400cea04(param_1,*param_2);
LAB_1400bfb86:
      *param_2 = iVar7;
LAB_1400bfb88:
      if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_e8)) {
        FUN_1400c0656(param_1,param_2);
        return;
      }
    }
    else if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_e8)) {
      FUN_1400ce92d(param_1,param_2);
      return;
    }
    goto LAB_1400bfc9f;
  default:
    switch(param_3) {
    case 0x600000:
      FUN_1400c0656(param_1,param_2);
      FUN_1400c0606(param_2);
      iVar7 = param_2[2];
      if (iVar7 < 1) goto LAB_1400bfad0;
      iVar7 = FUN_1400ce903(param_1,iVar7);
      break;
    case 0x600001:
      FUN_1400c0606(param_2);
      iVar7 = FUN_1400ce967(param_1,param_2[2]);
      param_2[2] = iVar7;
      FUN_1400c0656(param_1,param_2);
      iVar7 = param_2[2];
      goto LAB_1400bfad0;
    case 0x600002:
    case 0x60000e:
      goto switchD_1400bf599_caseD_200002;
    case 0x600003:
    case 0x60000f:
      goto switchD_1400bf599_caseD_200003;
    case 0x600004:
      FUN_1400c0656(param_1,param_2);
      FUN_1400c0606(param_2);
      iVar7 = FUN_1400ced3a(param_1,param_2,*param_2);
      goto LAB_1400bf9a4;
    case 0x600005:
      FUN_1400c0656(param_1,param_2);
      FUN_1400c0606(param_2);
      iVar7 = FUN_1400ceec6(param_1,param_2,*param_2);
LAB_1400bf9a4:
      *param_2 = iVar7;
      param_2[2] = iVar7;
      goto LAB_1400bfad2;
    case 0x600006:
      FUN_1400c0606(param_2);
      iVar7 = 0;
      break;
    case 0x600007:
      FUN_1400c0606(param_2);
      iVar7 = FUN_1400cee8d(param_1);
      break;
    case 0x600008:
      goto switchD_1400bf599_caseD_200008;
    case 0x600009:
      goto switchD_1400bf599_caseD_200009;
    default:
      goto switchD_1400bf5b2_caseD_60000a;
    case 0x60000c:
      if (param_2[1] == param_2[2]) {
        FUN_1400c0606(param_2);
      }
      iVar7 = FUN_1400ce9cd(param_1,*param_2);
      goto LAB_1400bf9c8;
    case 0x60000d:
      if (param_2[1] == param_2[2]) {
        FUN_1400c0606(param_2);
      }
      iVar7 = FUN_1400cea04(param_1,*param_2);
LAB_1400bf9c8:
      *param_2 = iVar7;
      param_2[2] = iVar7;
      goto LAB_1400bfb88;
    }
    param_2[2] = iVar7;
    goto LAB_1400bfad0;
  }
  FUN_1400cee31(param_1,param_2);
  goto LAB_1400bfad2;
LAB_1400bf6a0:
  do {
    if (iVar7 == 0) break;
    fVar1 = *pfVar8;
    iVar9 = iVar9 + iVar7;
    *param_2 = iVar9;
    FUN_1400cebfe(local_c0,param_1,iVar9);
    iVar7 = local_ac;
    if (0 < local_ac) {
      iVar10 = 0;
      fVar13 = local_c0[0];
      do {
        fVar12 = (float)FUN_1400ceca9(param_1,iVar9,iVar10);
        iVar5 = FUN_1400ce967(param_1,*param_2);
        if (((fVar12 == fVar2) && (!NAN(fVar12) && !NAN(fVar2))) ||
           (fVar13 = fVar13 + fVar12, fVar1 < fVar13)) break;
        iVar10 = (iVar10 + iVar5) - *param_2;
        *param_2 = iVar5;
      } while (iVar10 < iVar7);
    }
    FUN_1400c0656(param_1,param_2);
    if (*param_2 == iVar9) {
      *(undefined1 *)(param_1 + 0x76) = 0;
    }
    *(undefined1 *)((longlong)param_2 + 0x16) = 1;
    param_2[7] = (int)fVar1;
    if ((param_3 & 0x400000) != 0) {
      param_2[2] = *param_2;
    }
    iVar11 = iVar11 + 1;
    pfVar8 = (float *)(param_2 + 7);
  } while (iVar11 != local_c4);
  goto switchD_1400bf5b2_caseD_60000a;
switchD_1400bf599_caseD_200000:
  if (param_2[1] == param_2[2]) {
    if (0 < *param_2) {
      iVar7 = FUN_1400ce903(param_1);
LAB_1400bfad0:
      *param_2 = iVar7;
    }
  }
  else {
    FUN_1400ce8dc(param_2);
  }
LAB_1400bfad2:
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  goto switchD_1400bf5b2_caseD_60000a;
LAB_1400bf7b0:
  do {
    pfVar8 = (float *)(param_2 + 7);
    if (*(char *)((longlong)param_2 + 0x16) == '\0') {
      pfVar8 = local_a8;
    }
    if (iVar9 == iVar7) break;
    fVar1 = *pfVar8;
    *param_2 = iVar9;
    FUN_1400cebfe(local_c0,param_1,iVar9);
    iVar10 = local_ac;
    if (0 < local_ac) {
      iVar5 = 0;
      fVar13 = local_c0[0];
      do {
        fVar12 = (float)FUN_1400ceca9(param_1,iVar9,iVar5);
        iVar6 = FUN_1400ce967(param_1,*param_2);
        if (((fVar12 == fVar2) && (!NAN(fVar12) && !NAN(fVar2))) ||
           (fVar13 = fVar13 + fVar12, fVar1 < fVar13)) break;
        iVar5 = (iVar5 + iVar6) - *param_2;
        *param_2 = iVar6;
      } while (iVar5 < iVar10);
    }
    FUN_1400c0656(param_1,param_2);
    uVar3 = 1;
    if (*param_2 == iVar7) {
LAB_1400bf848:
      *(undefined1 *)(param_1 + 0x76) = uVar3;
    }
    else if (*param_2 == iVar9) {
      uVar3 = 0;
      goto LAB_1400bf848;
    }
    *(undefined1 *)((longlong)param_2 + 0x16) = 1;
    param_2[7] = (int)fVar1;
    if ((param_3 & 0x400000) != 0) {
      param_2[2] = *param_2;
    }
    iVar7 = 1;
    if (1 < iVar9) {
      iVar7 = iVar9;
    }
    iVar7 = iVar7 + -1;
    do {
      iVar10 = iVar7;
      if (iVar10 < 1) break;
      iVar7 = FUN_1400ce903(param_1,iVar10);
      cVar4 = FUN_1400c05fb(param_1,iVar7);
    } while (cVar4 != '\n');
    iVar10 = FUN_1400ced3a(param_1,param_2,iVar10);
    iVar11 = iVar11 + 1;
    iVar7 = iVar9;
    iVar9 = iVar10;
  } while (iVar11 != local_c4);
switchD_1400bf5b2_caseD_60000a:
  if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_e8)) {
    return;
  }
LAB_1400bfc9f:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_90 ^ (ulonglong)auStack_e8);
}

