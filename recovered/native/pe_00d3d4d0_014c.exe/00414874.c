/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00414874 */

undefined4 * __cdecl
FUN_00414874(undefined4 *param_1,undefined4 *param_2,float param_3,int *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  undefined4 unaff_EBX;
  undefined3 uVar12;
  char *pcVar10;
  uint uVar11;
  int *******pppppppiVar13;
  int *******pppppppiVar14;
  int *******pppppppiVar15;
  size_t sVar16;
  char *pcVar17;
  bool bVar18;
  undefined4 local_641;
  char acStack_63d [1381];
  int ******local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int ******local_c0;
  undefined1 *puStack_bc;
  byte *pbStack_b8;
  int *piStack_b4;
  int *local_b0;
  int *piStack_ac;
  char **local_a8;
  char **local_a4;
  int ******local_a0;
  int *local_9c;
  char **local_98;
  undefined8 *local_94;
  undefined1 *local_90;
  char **local_8c;
  undefined4 *local_88;
  int local_84;
  char *local_80;
  byte local_7c [4];
  int *local_78;
  char *local_74;
  char *local_70;
  int local_6c;
  size_t local_68;
  undefined8 local_64;
  char *local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_43;
  undefined1 local_42;
  byte local_41;
  int local_40;
  int local_3c;
  size_t local_38;
  float local_34;
  char *local_30;
  undefined1 local_29;
  char *local_28;
  char local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = &stack0xfffff9a4;
  local_84 = param_5;
  local_14 = 0xffffffff;
  local_18 = &LAB_004182c0;
  local_1c = ExceptionList;
  local_48 = 2;
  if (*(byte *)((int)param_4 + 10) != 0) {
    local_48 = (uint)*(byte *)((int)param_4 + 10);
  }
  local_43 = (undefined1)local_48;
  local_21 = 'p';
  sVar16 = param_4[1];
  local_3c = 4;
  uVar12 = (undefined3)((uint)unaff_EBX >> 8);
  switch((char)param_4[2]) {
  case 'A':
    local_34 = 1.4013e-45;
    break;
  case 'B':
  case 'C':
  case 'D':
switchD_004148e6_caseD_62:
    local_3c = 3;
    local_21 = 'e';
    local_34 = 1.4013e-45;
    goto switchD_004148e6_caseD_61;
  case 'E':
    local_34 = (float)CONCAT31(uVar12,1);
switchD_004148e6_caseD_65:
    if (sVar16 == 0xffffffff) {
      sVar16 = 6;
    }
    local_3c = 1;
LAB_00414952:
    local_21 = 'e';
    break;
  case 'F':
    local_34 = (float)CONCAT31(uVar12,1);
switchD_004148e6_caseD_66:
    if (sVar16 == 0xffffffff) {
      sVar16 = 6;
    }
    local_3c = 2;
    goto LAB_00414952;
  case 'G':
    local_34 = (float)CONCAT31(uVar12,1);
switchD_004148e6_caseD_67:
    sVar3 = sVar16 + (sVar16 == 0);
    bVar18 = sVar16 != 0xffffffff;
    sVar16 = 6;
    if (bVar18) {
      sVar16 = sVar3;
    }
    local_3c = 3;
    local_21 = 'e';
    cVar9 = '\0';
    goto LAB_0041496e;
  default:
    local_34 = 0.0;
    switch((char)param_4[2]) {
    case 'a':
switchD_004148e6_caseD_61:
      cVar9 = SUB41(local_34,0);
      local_34 = 0.0;
      goto LAB_0041496e;
    default:
      goto switchD_004148e6_caseD_62;
    case 'e':
      goto switchD_004148e6_caseD_65;
    case 'f':
      goto switchD_004148e6_caseD_66;
    case 'g':
      goto switchD_004148e6_caseD_67;
    }
  }
  cVar9 = '\0';
LAB_0041496e:
  local_38 = 0x432;
  if (0x432 < (int)sVar16) {
    local_38 = sVar16;
  }
  local_68 = 0x432;
  if ((int)sVar16 < 0x432) {
    local_68 = sVar16;
  }
  ExceptionList = &local_1c;
  uVar4 = FUN_0048f7c0((uint)param_3);
  local_42 = uVar4 != 0;
  if (NAN(param_3)) {
    iVar2 = -(uint)(uVar4 == 0);
    acStack_63d[iVar2 + -1] = 'n';
    (acStack_63d + iVar2 + -3)[0] = 'n';
    (acStack_63d + iVar2 + -3)[1] = 'a';
    local_28 = acStack_63d + iVar2;
    local_64 = CONCAT44(local_64._4_4_,local_28);
  }
  else if (sVar16 == 0xffffffff) {
    if (cVar9 == '\0') {
      local_64 = FUN_0041536a(&local_641,(uint *)&local_d8,(uint)param_3,local_3c);
      local_28 = (char *)local_64;
    }
    else {
      local_64 = FUN_0040d2fe(&local_641,(uint *)&local_d8,(uint)param_3);
      local_28 = (char *)local_64;
    }
  }
  else {
    local_64 = FUN_004155e5(&local_641,(uint *)&local_d8,param_3,local_3c,local_68);
    local_28 = (char *)local_64;
  }
  local_30 = (char *)&local_641;
  local_40 = (int)local_28 - (int)local_30;
  if (uVar4 == 0) {
    if ((char)local_48 != '\x02') {
      local_40 = local_40 + 1;
    }
  }
  else {
    local_30 = (char *)((int)&local_641 + 1);
  }
  pcVar8 = local_30;
  if (local_34._0_1_ != '\0') {
    for (; pcVar8 != local_28; pcVar8 = pcVar8 + 1) {
      if ((byte)(*pcVar8 + 0x9fU) < 0x1a) {
        *pcVar8 = *pcVar8 + -0x20;
      }
    }
    local_21 = local_21 + -0x20;
  }
  local_29 = 0;
  local_4c = 0;
  local_6c = 0;
  local_d8 = (int ******)0x0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0xf00000000;
  local_14 = 0;
  local_34 = ABS(param_3);
  local_50 = local_28;
  local_5c = local_28;
  local_74 = local_30;
  local_70 = local_28;
  if (0x7f7fffff < (uint)local_34) {
    piStack_b4 = &local_54;
    local_54 = local_40;
    local_7c[0] = *(char *)((int)param_4 + 9) == '\0' & *(byte *)((int)param_4 + 0xd) &
                  (uint)local_34 < 0x7f800000;
    local_c0 = (int ******)&local_43;
    puStack_bc = &local_42;
    pbStack_b8 = local_7c;
    local_b0 = param_4;
    piStack_ac = &param_5;
    local_a8 = &local_74;
    local_a4 = &local_70;
    local_a0 = (int ******)&local_d8;
    local_9c = &local_6c;
    local_98 = &local_5c;
    local_94 = &local_64;
    local_90 = &local_29;
    local_8c = &local_50;
    local_88 = &local_4c;
    local_14 = 0;
    if (local_7c[0] == 0) {
      FUN_00415271(param_1,param_2,local_40,param_4,'\x02',&local_c0);
    }
    else {
      FUN_00414fb4(&local_c0,param_1,param_2);
    }
    local_14 = 0xffffffff;
    FUN_0040230a((int *)&local_d8);
    ExceptionList = local_1c;
    return param_1;
  }
  local_38 = local_38 - 0x432;
  bVar1 = *(byte *)((int)param_4 + 0xb);
  local_58 = local_28;
  if (((bVar1 | *(byte *)(param_4 + 3)) & 1) == 0) {
    local_48 = 0;
  }
  else {
    pcVar7 = local_28;
    pcVar8 = local_28;
    pcVar10 = local_30;
    pcVar17 = local_28;
    if (local_30 < local_28) {
      do {
        pcVar8 = pcVar10;
        local_5c = pcVar10;
        if ((*pcVar10 != '.') && (pcVar8 = pcVar7, local_5c = pcVar17, *pcVar10 == local_21)) {
          local_58 = pcVar10;
          local_50 = pcVar10;
        }
        pcVar10 = pcVar10 + 1;
        pcVar7 = pcVar8;
        pcVar17 = local_5c;
      } while (pcVar10 != local_28);
    }
    local_80 = pcVar8;
    if (local_58 < pcVar8) {
      local_80 = local_58;
    }
    local_48 = 0;
    if ((bVar1 != 0) && (pcVar8 == local_28)) {
      local_40 = local_40 + 1;
      local_29 = 1;
      local_48 = CONCAT31((int3)((uint)local_40 >> 8),1);
    }
    local_70 = local_80;
    local_41 = bVar1;
    if (*(byte *)(param_4 + 3) == 1) {
      local_70 = local_80;
      local_54 = local_40;
      if (local_84 == 0) {
        local_78 = FUN_0047f650('\x01');
      }
      else {
        local_78 = *(int **)(local_84 + 4);
        (**(code **)(*local_78 + 4))();
      }
      local_14 = 1;
      piVar5 = FUN_0040a572(local_7c);
      (**(code **)(*piVar5 + 0x14))();
      local_14 = 2;
      FUN_00404c20((int *)&local_d8);
      local_c8 = CONCAT44(piStack_ac,local_b0);
      local_d8 = local_c0;
      uStack_d4 = puStack_bc;
      uStack_d0 = pbStack_b8;
      uStack_cc = piStack_b4;
      local_b0 = (int *)0x0;
      piStack_ac = (int *)0xf;
      local_c0 = (int ******)((uint)local_c0 & 0xffffff00);
      local_14 = 0xffffffff;
      FUN_0040230a((int *)&local_c0);
      if ((local_78 != (int *)0x0) &&
         (puVar6 = (undefined4 *)(**(code **)(*local_78 + 8))(), puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      pppppppiVar13 = &local_d8;
      if (0xf < local_c8._4_4_) {
        pppppppiVar13 = (int *******)local_d8;
      }
      local_6c = 0;
      if ((int)local_c8 != 0) {
        uVar11 = (int)local_80 - (int)local_30;
        uVar4 = (uint)*(char *)pppppppiVar13;
        if (uVar4 < uVar11) {
          local_6c = 0;
          pppppppiVar14 = pppppppiVar13;
          do {
            uVar11 = uVar11 - uVar4;
            local_6c = local_6c + 1;
            pppppppiVar15 = (int *******)((int)pppppppiVar14 + 1);
            if ((int *******)((int)pppppppiVar14 + 1) ==
                (int *******)((int)local_c8 + (int)pppppppiVar13)) {
              pppppppiVar15 = pppppppiVar14;
            }
            uVar4 = (uint)*(char *)pppppppiVar15;
            pppppppiVar14 = pppppppiVar15;
          } while (uVar4 < uVar11);
        }
      }
      local_54 = local_40 + local_6c;
                    /* WARNING: Could not recover jumptable at 0x00414cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_40 = local_54;
      puVar6 = (undefined4 *)(**(code **)(&UNK_00414fa4 + (local_3c + -1) * 4))();
      return puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00414bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  local_54 = local_40;
  puVar6 = (undefined4 *)(**(code **)(&UNK_00414fa4 + (local_3c + -1) * 4))();
  return puVar6;
}

