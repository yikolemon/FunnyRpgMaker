/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140013dbc */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_140013dbc(undefined8 *param_1,undefined8 *param_2,float param_3,int *param_4,longlong param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *******ppppppplVar6;
  longlong *******ppppppplVar7;
  ulonglong uVar8;
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
  undefined1 local_6f8 [2];
  undefined1 uStack_6f6;
  longlong ******apppppplStack_6f5 [172];
  undefined1 local_18f [7];
  longlong *******local_188;
  bool *pbStack_180;
  byte *local_178;
  int *piStack_170;
  int *local_168;
  longlong *local_160;
  longlong *******local_158;
  longlong *******local_150;
  longlong *******local_148;
  int *local_140;
  longlong *******local_138;
  longlong *******local_130;
  bool *local_128;
  longlong *******local_120;
  int *local_118;
  longlong local_110;
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
  longlong *******local_b8 [2];
  float local_a4;
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
  local_110 = param_5;
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
switchD_140013e5c_caseD_62:
    uVar17 = 3;
    cVar14 = 'e';
    bVar20 = true;
    goto switchD_140013e5c_caseD_61;
  case 'E':
    bVar1 = true;
switchD_140013e5c_caseD_65:
    if (uVar11 == 0xffffffff) {
      uVar11 = 6;
    }
    uVar17 = 1;
LAB_140013ec6:
    cVar14 = 'e';
    break;
  case 'F':
    bVar1 = true;
switchD_140013e5c_caseD_66:
    if (uVar11 == 0xffffffff) {
      uVar11 = 6;
    }
    uVar17 = 2;
    goto LAB_140013ec6;
  case 'G':
    bVar2 = true;
switchD_140013e5c_caseD_67:
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
    goto LAB_140013edb;
  default:
    bVar1 = false;
    bVar20 = false;
    bVar2 = false;
    switch((char)param_4[2]) {
    case 'a':
switchD_140013e5c_caseD_61:
      bVar1 = false;
      goto LAB_140013edb;
    default:
      goto switchD_140013e5c_caseD_62;
    case 'e':
      goto switchD_140013e5c_caseD_65;
    case 'f':
      goto switchD_140013e5c_caseD_66;
    case 'g':
      goto switchD_140013e5c_caseD_67;
    }
  }
  bVar20 = false;
LAB_140013edb:
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
  uVar3 = FUN_140095fc0((uint)param_3);
  local_62[0] = uVar3 != 0;
  local_c0 = uVar17;
  if (NAN(param_3)) {
    uVar8 = (ulonglong)(uVar3 != 0);
    local_6f8[uVar8 + 2] = 0x6e;
    *(undefined2 *)(local_6f8 + uVar8) = 0x616e;
    local_b8[0] = (longlong *******)(local_6f8 + uVar8 + 3);
  }
  else if (uVar11 == 0xffffffff) {
    if (bVar20) {
      FUN_14000cc14((longlong *)local_b8,(undefined1 (*) [32])local_6f8,
                    (undefined1 (*) [32])local_18f,(uint)param_3);
    }
    else {
      FUN_140014a59((longlong *)&local_188,(undefined1 (*) [32])local_6f8,
                    (undefined1 (*) [32])local_18f,(uint)param_3,(int)uVar17);
      local_b8[0] = local_188;
      local_b8[1] = (longlong *******)pbStack_180;
    }
  }
  else {
    FUN_140014d11((longlong *)&local_188,(undefined1 (*) [32])local_6f8,
                  (undefined1 (*) [32])local_18f,param_3,(int)uVar17,local_78);
    local_b8[0] = local_188;
    local_b8[1] = (longlong *******)pbStack_180;
  }
  ppppppplVar18 = local_b8[0];
  local_70[0] = (int)local_b8[0] - (int)local_6f8;
  local_d8 = (longlong *******)local_6f8;
  if (uVar3 == 0) {
    if (cVar9 != '\x02') {
      local_70[0] = local_70[0] + 1;
    }
  }
  else {
    local_d8 = (longlong *******)(local_6f8 + 1);
  }
  iVar16 = local_70[0];
  ppppppplVar19 = local_d8;
  ppppppplVar7 = local_d8;
  if (bVar1) {
    for (; ppppppplVar7 != ppppppplVar18;
        ppppppplVar7 = (longlong *******)((longlong)ppppppplVar7 + 1)) {
      if ((byte)(*(char *)ppppppplVar7 + 0x9fU) < 0x1a) {
        *(char *)ppppppplVar7 = *(char *)ppppppplVar7 + -0x20;
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
  local_a4 = ABS(param_3);
  if (0x7f7fffff < (uint)local_a4) {
    piStack_170 = local_70;
    local_108[0] = *(char *)((longlong)local_88 + 9) == '\0' & *(byte *)((longlong)local_88 + 0xd) &
                   (uint)local_a4 < 0x7f800000;
    local_178 = local_108;
    local_188 = (longlong *******)&local_63;
    pbStack_180 = local_62;
    local_168 = local_88;
    local_160 = &local_110;
    local_158 = (longlong *******)&local_d8;
    local_150 = (longlong *******)&local_d0;
    local_148 = (longlong *******)&local_f8;
    local_140 = &local_7c;
    local_138 = (longlong *******)&local_a0;
    local_130 = (longlong *******)local_b8;
    local_128 = local_62 + 1;
    local_120 = (longlong *******)&local_90;
    local_118 = local_70 + 1;
    local_70[0] = iVar16;
    if (local_108[0] == 0) {
      FUN_14001490a(local_98,local_c8,iVar16,local_88,'\x02',&local_188);
    }
    else {
      FUN_14001462a(&local_188,local_98,local_c8);
    }
    FUN_1400021ea((longlong *)&local_f8);
    return local_98;
  }
  local_70[2] = local_70[2] - 0x432;
  if (((*(byte *)((longlong)local_88 + 0xb) | *(byte *)(local_88 + 3)) & 1) == 0) {
    local_74 = 0;
  }
  else {
    ppppppplVar6 = ppppppplVar18;
    ppppppplVar7 = ppppppplVar18;
    ppppppplVar10 = ppppppplVar18;
    ppppppplVar12 = ppppppplVar18;
    ppppppplVar13 = ppppppplVar19;
    if (ppppppplVar19 < ppppppplVar18) {
      do {
        ppppppplVar7 = ppppppplVar13;
        local_a0 = ppppppplVar13;
        if ((*(char *)ppppppplVar13 != '.') &&
           (ppppppplVar7 = ppppppplVar6, local_a0 = ppppppplVar12, *(char *)ppppppplVar13 == cVar14)
           ) {
          ppppppplVar10 = ppppppplVar13;
          local_90 = ppppppplVar13;
        }
        ppppppplVar13 = (longlong *******)((longlong)ppppppplVar13 + 1);
        ppppppplVar6 = ppppppplVar7;
        ppppppplVar12 = local_a0;
      } while (ppppppplVar13 != ppppppplVar18);
    }
    ppppppplVar6 = ppppppplVar7;
    if (ppppppplVar10 < ppppppplVar7) {
      ppppppplVar6 = ppppppplVar10;
    }
    local_74 = 0;
    if ((*(byte *)((longlong)local_88 + 0xb) != 0) && (ppppppplVar7 == ppppppplVar18)) {
      iVar16 = iVar16 + 1;
      local_62[1] = true;
      local_74 = (undefined4)CONCAT71((uint7)(uint3)((uint)local_a4 >> 8),1);
      local_70[0] = iVar16;
    }
    local_d0 = ppppppplVar6;
    if (*(byte *)(local_88 + 3) == 1) {
      if (param_5 == 0) {
        local_100 = FUN_140086860('\x01');
      }
      else {
        local_100 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_100 + 8))(local_100);
      }
      plVar4 = FUN_140009dcb((longlong)local_108);
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_188);
      FUN_1400049c6((longlong *)&local_f8);
      local_e8 = (longlong)local_178;
      uStack_e0 = (ulonglong)piStack_170;
      local_f8 = local_188;
      uStack_f0 = pbStack_180;
      local_178 = (byte *)0x0;
      piStack_170 = (int *)0xf;
      local_188 = (longlong *******)((ulonglong)local_188 & 0xffffffffffffff00);
      FUN_1400021ea((longlong *)&local_188);
      if ((local_100 != (longlong *)0x0) &&
         (puVar5 = (undefined8 *)(**(code **)(*local_100 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
      ppppppplVar18 = (longlong *******)&local_f8;
      if (0xf < uStack_e0) {
        ppppppplVar18 = local_f8;
      }
      local_7c = 0;
      if (local_e8 != 0) {
        uVar15 = (longlong)ppppppplVar6 - (longlong)ppppppplVar19;
        uVar8 = (ulonglong)*(char *)ppppppplVar18;
        local_7c = 0;
        if (uVar8 < uVar15) {
          local_7c = 0;
          ppppppplVar7 = ppppppplVar18;
          do {
            uVar15 = uVar15 - uVar8;
            local_7c = local_7c + 1;
            ppppppplVar19 = (longlong *******)((longlong)ppppppplVar7 + 1);
            if ((longlong *******)((longlong)ppppppplVar7 + 1) ==
                (longlong *******)(local_e8 + (longlong)ppppppplVar18)) {
              ppppppplVar19 = ppppppplVar7;
            }
            uVar8 = (ulonglong)*(char *)ppppppplVar19;
            ppppppplVar7 = ppppppplVar19;
          } while (uVar8 < uVar15);
        }
      }
      local_70[0] = iVar16 + local_7c;
                    /* WARNING: Could not recover jumptable at 0x0001400142bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined8 *)
               (*(code *)(&DAT_1400bb2c0 +
                         *(int *)(&DAT_1400bb2c0 + (ulonglong)((int)local_c0 - 1) * 4)))
                         (&DAT_1400bb2c0 +
                          *(int *)(&DAT_1400bb2c0 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2])
      ;
      return puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140014195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (undefined8 *)
           (*(code *)(&DAT_1400bb2c0 + *(int *)(&DAT_1400bb2c0 + (ulonglong)((int)local_c0 - 1) * 4)
                     ))(&DAT_1400bb2c0 +
                        *(int *)(&DAT_1400bb2c0 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2]);
  return puVar5;
}

