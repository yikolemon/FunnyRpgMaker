/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000ec27 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_18000ec27(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  uint3 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char *******pppppppcVar8;
  char *******pppppppcVar9;
  ulonglong uVar10;
  char cVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  char cVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 uVar18;
  char *******pppppppcVar19;
  char *******pppppppcVar20;
  bool bVar21;
  undefined8 in_stack_fffffffffffff900;
  uint uVar22;
  undefined1 local_6f8 [2];
  char cStack_6f6;
  char ******appppppcStack_6f5 [172];
  undefined1 local_18f [7];
  char *******local_188;
  bool *pbStack_180;
  byte *local_178;
  int *piStack_170;
  longlong local_168;
  longlong *local_160;
  char *******local_158;
  char *******local_150;
  char *******local_148;
  int *local_140;
  char *******local_138;
  char *******local_130;
  bool *local_128;
  char *******local_120;
  int *local_118;
  longlong local_110;
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
  float local_a4;
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
  
  uVar22 = (uint)((ulonglong)in_stack_fffffffffffff900 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_110 = param_5;
  cVar11 = '\x02';
  if (*(char *)(param_4 + 10) != '\0') {
    cVar11 = *(char *)(param_4 + 10);
  }
  iVar17 = *(int *)(param_4 + 4);
  uVar18 = 4;
  cVar15 = 'p';
  switch(*(undefined1 *)(param_4 + 8)) {
  case 0x41:
    bVar3 = true;
    break;
  case 0x42:
  case 0x43:
  case 0x44:
switchD_18000ecc7_caseD_62:
    uVar18 = 3;
    cVar15 = 'e';
    bVar21 = true;
    goto switchD_18000ecc7_caseD_61;
  case 0x45:
    bVar3 = true;
switchD_18000ecc7_caseD_65:
    if (iVar17 == -1) {
      iVar17 = 6;
    }
    uVar18 = 1;
LAB_18000ed31:
    cVar15 = 'e';
    break;
  case 0x46:
    bVar3 = true;
switchD_18000ecc7_caseD_66:
    if (iVar17 == -1) {
      iVar17 = 6;
    }
    uVar18 = 2;
    goto LAB_18000ed31;
  case 0x47:
    bVar4 = true;
switchD_18000ecc7_caseD_67:
    bVar3 = bVar4;
    iVar5 = iVar17 + (uint)(iVar17 == 0);
    bVar21 = iVar17 != -1;
    iVar17 = 6;
    if (bVar21) {
      iVar17 = iVar5;
    }
    uVar18 = 3;
    cVar15 = 'e';
    bVar21 = false;
    goto LAB_18000ed46;
  default:
    bVar3 = false;
    bVar21 = false;
    bVar4 = false;
    switch(*(undefined1 *)(param_4 + 8)) {
    case 0x61:
switchD_18000ecc7_caseD_61:
      bVar3 = false;
      goto LAB_18000ed46;
    default:
      goto switchD_18000ecc7_caseD_62;
    case 0x65:
      goto switchD_18000ecc7_caseD_65;
    case 0x66:
      goto switchD_18000ecc7_caseD_66;
    case 0x67:
      goto switchD_18000ecc7_caseD_67;
    }
  }
  bVar21 = false;
LAB_18000ed46:
  local_78 = 0x432;
  if (iVar17 < 0x432) {
    local_78 = iVar17;
  }
  local_70[2] = 0x432;
  if (0x432 < iVar17) {
    local_70[2] = iVar17;
  }
  local_c8 = param_2;
  local_98 = param_1;
  local_88 = param_4;
  local_63 = cVar11;
  iVar5 = FUN_18027e7d0(param_3);
  local_62[0] = iVar5 != 0;
  local_c0 = uVar18;
  if (NAN(param_3)) {
    uVar10 = (ulonglong)(iVar5 != 0);
    (&cStack_6f6)[uVar10] = 'n';
    *(undefined2 *)(local_6f8 + uVar10) = 0x616e;
    local_b8 = (char *******)((longlong)appppppcStack_6f5 + uVar10);
  }
  else if (iVar17 == -1) {
    if (bVar21) {
      FUN_180007688(&local_b8,local_6f8,local_18f,param_3,0,(ulonglong)uVar22 << 0x20);
    }
    else {
      FUN_18000f8ba(&local_188,local_6f8,local_18f,param_3,(int)uVar18,(ulonglong)uVar22 << 0x20);
      local_b8 = local_188;
      uStack_b0 = pbStack_180;
    }
  }
  else {
    FUN_18000fb72(&local_188,local_6f8,local_18f,param_3,(int)uVar18,CONCAT44(uVar22,local_78));
    local_b8 = local_188;
    uStack_b0 = pbStack_180;
  }
  pppppppcVar19 = local_b8;
  local_70[0] = (int)local_b8 - (int)local_6f8;
  local_d8 = (char *******)local_6f8;
  if (iVar5 == 0) {
    if (cVar11 != '\x02') {
      local_70[0] = local_70[0] + 1;
    }
  }
  else {
    local_d8 = (char *******)(local_6f8 + 1);
  }
  iVar17 = local_70[0];
  pppppppcVar20 = local_d8;
  pppppppcVar9 = local_d8;
  if (bVar3) {
    for (; pppppppcVar9 != pppppppcVar19; pppppppcVar9 = (char *******)((longlong)pppppppcVar9 + 1))
    {
      if ((byte)(*(char *)pppppppcVar9 + 0x9fU) < 0x1a) {
        *(char *)pppppppcVar9 = *(char *)pppppppcVar9 + -0x20;
      }
    }
    cVar15 = cVar15 + -0x20;
  }
  local_62[1] = false;
  local_90 = pppppppcVar19;
  local_a0 = pppppppcVar19;
  local_d0 = pppppppcVar19;
  local_70[1] = 0;
  local_7c = 0;
  local_f8 = (char *******)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0xf;
  local_a4 = ABS(param_3);
  if (0x7f7fffff < (uint)local_a4) {
    piStack_170 = local_70;
    local_108[0] = *(char *)(local_88 + 9) == '\0' & *(byte *)(local_88 + 0xd) &
                   (uint)local_a4 < 0x7f800000;
    local_178 = local_108;
    local_188 = (char *******)&local_63;
    pbStack_180 = local_62;
    local_168 = local_88;
    local_160 = &local_110;
    local_158 = (char *******)&local_d8;
    local_150 = (char *******)&local_d0;
    local_148 = (char *******)&local_f8;
    local_140 = &local_7c;
    local_138 = (char *******)&local_a0;
    local_130 = (char *******)&local_b8;
    local_128 = local_62 + 1;
    local_120 = (char *******)&local_90;
    local_118 = local_70 + 1;
    local_70[0] = iVar17;
    if (local_108[0] == 0) {
      FUN_18000f76c(local_98,local_c8,iVar17,local_88,2,&local_188);
    }
    else {
      FUN_18000f494(&local_188,local_98,local_c8);
    }
    FUN_180001ef2(&local_f8);
    return local_98;
  }
  local_70[2] = local_70[2] + -0x432;
  bVar1 = *(byte *)(local_88 + 0xb);
  uVar2 = (uint3)((uint)local_a4 >> 8);
  uVar10 = (ulonglong)CONCAT31(uVar2,bVar1);
  if (((bVar1 | *(byte *)(local_88 + 0xc)) & 1) == 0) {
    local_74 = 0;
  }
  else {
    pppppppcVar8 = pppppppcVar19;
    pppppppcVar9 = pppppppcVar19;
    pppppppcVar12 = pppppppcVar19;
    pppppppcVar13 = pppppppcVar19;
    pppppppcVar14 = pppppppcVar20;
    if (pppppppcVar20 < pppppppcVar19) {
      do {
        pppppppcVar9 = pppppppcVar14;
        local_a0 = pppppppcVar14;
        if ((*(char *)pppppppcVar14 != '.') &&
           (pppppppcVar9 = pppppppcVar8, local_a0 = pppppppcVar13, *(char *)pppppppcVar14 == cVar15)
           ) {
          pppppppcVar12 = pppppppcVar14;
          local_90 = pppppppcVar14;
        }
        pppppppcVar14 = (char *******)((longlong)pppppppcVar14 + 1);
        pppppppcVar8 = pppppppcVar9;
        pppppppcVar13 = local_a0;
      } while (pppppppcVar14 != pppppppcVar19);
    }
    pppppppcVar8 = pppppppcVar9;
    if (pppppppcVar12 < pppppppcVar9) {
      pppppppcVar8 = pppppppcVar12;
    }
    local_74 = 0;
    if ((bVar1 != 0) && (pppppppcVar9 == pppppppcVar19)) {
      iVar17 = iVar17 + 1;
      local_62[1] = true;
      uVar10 = CONCAT71((uint7)uVar2,1);
      local_74 = (undefined4)uVar10;
      local_70[0] = iVar17;
    }
    local_d0 = pppppppcVar8;
    if (*(byte *)(local_88 + 0xc) == 1) {
      if (param_5 == 0) {
        local_100 = (longlong *)FUN_18023d070(CONCAT71((int7)(uVar10 >> 8),1));
      }
      else {
        local_100 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_100 + 8))(local_100);
      }
      plVar6 = (longlong *)FUN_18000b3c1(local_108);
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_188);
      FUN_180004c8c(&local_f8);
      local_e8 = (longlong)local_178;
      uStack_e0 = (ulonglong)piStack_170;
      local_f8 = local_188;
      local_178 = (byte *)0x0;
      piStack_170 = (int *)0xf;
      local_188 = (char *******)((ulonglong)local_188 & 0xffffffffffffff00);
      FUN_180001ef2(&local_188);
      if ((local_100 != (longlong *)0x0) &&
         (puVar7 = (undefined8 *)(**(code **)(*local_100 + 0x10))(), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)(puVar7,1);
      }
      pppppppcVar19 = (char *******)&local_f8;
      if (0xf < uStack_e0) {
        pppppppcVar19 = local_f8;
      }
      local_7c = 0;
      if (local_e8 != 0) {
        uVar16 = (longlong)pppppppcVar8 - (longlong)pppppppcVar20;
        uVar10 = (ulonglong)*(char *)pppppppcVar19;
        local_7c = 0;
        if (uVar10 < uVar16) {
          local_7c = 0;
          pppppppcVar9 = pppppppcVar19;
          do {
            uVar16 = uVar16 - uVar10;
            local_7c = local_7c + 1;
            pppppppcVar20 = (char *******)((longlong)pppppppcVar9 + 1);
            if ((char *******)((longlong)pppppppcVar9 + 1) ==
                (char *******)((longlong)pppppppcVar19 + local_e8)) {
              pppppppcVar20 = pppppppcVar9;
            }
            uVar10 = (ulonglong)*(char *)pppppppcVar20;
            pppppppcVar9 = pppppppcVar20;
          } while (uVar10 < uVar16);
        }
      }
      local_70[0] = iVar17 + local_7c;
                    /* WARNING: Could not recover jumptable at 0x00018000f12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)(&DAT_1802b0704 +
                         *(int *)(&DAT_1802b0704 + (ulonglong)((int)local_c0 - 1) * 4)))
                         (&DAT_1802b0704 +
                          *(int *)(&DAT_1802b0704 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2])
      ;
      return uVar18;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018000f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar18 = (*(code *)(&DAT_1802b0704 + *(int *)(&DAT_1802b0704 + (ulonglong)((int)local_c0 - 1) * 4)
                     ))(&DAT_1802b0704 +
                        *(int *)(&DAT_1802b0704 + (ulonglong)((int)local_c0 - 1) * 4),local_70[2]);
  return uVar18;
}

