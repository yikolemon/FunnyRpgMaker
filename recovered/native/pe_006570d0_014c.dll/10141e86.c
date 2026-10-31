/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141e86 */

void __fastcall FUN_10141e86(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  int *local_68;
  int local_64;
  float local_60;
  int local_5c;
  float *local_58;
  int local_54;
  float local_50;
  float local_4c;
  float *local_48;
  float local_44;
  int local_30;
  float local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_68;
  local_64 = 1;
LAB_10141eab:
  local_68 = param_2;
  switch(param_3) {
  case 0x200000:
    goto switchD_10141eb6_caseD_200000;
  case 0x200001:
    if (param_2[1] == param_2[2]) {
      iVar8 = FUN_101518f3();
      *param_2 = iVar8;
    }
    else {
      FUN_101518c6();
    }
    FUN_10142d8c();
    goto LAB_101423e7;
  case 0x200002:
  case 0x20000e:
switchD_10141eb6_caseD_200002:
    pfVar7 = (float *)(param_3 & 0x400000);
    if ((param_3 & 0xffbfffff) == 0x20000e) {
      local_64 = param_2[4];
    }
    else if (*(char *)((int)param_2 + 0x17) != '\0') {
      param_3 = (uint)pfVar7 | 0x200000;
      goto LAB_10141eab;
    }
    local_58 = pfVar7;
    if (pfVar7 == (float *)0x0) {
      if (param_2[1] != param_2[2]) {
        FUN_10151889();
      }
    }
    else {
      FUN_10142d47();
    }
    FUN_10142d8c();
    FUN_10151981(*param_2,*(undefined1 *)((int)param_2 + 0x17));
    if (local_64 < 1) goto switchD_10141ecc_caseD_60000a;
    local_48 = (float *)(param_2 + 7);
    iVar8 = 0;
    goto LAB_10141fa5;
  case 0x200003:
  case 0x20000f:
switchD_10141eb6_caseD_200003:
    uVar9 = param_3 & 0x400000;
    if ((param_3 & 0xffbfffff) == 0x20000f) {
      local_64 = param_2[4];
LAB_10141f42:
      if (uVar9 == 0) {
        if (param_2[1] != param_2[2]) {
          FUN_101518c6();
        }
      }
      else {
        FUN_10142d47();
      }
      FUN_10142d8c();
      FUN_10151981(*param_2,*(undefined1 *)((int)param_2 + 0x17));
      if (local_64 < 1) goto switchD_10141ecc_caseD_60000a;
      local_58 = (float *)(local_68 + 7);
      pfVar7 = local_2c;
      if (*(char *)((int)local_68 + 0x16) != '\0') {
        pfVar7 = local_58;
      }
      iVar5 = 0;
      iVar8 = local_20;
      goto LAB_1014211c;
    }
    if (*(char *)((int)param_2 + 0x17) == '\0') goto LAB_10141f42;
    param_3 = uVar9 | 0x200001;
    goto LAB_10141eab;
  case 0x200004:
    FUN_10142d8c();
    FUN_10151889();
    iVar8 = FUN_10151c4b(*param_2);
    goto LAB_101423e5;
  case 0x200005:
    FUN_10142d8c();
    FUN_101518c6();
    iVar8 = FUN_10151dc5(*param_2);
    goto LAB_101423e5;
  case 0x200006:
    iVar8 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    goto LAB_101423e5;
  case 0x200007:
    iVar8 = FUN_10151d91();
    *param_2 = iVar8;
    param_2[2] = 0;
    param_2[1] = 0;
    goto LAB_101423e7;
  case 0x200008:
switchD_10141eb6_caseD_200008:
    if (param_2[1] == param_2[2]) {
      iVar8 = FUN_10151d91();
      if (*param_2 < iVar8) {
        iVar8 = FUN_101518f3();
        FUN_10151d95(*param_2,iVar8 - *param_2);
      }
      goto LAB_101423e7;
    }
    break;
  case 0x200009:
switchD_10141eb6_caseD_200009:
    if (param_2[1] == param_2[2]) {
      FUN_10142d8c();
      if (0 < *param_2) {
        iVar8 = FUN_101518a7();
        FUN_10151d95(iVar8,*param_2 - iVar8);
        *param_2 = iVar8;
      }
      goto LAB_101423e7;
    }
    break;
  case 0x20000a:
    FUN_101515fc();
    goto LAB_101423e7;
  case 0x20000b:
    FUN_10151777();
    goto LAB_101423e7;
  case 0x20000c:
    if (param_2[1] == param_2[2]) {
      iVar8 = FUN_10151944();
      goto LAB_10142456;
    }
    if (DAT_10388d00 == (local_14 ^ (uint)&local_68)) {
      FUN_10151889();
      return;
    }
    goto LAB_101424d9;
  case 0x20000d:
    if (param_2[1] == param_2[2]) {
      iVar8 = FUN_10151970();
LAB_10142456:
      *param_2 = iVar8;
LAB_10142458:
      if (DAT_10388d00 == (local_14 ^ (uint)&local_68)) {
        FUN_10142d8c();
        return;
      }
    }
    else if (DAT_10388d00 == (local_14 ^ (uint)&local_68)) {
      FUN_101518c6();
      return;
    }
    goto LAB_101424d9;
  default:
    switch(param_3) {
    case 0x600000:
      FUN_10142d8c();
      FUN_10142d47();
      iVar8 = param_2[2];
      if (iVar8 < 1) goto LAB_101423e5;
      iVar8 = FUN_101518a7();
      break;
    case 0x600001:
      FUN_10142d47();
      iVar8 = FUN_101518f3();
      param_2[2] = iVar8;
      FUN_10142d8c();
      iVar8 = param_2[2];
      goto LAB_101423e5;
    case 0x600002:
    case 0x60000e:
      goto switchD_10141eb6_caseD_200002;
    case 0x600003:
    case 0x60000f:
      goto switchD_10141eb6_caseD_200003;
    case 0x600004:
      FUN_10142d8c();
      FUN_10142d47();
      iVar8 = FUN_10151c4b(*param_2);
      goto LAB_101422d8;
    case 0x600005:
      FUN_10142d8c();
      FUN_10142d47();
      iVar8 = FUN_10151dc5(*param_2);
LAB_101422d8:
      *param_2 = iVar8;
      param_2[2] = iVar8;
      goto LAB_101423e7;
    case 0x600006:
      FUN_10142d47();
      iVar8 = 0;
      break;
    case 0x600007:
      FUN_10142d47();
      iVar8 = FUN_10151d91();
      break;
    case 0x600008:
      goto switchD_10141eb6_caseD_200008;
    case 0x600009:
      goto switchD_10141eb6_caseD_200009;
    default:
      goto switchD_10141ecc_caseD_60000a;
    case 0x60000c:
      if (param_2[1] == param_2[2]) {
        FUN_10142d47();
      }
      iVar8 = FUN_10151944();
      goto LAB_101422fd;
    case 0x60000d:
      if (param_2[1] == param_2[2]) {
        FUN_10142d47();
      }
      iVar8 = FUN_10151970();
LAB_101422fd:
      *param_2 = iVar8;
      param_2[2] = iVar8;
      goto LAB_10142458;
    }
    param_2[2] = iVar8;
    goto LAB_101423e5;
  }
  FUN_10151d3f();
  goto LAB_101423e7;
LAB_1014211c:
  do {
    if (local_1c == 0) break;
    local_60 = *pfVar7;
    iVar8 = iVar8 + local_1c;
    *local_68 = iVar8;
    local_54 = iVar5;
    FUN_10151b49(iVar8);
    local_5c = local_30;
    if (0 < local_30) {
      iVar5 = 0;
      fVar10 = local_44;
      do {
        local_4c = fVar10;
        FUN_10151bcb(iVar5);
        local_50 = fVar10;
        iVar6 = FUN_101518f3();
        if (((local_50 == DAT_102b8a50) && (!NAN(local_50) && !NAN(DAT_102b8a50))) ||
           (fVar10 = local_4c + local_50, local_60 < fVar10)) break;
        iVar5 = (iVar5 + iVar6) - *local_68;
        *local_68 = iVar6;
      } while (iVar5 < local_5c);
    }
    piVar1 = local_68;
    FUN_10142d8c();
    if (*piVar1 == iVar8) {
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    *(undefined1 *)((int)local_68 + 0x16) = 1;
    local_68[7] = (int)local_60;
    if (uVar9 != 0) {
      local_68[2] = *local_68;
    }
    iVar5 = local_54 + 1;
    local_1c = local_5c;
    pfVar7 = local_58;
  } while (iVar5 != local_64);
  goto switchD_10141ecc_caseD_60000a;
switchD_10141eb6_caseD_200000:
  if (param_2[1] == param_2[2]) {
    if (0 < *param_2) {
      iVar8 = FUN_101518a7();
LAB_101423e5:
      *param_2 = iVar8;
    }
  }
  else {
    FUN_10151889();
  }
LAB_101423e7:
  *(undefined1 *)((int)param_2 + 0x16) = 0;
  goto switchD_10141ecc_caseD_60000a;
LAB_10141fa5:
  do {
    iVar5 = local_18;
    pfVar7 = local_48;
    if (*(char *)((int)param_2 + 0x16) == '\0') {
      pfVar7 = local_2c;
    }
    if (iVar5 == local_20) break;
    local_60 = *pfVar7;
    *param_2 = iVar5;
    local_5c = iVar8;
    local_54 = local_20;
    FUN_10151b49(iVar5);
    iVar8 = local_30;
    if (0 < local_30) {
      iVar6 = 0;
      fVar10 = local_44;
      do {
        local_4c = fVar10;
        FUN_10151bcb(iVar6);
        local_50 = fVar10;
        iVar4 = FUN_101518f3();
        if (((local_50 == DAT_102b8a50) && (!NAN(local_50) && !NAN(DAT_102b8a50))) ||
           (fVar10 = local_4c + local_50, local_60 < fVar10)) break;
        iVar6 = (iVar6 + iVar4) - *local_68;
        *local_68 = iVar4;
      } while (iVar6 < iVar8);
    }
    piVar1 = local_68;
    FUN_10142d8c();
    uVar2 = 1;
    if (*piVar1 == local_54) {
LAB_1014205f:
      *(undefined1 *)(param_1 + 0x5a) = uVar2;
    }
    else if (*piVar1 == iVar5) {
      uVar2 = 0;
      goto LAB_1014205f;
    }
    *(undefined1 *)((int)piVar1 + 0x16) = 1;
    piVar1[7] = (int)local_60;
    if (local_58 != (float *)0x0) {
      piVar1[2] = *piVar1;
    }
    iVar8 = 1;
    if (1 < iVar5) {
      iVar8 = iVar5;
    }
    iVar8 = iVar8 + -1;
    do {
      iVar6 = iVar8;
      if (iVar6 < 1) break;
      iVar8 = FUN_101518a7();
      cVar3 = FUN_10142d40();
    } while (cVar3 != '\n');
    param_2 = local_68;
    local_18 = FUN_10151c4b(iVar6);
    iVar8 = local_5c + 1;
    local_20 = iVar5;
  } while (iVar8 != local_64);
switchD_10141ecc_caseD_60000a:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_68)) {
    return;
  }
LAB_101424d9:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

