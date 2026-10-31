/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10049de0 */

/* WARNING: Type propagation algorithm not settling */

char ******
FUN_10049de0(char ******param_1,undefined4 param_2,char ******param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char cVar9;
  undefined4 unaff_EBX;
  undefined3 uVar12;
  char *pcVar10;
  uint uVar11;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  char *******pppppppcVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  char *******local_65c;
  char *******local_658;
  char ******local_654;
  int local_650;
  int local_64c;
  char *******local_648;
  undefined4 local_641;
  undefined1 auStack_63d [1381];
  char *******local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *******local_c0;
  undefined1 *puStack_bc;
  byte *pbStack_b8;
  char ******ppppppcStack_b4;
  int local_b0;
  undefined4 *puStack_ac;
  char **local_a8;
  char **local_a4;
  char *******local_a0;
  int *local_9c;
  char **local_98;
  undefined8 *local_94;
  undefined1 *local_90;
  char **local_8c;
  undefined4 *local_88;
  int local_84;
  char *local_80;
  char *****local_7c;
  int *local_78;
  char *local_74;
  char *local_70;
  int local_6c;
  int local_68;
  undefined8 local_64;
  char *local_5c;
  char *local_58;
  char ******local_54;
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_43;
  undefined1 local_42;
  byte local_41;
  char ******local_40;
  int local_3c;
  int local_38;
  uint local_34;
  char *local_30;
  undefined1 local_29;
  char *local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_65c;
  local_84 = param_5;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a780;
  local_1c = ExceptionList;
  local_48 = 2;
  if (*(byte *)(param_4 + 10) != 0) {
    local_48 = (uint)*(byte *)(param_4 + 10);
  }
  local_43 = (undefined1)local_48;
  local_21 = 'p';
  iVar16 = *(int *)(param_4 + 4);
  local_3c = 4;
  uVar12 = (undefined3)((uint)unaff_EBX >> 8);
  switch(*(undefined1 *)(param_4 + 8)) {
  case 0x41:
    local_34 = 1;
    break;
  case 0x42:
  case 0x43:
  case 0x44:
switchD_10049e52_caseD_62:
    local_3c = 3;
    local_21 = 'e';
    local_34 = 1;
    goto switchD_10049e52_caseD_61;
  case 0x45:
    local_34 = CONCAT31(uVar12,1);
switchD_10049e52_caseD_65:
    if (iVar16 == -1) {
      iVar16 = 6;
    }
    local_3c = 1;
LAB_10049ebe:
    local_21 = 'e';
    break;
  case 0x46:
    local_34 = CONCAT31(uVar12,1);
switchD_10049e52_caseD_66:
    if (iVar16 == -1) {
      iVar16 = 6;
    }
    local_3c = 2;
    goto LAB_10049ebe;
  case 0x47:
    local_34 = CONCAT31(uVar12,1);
switchD_10049e52_caseD_67:
    iVar2 = iVar16 + (uint)(iVar16 == 0);
    bVar18 = iVar16 != -1;
    iVar16 = 6;
    if (bVar18) {
      iVar16 = iVar2;
    }
    local_3c = 3;
    local_21 = 'e';
    cVar9 = '\0';
    goto LAB_10049eda;
  default:
    local_34 = 0;
    switch(*(undefined1 *)(param_4 + 8)) {
    case 0x61:
switchD_10049e52_caseD_61:
      cVar9 = (char)local_34;
      local_34 = 0;
      goto LAB_10049eda;
    default:
      goto switchD_10049e52_caseD_62;
    case 0x65:
      goto switchD_10049e52_caseD_65;
    case 0x66:
      goto switchD_10049e52_caseD_66;
    case 0x67:
      goto switchD_10049e52_caseD_67;
    }
  }
  cVar9 = '\0';
LAB_10049eda:
  local_38 = 0x432;
  if (0x432 < iVar16) {
    local_38 = iVar16;
  }
  local_68 = 0x432;
  if (iVar16 < 0x432) {
    local_68 = iVar16;
  }
  local_65c = (char *******)param_3;
  ExceptionList = &local_1c;
  iVar2 = FUN_10269150();
  local_42 = iVar2 != 0;
  if (NAN((float)param_3)) {
    iVar16 = -(uint)(iVar2 == 0);
    auStack_63d[iVar16 + -1] = 0x6e;
    *(undefined2 *)(auStack_63d + iVar16 + -3) = 0x616e;
    local_64 = CONCAT44(local_64._4_4_,auStack_63d + iVar16);
  }
  else {
    local_658 = (char *******)&local_d8;
    if (iVar16 == -1) {
      if (cVar9 == '\0') {
        local_650 = local_3c;
        local_654 = param_3;
        local_65c = (char *******)&local_641;
        local_64c = 0;
        local_64 = FUN_10010042();
      }
      else {
        local_64c = 0;
        local_650 = 0;
        local_654 = param_3;
        local_65c = (char *******)&local_641;
        local_64 = FUN_10007a59();
      }
    }
    else {
      local_64c = local_68;
      local_650 = local_3c;
      local_654 = param_3;
      local_65c = (char *******)&local_641;
      local_64 = FUN_100102bd();
    }
  }
  local_30 = (char *)&local_641;
  local_40 = (char ******)((char *)local_64 + -(int)local_30);
  if (iVar2 == 0) {
    if ((char)local_48 != '\x02') {
      local_40 = (char ******)((int)local_40 + 1);
    }
  }
  else {
    local_30 = (char *)((int)&local_641 + 1);
  }
  pcVar7 = local_30;
  if ((char)local_34 != '\0') {
    for (; pcVar7 != (char *)local_64; pcVar7 = pcVar7 + 1) {
      if ((byte)(*pcVar7 + 0x9fU) < 0x1a) {
        *pcVar7 = *pcVar7 + -0x20;
      }
    }
    local_21 = local_21 + -0x20;
  }
  local_29 = 0;
  local_4c = 0;
  local_6c = 0;
  local_d8 = (char *******)0x0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0xf00000000;
  local_14 = 0;
  local_34 = (uint)param_3 & 0x7fffffff;
  local_50 = (char *)local_64;
  local_5c = (char *)local_64;
  local_74 = local_30;
  local_70 = (char *)local_64;
  local_28 = (char *)local_64;
  if (0x7f7fffff < local_34) {
    ppppppcStack_b4 = (char ******)&local_54;
    local_54 = local_40;
    local_7c._0_1_ =
         *(char *)(param_4 + 9) == '\0' & *(byte *)(param_4 + 0xd) & local_34 < 0x7f800000;
    local_c0 = (char *******)&local_43;
    puStack_bc = &local_42;
    pbStack_b8 = (byte *)&local_7c;
    local_b0 = param_4;
    puStack_ac = &param_5;
    local_a8 = &local_74;
    local_a4 = &local_70;
    local_a0 = (char *******)&local_d8;
    local_9c = &local_6c;
    local_98 = &local_5c;
    local_94 = &local_64;
    local_90 = &local_29;
    local_8c = &local_50;
    local_88 = &local_4c;
    local_14 = 0;
    if ((byte)local_7c == 0) {
      local_648 = (char *******)&local_c0;
      local_650 = param_4;
      local_654 = local_40;
      local_658 = (char *******)param_2;
      local_65c = (char *******)param_1;
      local_64c = 2;
      FUN_1004a7dd();
    }
    else {
      local_658 = (char *******)param_2;
      local_65c = (char *******)param_1;
      FUN_1004a520();
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
    ExceptionList = local_1c;
    return param_1;
  }
  local_38 = local_38 + -0x432;
  bVar1 = *(byte *)(param_4 + 0xb);
  local_58 = (char *)local_64;
  if (((bVar1 | *(byte *)(param_4 + 0xc)) & 1) == 0) {
    local_48 = 0;
  }
  else {
    pcVar6 = (char *)local_64;
    pcVar7 = (char *)local_64;
    pcVar10 = local_30;
    pcVar17 = (char *)local_64;
    if (local_30 < (char *)local_64) {
      do {
        pcVar7 = pcVar10;
        local_5c = pcVar10;
        if ((*pcVar10 != '.') && (pcVar7 = pcVar6, local_5c = pcVar17, *pcVar10 == local_21)) {
          local_58 = pcVar10;
          local_50 = pcVar10;
        }
        pcVar10 = pcVar10 + 1;
        pcVar6 = pcVar7;
        pcVar17 = local_5c;
      } while (pcVar10 != (char *)local_64);
    }
    local_80 = pcVar7;
    if (local_58 < pcVar7) {
      local_80 = local_58;
    }
    local_48 = 0;
    if ((bVar1 != 0) && (pcVar7 == (char *)local_64)) {
      local_40 = (char ******)((int)local_40 + 1);
      local_29 = 1;
      local_48 = CONCAT31((int3)((uint)local_40 >> 8),1);
    }
    local_70 = local_80;
    local_41 = bVar1;
    if (*(byte *)(param_4 + 0xc) == 1) {
      local_54 = local_40;
      if (local_84 == 0) {
        local_65c = (char *******)0x1;
        local_78 = (int *)FUN_1022bce0();
      }
      else {
        local_78 = *(int **)(local_84 + 4);
        (**(code **)(*local_78 + 4))();
      }
      local_14 = 1;
      local_65c = (char *******)&local_7c;
      piVar3 = (int *)FUN_100470ba();
      local_65c = (char *******)&local_c0;
      (**(code **)(*piVar3 + 0x14))();
      local_14 = 2;
      FUN_10004e60();
      local_c8 = CONCAT44(puStack_ac,local_b0);
      local_d8 = local_c0;
      uStack_d4 = puStack_bc;
      uStack_d0 = pbStack_b8;
      uStack_cc = ppppppcStack_b4;
      local_b0 = 0;
      puStack_ac = (undefined4 *)0xf;
      local_c0 = (char *******)((uint)local_c0 & 0xffffff00);
      local_14 = 0xffffffff;
      FUN_10001fee();
      if (local_78 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*local_78 + 8))();
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
      }
      pppppppcVar13 = (char *******)&local_d8;
      if (0xf < local_c8._4_4_) {
        pppppppcVar13 = local_d8;
      }
      local_6c = 0;
      if ((int)local_c8 != 0) {
        uVar11 = (int)local_80 - (int)local_30;
        uVar8 = (uint)*(char *)pppppppcVar13;
        if (uVar8 < uVar11) {
          local_6c = 0;
          pppppppcVar14 = pppppppcVar13;
          do {
            uVar11 = uVar11 - uVar8;
            local_6c = local_6c + 1;
            pppppppcVar15 = (char *******)((int)pppppppcVar14 + 1);
            if ((char *******)((int)pppppppcVar14 + 1) ==
                (char *******)((int)pppppppcVar13 + (int)local_c8)) {
              pppppppcVar15 = pppppppcVar14;
            }
            uVar8 = (uint)*(char *)pppppppcVar15;
            pppppppcVar14 = pppppppcVar15;
          } while (uVar8 < uVar11);
        }
      }
      local_54 = (char ******)((int)local_40 + local_6c);
                    /* WARNING: Could not recover jumptable at 0x1004a256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_40 = local_54;
      uVar5 = (**(code **)(&UNK_1004a510 + (local_3c + -1) * 4))();
      return (char ******)uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1004a145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_54 = local_40;
  uVar5 = (**(code **)(&UNK_1004a510 + (local_3c + -1) * 4))();
  return (char ******)uVar5;
}

