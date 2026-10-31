/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140015f59 */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_140015f59(undefined8 *param_1,undefined8 *param_2,undefined *param_3,int *param_4,
             longlong param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *******ppppppplVar7;
  longlong *******ppppppplVar8;
  char cVar9;
  longlong *******ppppppplVar10;
  uint uVar11;
  longlong *******ppppppplVar12;
  longlong *******ppppppplVar13;
  char cVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong *******ppppppplVar18;
  longlong *******ppppppplVar19;
  bool bVar20;
  undefined1 local_708 [2];
  undefined1 uStack_706;
  longlong ******apppppplStack_705 [172];
  undefined1 local_19f [15];
  longlong *******local_190;
  bool *pbStack_188;
  byte *local_180;
  int *piStack_178;
  int *local_170;
  longlong *local_168;
  longlong *******local_160;
  longlong *******local_158;
  longlong *******local_150;
  int *local_148;
  longlong *******local_140;
  longlong *******local_138;
  bool *local_130;
  longlong *******local_128;
  int *local_120;
  longlong local_118;
  ulonglong local_110;
  byte local_108 [8];
  longlong *local_100;
  longlong *******local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  longlong *******local_d8;
  longlong *******local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *******local_b8 [3];
  longlong *******local_a0;
  undefined8 *local_98;
  longlong *******local_90;
  int *local_88;
  int local_7c;
  uint local_78;
  undefined4 local_74;
  int local_70 [3];
  char local_63;
  bool local_62 [2];
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_118 = param_5;
  cVar9 = '\x02';
  if (*(char *)((longlong)param_4 + 10) != '\0') {
    cVar9 = *(char *)((longlong)param_4 + 10);
  }
  uVar11 = param_4[1];
  uVar17 = 4;
  cVar14 = 'p';
  switch((char)param_4[2]) {
  case 'A':
    bVar1 = true;
    break;
  case 'B':
  case 'C':
  case 'D':
switchD_140015ffa_caseD_62:
    uVar17 = 3;
    cVar14 = 'e';
    bVar20 = true;
    goto switchD_140015ffa_caseD_61;
  case 'E':
    bVar1 = true;
switchD_140015ffa_caseD_65:
    if (uVar11 == 0xffffffff) {
      uVar11 = 6;
    }
    uVar17 = 1;
LAB_140016064:
    cVar14 = 'e';
    break;
  case 'F':
    bVar1 = true;
switchD_140015ffa_caseD_66:
    if (uVar11 == 0xffffffff) {
      uVar11 = 6;
    }
    uVar17 = 2;
    goto LAB_140016064;
  case 'G':
    bVar2 = true;
switchD_140015ffa_caseD_67:
    bVar1 = bVar2;
    uVar3 = uVar11 + (uVar11 == 0);
    bVar20 = uVar11 != 0xffffffff;
    uVar11 = 6;
    if (bVar20) {
      uVar11 = uVar3;
    }
    uVar17 = 3;
    cVar14 = 'e';
    bVar20 = false;
    goto LAB_140016079;
  default:
    bVar1 = false;
    bVar20 = false;
    bVar2 = false;
    switch((char)param_4[2]) {
    case 'a':
switchD_140015ffa_caseD_61:
      bVar1 = false;
      goto LAB_140016079;
    default:
      goto switchD_140015ffa_caseD_62;
    case 'e':
      goto switchD_140015ffa_caseD_65;
    case 'f':
      goto switchD_140015ffa_caseD_66;
    case 'g':
      goto switchD_140015ffa_caseD_67;
    }
  }
  bVar20 = false;
LAB_140016079:
  local_78 = 0x432;
  if ((int)uVar11 < 0x432) {
    local_78 = uVar11;
  }
  local_70[2] = 0x432;
  if (0x432 < (int)uVar11) {
    local_70[2] = uVar11;
  }
  local_c8 = param_2;
  local_98 = param_1;
  local_88 = param_4;
  local_63 = cVar9;
  uVar4 = FUN_140095e50((ulonglong)param_3);
  iVar16 = (int)uVar4;
  local_62[0] = iVar16 != 0;
  local_c0 = uVar17;
  if (NAN((double)param_3)) {
    uVar4 = (ulonglong)(iVar16 != 0);
    local_708[uVar4 + 2] = 0x6e;
    *(undefined2 *)(local_708 + uVar4) = 0x616e;
    local_b8[0] = (longlong *******)(local_708 + uVar4 + 3);
  }
  else if (uVar11 == 0xffffffff) {
    if (bVar20) {
      FUN_14000dbe0((longlong *)local_b8,(undefined1 (*) [32])local_708,
                    (undefined1 (*) [32])local_19f,(ulonglong)param_3);
    }
    else {
      FUN_1400167ea((longlong *)&local_190,(undefined1 (*) [32])local_708,
                    (undefined1 (*) [32])local_19f,(ulonglong)param_3,(int)uVar17);
      local_b8[0] = local_190;
      local_b8[1] = (longlong *******)pbStack_188;
    }
  }
  else {
    FUN_140016acc((longlong *)&local_190,(undefined1 (*) [32])local_708,
                  (undefined1 (*) [32])local_19f,param_3,(int)uVar17,local_78);
    local_b8[0] = local_190;
    local_b8[1] = (longlong *******)pbStack_188;
  }
  ppppppplVar18 = local_b8[0];
  local_70[0] = (int)local_b8[0] - (int)local_708;
  local_d8 = (longlong *******)local_708;
  if (iVar16 == 0) {
    if (cVar9 != '\x02') {
      local_70[0] = local_70[0] + 1;
    }
  }
  else {
    local_d8 = (longlong *******)(local_708 + 1);
  }
  iVar16 = local_70[0];
  ppppppplVar19 = local_d8;
  ppppppplVar8 = local_d8;
  if (bVar1) {
    for (; ppppppplVar8 != ppppppplVar18;
        ppppppplVar8 = (longlong *******)((longlong)ppppppplVar8 + 1)) {
      if ((byte)(*(char *)ppppppplVar8 + 0x9fU) < 0x1a) {
        *(char *)ppppppplVar8 = *(char *)ppppppplVar8 + -0x20;
      }
    }
    cVar14 = cVar14 + -0x20;
  }
  local_62[1] = false;
  local_90 = ppppppplVar18;
  local_a0 = ppppppplVar18;
  local_d0 = ppppppplVar18;
  local_70[1] = 0;
  local_7c = 0;
  local_f8 = (longlong *******)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_110 = (ulonglong)param_3 & 0x7fffffffffffffff;
  if (0x7fefffffffffffff < local_110) {
    piStack_178 = local_70;
    local_108[0] = *(char *)((longlong)local_88 + 9) == '\0' & *(byte *)((longlong)local_88 + 0xd) &
                   local_110 < 0x7ff0000000000000;
    local_180 = local_108;
    local_190 = (longlong *******)&local_63;
    pbStack_188 = local_62;
    local_170 = local_88;
    local_168 = &local_118;
    local_160 = (longlong *******)&local_d8;
    local_158 = (longlong *******)&local_d0;
    local_150 = (longlong *******)&local_f8;
    local_148 = &local_7c;
    local_140 = (longlong *******)&local_a0;
    local_138 = (longlong *******)local_b8;
    local_130 = local_62 + 1;
    local_128 = (longlong *******)&local_90;
    local_120 = local_70 + 1;
    local_70[0] = iVar16;
    if (local_108[0] == 0) {
      FUN_14001490a(local_98,local_c8,iVar16,local_88,'\x02',&local_190);
    }
    else {
      FUN_14001462a(&local_190,local_98,local_c8);
    }
    FUN_1400021ea((longlong *)&local_f8);
    return local_98;
  }
  local_70[2] = local_70[2] - 0x432;
  if (((*(byte *)((longlong)local_88 + 0xb) | *(byte *)(local_88 + 3)) & 1) == 0) {
    local_74 = 0;
  }
  else {
    ppppppplVar7 = ppppppplVar18;
    ppppppplVar8 = ppppppplVar18;
    ppppppplVar10 = ppppppplVar18;
    ppppppplVar12 = ppppppplVar18;
    ppppppplVar13 = ppppppplVar19;
    if (ppppppplVar19 < ppppppplVar18) {
      do {
        ppppppplVar8 = ppppppplVar13;
        local_a0 = ppppppplVar13;
        if ((*(char *)ppppppplVar13 != '.') &&
           (ppppppplVar8 = ppppppplVar7, local_a0 = ppppppplVar12, *(char *)ppppppplVar13 == cVar14)
           ) {
          ppppppplVar10 = ppppppplVar13;
          local_90 = ppppppplVar13;
        }
        ppppppplVar13 = (longlong *******)((longlong)ppppppplVar13 + 1);
        ppppppplVar7 = ppppppplVar8;
        ppppppplVar12 = local_a0;
      } while (ppppppplVar13 != ppppppplVar18);
    }
    ppppppplVar7 = ppppppplVar8;
    if (ppppppplVar10 < ppppppplVar8) {
      ppppppplVar7 = ppppppplVar10;
    }
    local_74 = 0;
    if ((*(byte *)((longlong)local_88 + 0xb) != 0) && (ppppppplVar8 == ppppppplVar18)) {
      iVar16 = iVar16 + 1;
      local_62[1] = true;
      local_74 = 0xffffff01;
      local_70[0] = iVar16;
    }
    local_d0 = ppppppplVar7;
    if (*(byte *)(local_88 + 3) == 1) {
      if (param_5 == 0) {
        local_100 = FUN_140086860('\x01');
      }
      else {
        local_100 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_100 + 8))(local_100);
      }
      plVar5 = FUN_140009dcb((longlong)local_108);
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_190);
      FUN_1400049c6((longlong *)&local_f8);
      local_e8 = (longlong)local_180;
      uStack_e0 = (ulonglong)piStack_178;
      local_f8 = local_190;
      uStack_f0 = pbStack_188;
      local_180 = (byte *)0x0;
      piStack_178 = (int *)0xf;
      local_190 = (longlong *******)((ulonglong)local_190 & 0xffffffffffffff00);
      FUN_1400021ea((longlong *)&local_190);
      if ((local_100 != (longlong *)0x0) &&
         (puVar6 = (undefined8 *)(**(code **)(*local_100 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
      ppppppplVar18 = (longlong *******)&local_f8;
      if (0xf < uStack_e0) {
        ppppppplVar18 = local_f8;
      }
      local_7c = 0;
      if (local_e8 != 0) {
        uVar15 = (longlong)ppppppplVar7 - (longlong)ppppppplVar19;
        uVar4 = (ulonglong)*(char *)ppppppplVar18;
        local_7c = 0;
        if (uVar4 < uVar15) {
          local_7c = 0;
          ppppppplVar8 = ppppppplVar18;
          do {
            uVar15 = uVar15 - uVar4;
            local_7c = local_7c + 1;
            ppppppplVar19 = (longlong *******)((longlong)ppppppplVar8 + 1);
            if ((longlong *******)((longlong)ppppppplVar8 + 1) ==
                (longlong *******)(local_e8 + (longlong)ppppppplVar18)) {
              ppppppplVar19 = ppppppplVar8;
            }
            uVar4 = (ulonglong)*(char *)ppppppplVar19;
            ppppppplVar8 = ppppppplVar19;
          } while (uVar4 < uVar15);
        }
      }
      local_70[0] = iVar16 + local_7c;
                    /* WARNING: Could not recover jumptable at 0x000140016474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (undefined8 *)
               (*(code *)(&DAT_1400bb308 +
                         *(int *)(&DAT_1400bb308 + (ulonglong)((int)local_c0 - 1) * 4)))
                         (&DAT_1400bb308 +
                          *(int *)(&DAT_1400bb308 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2])
      ;
      return puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140016346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar6 = (undefined8 *)
           (*(code *)(&DAT_1400bb308 + *(int *)(&DAT_1400bb308 + (ulonglong)((int)local_c0 - 1) * 4)
                     ))(&DAT_1400bb308 +
                        *(int *)(&DAT_1400bb308 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2]);
  return puVar6;
}

