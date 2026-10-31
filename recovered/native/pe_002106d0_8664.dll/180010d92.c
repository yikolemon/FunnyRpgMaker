/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180010d92 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_180010d92(undefined8 param_1,undefined8 param_2,double param_3,longlong param_4,longlong param_5
             )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *******pppppppcVar6;
  char *******pppppppcVar7;
  ulonglong uVar8;
  char cVar9;
  char *******pppppppcVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  char cVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 uVar16;
  char *******pppppppcVar17;
  char *******pppppppcVar18;
  bool bVar19;
  undefined8 in_stack_fffffffffffff8f0;
  uint uVar20;
  undefined1 local_708 [2];
  char cStack_706;
  char ******appppppcStack_705 [172];
  undefined1 local_19f [15];
  char *******local_190;
  bool *pbStack_188;
  byte *local_180;
  int *piStack_178;
  longlong local_170;
  longlong *local_168;
  char *******local_160;
  char *******local_158;
  char *******local_150;
  int *local_148;
  char *******local_140;
  char *******local_138;
  bool *local_130;
  char *******local_128;
  int *local_120;
  longlong local_118;
  double local_110;
  byte local_108 [8];
  longlong *local_100;
  char *******local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  char *******local_d8;
  char *******local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *******local_b8;
  undefined8 uStack_b0;
  char *******local_a0;
  undefined8 local_98;
  char *******local_90;
  longlong local_88;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70 [3];
  char local_63;
  bool local_62 [2];
  undefined8 local_60;
  
  uVar20 = (uint)((ulonglong)in_stack_fffffffffffff8f0 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_118 = param_5;
  cVar9 = '\x02';
  if (*(char *)(param_4 + 10) != '\0') {
    cVar9 = *(char *)(param_4 + 10);
  }
  iVar15 = *(int *)(param_4 + 4);
  uVar16 = 4;
  cVar13 = 'p';
  switch(*(undefined1 *)(param_4 + 8)) {
  case 0x41:
    bVar1 = true;
    break;
  case 0x42:
  case 0x43:
  case 0x44:
switchD_180010e33_caseD_62:
    uVar16 = 3;
    cVar13 = 'e';
    bVar19 = true;
    goto switchD_180010e33_caseD_61;
  case 0x45:
    bVar1 = true;
switchD_180010e33_caseD_65:
    if (iVar15 == -1) {
      iVar15 = 6;
    }
    uVar16 = 1;
LAB_180010e9d:
    cVar13 = 'e';
    break;
  case 0x46:
    bVar1 = true;
switchD_180010e33_caseD_66:
    if (iVar15 == -1) {
      iVar15 = 6;
    }
    uVar16 = 2;
    goto LAB_180010e9d;
  case 0x47:
    bVar2 = true;
switchD_180010e33_caseD_67:
    bVar1 = bVar2;
    iVar3 = iVar15 + (uint)(iVar15 == 0);
    bVar19 = iVar15 != -1;
    iVar15 = 6;
    if (bVar19) {
      iVar15 = iVar3;
    }
    uVar16 = 3;
    cVar13 = 'e';
    bVar19 = false;
    goto LAB_180010eb2;
  default:
    bVar1 = false;
    bVar19 = false;
    bVar2 = false;
    switch(*(undefined1 *)(param_4 + 8)) {
    case 0x61:
switchD_180010e33_caseD_61:
      bVar1 = false;
      goto LAB_180010eb2;
    default:
      goto switchD_180010e33_caseD_62;
    case 0x65:
      goto switchD_180010e33_caseD_65;
    case 0x66:
      goto switchD_180010e33_caseD_66;
    case 0x67:
      goto switchD_180010e33_caseD_67;
    }
  }
  bVar19 = false;
LAB_180010eb2:
  local_78 = 0x432;
  if (iVar15 < 0x432) {
    local_78 = iVar15;
  }
  local_70[2] = 0x432;
  if (0x432 < iVar15) {
    local_70[2] = iVar15;
  }
  local_c8 = param_2;
  local_98 = param_1;
  local_88 = param_4;
  local_63 = cVar9;
  iVar3 = FUN_18027e660(param_3);
  local_62[0] = iVar3 != 0;
  local_c0 = uVar16;
  if (NAN(param_3)) {
    uVar8 = (ulonglong)(iVar3 != 0);
    (&cStack_706)[uVar8] = 'n';
    *(undefined2 *)(local_708 + uVar8) = 0x616e;
    local_b8 = (char *******)((longlong)appppppcStack_705 + uVar8);
  }
  else if (iVar15 == -1) {
    if (bVar19) {
      FUN_180008654(&local_b8,local_708,local_19f,param_3,0,(ulonglong)uVar20 << 0x20);
    }
    else {
      FUN_180011623(&local_190,local_708,local_19f,param_3,(int)uVar16,(ulonglong)uVar20 << 0x20);
      local_b8 = local_190;
      uStack_b0 = pbStack_188;
    }
  }
  else {
    FUN_180011905(&local_190,local_708,local_19f,param_3,(int)uVar16,CONCAT44(uVar20,local_78));
    local_b8 = local_190;
    uStack_b0 = pbStack_188;
  }
  pppppppcVar17 = local_b8;
  local_70[0] = (int)local_b8 - (int)local_708;
  local_d8 = (char *******)local_708;
  if (iVar3 == 0) {
    if (cVar9 != '\x02') {
      local_70[0] = local_70[0] + 1;
    }
  }
  else {
    local_d8 = (char *******)(local_708 + 1);
  }
  iVar15 = local_70[0];
  pppppppcVar18 = local_d8;
  pppppppcVar7 = local_d8;
  if (bVar1) {
    for (; pppppppcVar7 != pppppppcVar17; pppppppcVar7 = (char *******)((longlong)pppppppcVar7 + 1))
    {
      if ((byte)(*(char *)pppppppcVar7 + 0x9fU) < 0x1a) {
        *(char *)pppppppcVar7 = *(char *)pppppppcVar7 + -0x20;
      }
    }
    cVar13 = cVar13 + -0x20;
  }
  local_62[1] = false;
  local_90 = pppppppcVar17;
  local_a0 = pppppppcVar17;
  local_d0 = pppppppcVar17;
  local_70[1] = 0;
  local_7c = 0;
  local_f8 = (char *******)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_110 = ABS(param_3);
  if (0x7fefffffffffffff < (ulonglong)local_110) {
    piStack_178 = local_70;
    local_108[0] = *(char *)(local_88 + 9) == '\0' & *(byte *)(local_88 + 0xd) &
                   (ulonglong)local_110 < 0x7ff0000000000000;
    local_180 = local_108;
    local_190 = (char *******)&local_63;
    pbStack_188 = local_62;
    local_170 = local_88;
    local_168 = &local_118;
    local_160 = (char *******)&local_d8;
    local_158 = (char *******)&local_d0;
    local_150 = (char *******)&local_f8;
    local_148 = &local_7c;
    local_140 = (char *******)&local_a0;
    local_138 = (char *******)&local_b8;
    local_130 = local_62 + 1;
    local_128 = (char *******)&local_90;
    local_120 = local_70 + 1;
    local_70[0] = iVar15;
    if (local_108[0] == 0) {
      FUN_18000f76c(local_98,local_c8,iVar15,local_88,2,&local_190);
    }
    else {
      FUN_18000f494(&local_190,local_98,local_c8);
    }
    FUN_180001ef2(&local_f8);
    return local_98;
  }
  local_70[2] = local_70[2] + -0x432;
  if (((*(byte *)(local_88 + 0xb) | *(byte *)(local_88 + 0xc)) & 1) == 0) {
    local_74 = 0;
  }
  else {
    pppppppcVar6 = pppppppcVar17;
    pppppppcVar7 = pppppppcVar17;
    pppppppcVar10 = pppppppcVar17;
    pppppppcVar11 = pppppppcVar17;
    pppppppcVar12 = pppppppcVar18;
    if (pppppppcVar18 < pppppppcVar17) {
      do {
        pppppppcVar7 = pppppppcVar12;
        local_a0 = pppppppcVar12;
        if ((*(char *)pppppppcVar12 != '.') &&
           (pppppppcVar7 = pppppppcVar6, local_a0 = pppppppcVar11, *(char *)pppppppcVar12 == cVar13)
           ) {
          pppppppcVar10 = pppppppcVar12;
          local_90 = pppppppcVar12;
        }
        pppppppcVar12 = (char *******)((longlong)pppppppcVar12 + 1);
        pppppppcVar6 = pppppppcVar7;
        pppppppcVar11 = local_a0;
      } while (pppppppcVar12 != pppppppcVar17);
    }
    pppppppcVar6 = pppppppcVar7;
    if (pppppppcVar10 < pppppppcVar7) {
      pppppppcVar6 = pppppppcVar10;
    }
    local_74 = 0;
    if ((*(byte *)(local_88 + 0xb) != 0) && (pppppppcVar7 == pppppppcVar17)) {
      iVar15 = iVar15 + 1;
      local_62[1] = true;
      local_74 = 0xffffff01;
      local_70[0] = iVar15;
    }
    local_d0 = pppppppcVar6;
    if (*(byte *)(local_88 + 0xc) == 1) {
      if (param_5 == 0) {
        local_100 = (longlong *)FUN_18023d070(0x7fefffffffffff01);
      }
      else {
        local_100 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_100 + 8))(local_100);
      }
      plVar4 = (longlong *)FUN_18000b3c1(local_108);
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_190);
      FUN_180004c8c(&local_f8);
      local_e8 = (longlong)local_180;
      uStack_e0 = (ulonglong)piStack_178;
      local_f8 = local_190;
      uStack_f0 = pbStack_188;
      local_180 = (byte *)0x0;
      piStack_178 = (int *)0xf;
      local_190 = (char *******)((ulonglong)local_190 & 0xffffffffffffff00);
      FUN_180001ef2(&local_190);
      if ((local_100 != (longlong *)0x0) &&
         (puVar5 = (undefined8 *)(**(code **)(*local_100 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
      pppppppcVar17 = (char *******)&local_f8;
      if (0xf < uStack_e0) {
        pppppppcVar17 = local_f8;
      }
      local_7c = 0;
      if (local_e8 != 0) {
        uVar14 = (longlong)pppppppcVar6 - (longlong)pppppppcVar18;
        uVar8 = (ulonglong)*(char *)pppppppcVar17;
        local_7c = 0;
        if (uVar8 < uVar14) {
          local_7c = 0;
          pppppppcVar7 = pppppppcVar17;
          do {
            uVar14 = uVar14 - uVar8;
            local_7c = local_7c + 1;
            pppppppcVar18 = (char *******)((longlong)pppppppcVar7 + 1);
            if ((char *******)((longlong)pppppppcVar7 + 1) ==
                (char *******)((longlong)pppppppcVar17 + local_e8)) {
              pppppppcVar18 = pppppppcVar7;
            }
            uVar8 = (ulonglong)*(char *)pppppppcVar18;
            pppppppcVar7 = pppppppcVar18;
          } while (uVar8 < uVar14);
        }
      }
      local_70[0] = iVar15 + local_7c;
                    /* WARNING: Could not recover jumptable at 0x0001800112ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (*(code *)(&DAT_1802b074c +
                         *(int *)(&DAT_1802b074c + (ulonglong)((int)local_c0 - 1) * 4)))
                         (&DAT_1802b074c +
                          *(int *)(&DAT_1802b074c + (ulonglong)((int)local_c0 - 1) * 4),local_70[2])
      ;
      return uVar16;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018001117f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar16 = (*(code *)(&DAT_1802b074c + *(int *)(&DAT_1802b074c + (ulonglong)((int)local_c0 - 1) * 4)
                     ))(&DAT_1802b074c +
                        *(int *)(&DAT_1802b074c + (ulonglong)((int)local_c0 - 1) * 4),local_70[2]);
  return uVar16;
}

