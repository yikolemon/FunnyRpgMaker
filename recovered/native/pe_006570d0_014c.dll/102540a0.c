/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102540a0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_102540a0(undefined4 param_1,uint param_2,int *******param_3,char param_4,int param_5,
                 byte param_6,char param_7,byte *param_8)

{
  char cVar1;
  int *****pppppiVar2;
  bool bVar3;
  int *******pppppppiVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  code *pcVar11;
  code *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  code *pcVar15;
  char *pcVar16;
  byte *******pppppppbVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *******pppppppiVar21;
  int *******in_stack_00000030;
  int *******in_stack_00000034;
  undefined1 in_stack_00000038;
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 local_c4 [8];
  undefined1 local_bc [8];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  int *local_a8;
  undefined1 local_a4 [4];
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  int *******local_94;
  uint local_90;
  int *******local_8c;
  int *local_88;
  int *******local_84;
  int local_80;
  byte local_7b;
  undefined2 local_7a;
  byte local_77;
  undefined1 local_76;
  byte local_75;
  int *******local_74 [5];
  uint local_60;
  byte *******local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *******local_4c;
  code *local_48;
  byte *******local_44 [4];
  int *******local_34;
  code *local_30;
  byte *******local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *******local_1c;
  code *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_1028a35b;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b4 = param_1;
  local_7b = param_6;
  local_b0 = CONCAT31(local_b0._1_3_,param_6);
  local_9c = param_5;
  local_98 = CONCAT31(local_98._1_3_,in_stack_00000038);
  local_8 = 0;
  piVar20 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar15 = *(code **)(*piVar20 + 4);
  local_a8 = piVar20;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar15)();
  if (param_4 == '\0') {
    local_8 = CONCAT31(local_8._1_3_,2);
    local_88 = (int *)FUN_102552e0(local_ac);
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
    local_88 = (int *)FUN_102554e0(local_ac);
  }
  local_8 = local_8 & 0xffffff00;
  pcVar15 = *(code **)(*piVar20 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar6 = (undefined4 *)(*pcVar15)();
  if (puVar6 != (undefined4 *)0x0) {
    pcVar15 = *(code **)*puVar6;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar15)();
  }
  piVar20 = local_88;
  pcVar15 = *(code **)(*local_88 + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_74);
  (*pcVar15)();
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar15 = *(code **)(*piVar20 + 0x24);
  (*(code *)PTR_guard_check_icall_1035d810)();
  uVar7 = (*pcVar15)();
  local_94 = (int *******)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
  if (local_94 < in_stack_00000030) {
    pppppppiVar21 = (int *******)local_74;
    if (0xf < local_60) {
      pppppppiVar21 = local_74[0];
    }
    if (*(char *)pppppppiVar21 != '\x7f') {
      pppppppiVar21 = (int *******)local_74;
      if (0xf < local_60) {
        pppppppiVar21 = local_74[0];
      }
      if ('\0' < *(char *)pppppppiVar21) {
        pcVar15 = *(code **)(*piVar20 + 0x10);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar15)();
        local_84 = (int *******)local_74;
        if (0xf < local_60) {
          local_84 = local_74[0];
        }
        local_90 = CONCAT31(local_90._1_3_,uVar5);
        cVar1 = *(char *)local_84;
        pppppppiVar21 = (int *******)((int)in_stack_00000030 - (int)local_94);
        pppppppiVar4 = in_stack_00000030;
        piVar20 = local_88;
        while (((in_stack_00000030 = pppppppiVar4, local_88 = piVar20, cVar1 != '\x7f' &&
                ('\0' < cVar1)) && ((int *******)(int)*(char *)local_84 < pppppppiVar21))) {
          local_8c = (int *******)((int)pppppppiVar21 - (int)*(char *)local_84);
          if (pppppppiVar4 < local_8c) {
                    /* WARNING: Subroutine does not return */
            FUN_100047d6();
          }
          if (in_stack_00000034 == pppppppiVar4) {
            FUN_10232cc0(1,local_b4,local_8c,1,local_90);
          }
          else {
            FUN_1022d270(pppppppiVar4,(int *******)((int)pppppppiVar4 + 1));
            pbVar14 = (byte *)&param_8;
            if ((int *******)0xf < in_stack_00000034) {
              pbVar14 = param_8;
            }
            pbVar14 = pbVar14 + (int)local_8c;
            in_stack_00000030 = (int *******)((int)pppppppiVar4 + 1);
            FUN_1025b2d0(pbVar14 + 1,pbVar14,(char *)((int)pppppppiVar4 + (1 - (int)local_8c)));
            *pbVar14 = (byte)local_90;
          }
          if ('\0' < *(char *)((int)local_84 + 1)) {
            local_84 = (int *******)((int)local_84 + 1);
          }
          cVar1 = *(char *)local_84;
          pppppppiVar21 = local_8c;
          pppppppiVar4 = in_stack_00000030;
          piVar20 = local_88;
        }
      }
    }
  }
  else {
    FUN_1007ce2a(0,(char *)((int)local_94 + (1 - (int)in_stack_00000030)),local_98);
  }
  local_1c = (int *******)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_18 = (code *)0xf;
  local_2c = (byte *******)0x0;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_7 == '\0') {
    pcVar15 = *(code **)(*piVar20 + 0x28);
    (*(code *)PTR_guard_check_icall_1035d810)(&local_a0);
    (*pcVar15)();
    local_90 = local_a0;
    pcVar15 = *(code **)(*piVar20 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)(local_44);
    (*pcVar15)();
    if ((code *)0xf < local_18) {
      if (DAT_103235d4 != '\0') {
        pcVar15 = local_18 + 1 + (int)local_2c;
        pcVar12 = (code *)((uint)(pcVar15 + 7) & 0xfffffff8);
        pcVar11 = pcVar12;
        if ((char *)((int)local_1c + 1) + (int)local_2c <= pcVar12) {
          pcVar11 = (code *)((char *)((int)local_1c + 1) + (int)local_2c);
        }
        if (pcVar12 < pcVar15) {
          pcVar15 = pcVar12;
        }
        guard_check_icall(local_2c,pcVar12,pcVar11,pcVar15);
      }
      pcVar11 = local_18 + 1;
      pppppppbVar17 = local_2c;
      if ((code *)0xfff < pcVar11) {
        pppppppbVar17 = (byte *******)local_2c[-1];
        pcVar11 = local_18 + 0x24;
        pppppppiVar21 = (int *******)((int)local_2c - (int)pppppppbVar17);
        if ((int *******)0x1f < pppppppiVar21 + -1) goto LAB_10254586;
      }
      FUN_102283a0(pppppppbVar17,pcVar11);
    }
    pcVar15 = local_30;
    pppppppiVar21 = local_34;
    if (local_30 < (code *)0x10) {
LAB_1025448b:
      local_2c = (byte *******)((uint)local_2c & 0xffffff00);
      FUN_1025b2d0(&local_2c,local_44,(char *)((int)pppppppiVar21 + 1));
      local_18 = pcVar15;
      local_1c = pppppppiVar21;
    }
    else {
      local_2c = local_44[0];
      local_18 = local_30;
      local_1c = local_34;
    }
LAB_1025449f:
    local_34 = (int *******)0x0;
    local_30 = (code *)0xf;
    local_44[0] = (byte *******)((uint)local_44[0] & 0xffffff00);
    FUN_10004e60();
    local_4c = (int *******)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = (code *)0xf;
    local_5c = (byte *******)0x0;
    local_8 = CONCAT31(local_8._1_3_,5);
    if ((*(byte *)(local_9c + 0x14) & 8) == 0) goto LAB_102545c1;
    pcVar15 = *(code **)(*local_88 + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)(local_44);
    (*pcVar15)();
    if ((code *)0xf < local_48) {
      if (DAT_103235d4 != '\0') {
        pcVar15 = local_48 + 1 + (int)local_5c;
        pcVar12 = (code *)((uint)(pcVar15 + 7) & 0xfffffff8);
        pcVar11 = pcVar12;
        if ((char *)((int)local_4c + 1) + (int)local_5c <= pcVar12) {
          pcVar11 = (code *)((char *)((int)local_4c + 1) + (int)local_5c);
        }
        if (pcVar12 < pcVar15) {
          pcVar15 = pcVar12;
        }
        guard_check_icall(local_5c,pcVar12,pcVar11,pcVar15);
      }
      pcVar11 = local_48 + 1;
      pppppppbVar17 = local_5c;
      if ((code *)0xfff < pcVar11) {
        pppppppbVar17 = (byte *******)local_5c[-1];
        pcVar11 = local_48 + 0x24;
        pppppppiVar21 = (int *******)((int)local_5c - (int)pppppppbVar17);
        if ((int *******)0x1f < pppppppiVar21 + -1) goto LAB_10254586;
      }
      FUN_102283a0(pppppppbVar17,pcVar11);
    }
    local_5c = (byte *******)((uint)local_5c & 0xffffff00);
    pcVar15 = local_30;
    pppppppiVar21 = local_34;
    if (local_30 < (code *)0x10) goto LAB_1025458d;
    local_5c = local_44[0];
  }
  else {
    pcVar15 = *(code **)(*piVar20 + 0x2c);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar15)();
    local_90 = local_a0;
    pcVar15 = *(code **)(*piVar20 + 0x20);
    (*(code *)PTR_guard_check_icall_1035d810)(local_44);
    (*pcVar15)();
    if (local_18 < (code *)0x10) {
LAB_102543ba:
      pcVar15 = local_30;
      pppppppiVar21 = local_34;
      if (local_30 < (code *)0x10) goto LAB_1025448b;
      local_2c = local_44[0];
      local_18 = local_30;
      local_1c = local_34;
      goto LAB_1025449f;
    }
    if (DAT_103235d4 != '\0') {
      pcVar15 = local_18 + 1 + (int)local_2c;
      pcVar12 = (code *)((uint)(pcVar15 + 7) & 0xfffffff8);
      pcVar11 = pcVar12;
      if ((char *)((int)local_1c + 1) + (int)local_2c <= pcVar12) {
        pcVar11 = (code *)((char *)((int)local_1c + 1) + (int)local_2c);
      }
      if (pcVar12 < pcVar15) {
        pcVar15 = pcVar12;
      }
      guard_check_icall(local_2c,pcVar12,pcVar11,pcVar15);
    }
    pcVar11 = local_18 + 1;
    pppppppbVar17 = local_2c;
    if (pcVar11 < (code *)0x1000) {
LAB_102543b0:
      FUN_102283a0(pppppppbVar17,pcVar11);
      goto LAB_102543ba;
    }
    pppppppbVar17 = (byte *******)local_2c[-1];
    pcVar11 = local_18 + 0x24;
    pppppppiVar21 = (int *******)((int)local_2c - (int)pppppppbVar17);
    if (pppppppiVar21 + -1 < &DAT_00000020) goto LAB_102543b0;
LAB_10254586:
    pcVar11 = (code *)swi(0x29);
    (*pcVar11)();
LAB_1025458d:
    FUN_1025b2d0(&local_5c,local_44,(char *)((int)pppppppiVar21 + 1));
  }
  local_34 = (int *******)0x0;
  local_30 = (code *)0xf;
  local_44[0] = (byte *******)((uint)local_44[0] & 0xffffff00);
  local_4c = pppppppiVar21;
  local_48 = pcVar15;
  FUN_10004e60();
LAB_102545c1:
  pcVar13 = (char *)0x0;
  bVar3 = false;
  uVar7 = 0;
  do {
    switch(*(undefined1 *)((int)&local_90 + uVar7)) {
    case 0x20:
      pcVar13 = pcVar13 + 1;
    case 0x78:
      if (uVar7 != 3) {
        bVar3 = true;
      }
      goto LAB_102545f4;
    case 0x24:
      pcVar13 = pcVar13 + (int)local_4c;
      break;
    case 0x2b:
      pcVar13 = pcVar13 + (int)local_1c;
      break;
    case 0x76:
      if (local_94 < in_stack_00000030) {
        pcVar16 = (char *)0x0;
      }
      else {
        pcVar16 = (char *)((int)local_94 + (1 - (int)in_stack_00000030));
      }
      pcVar13 = pcVar13 + (int)((int)in_stack_00000030 +
                               (int)(pcVar16 + (local_94 != (int *******)0x0)));
    }
LAB_102545f4:
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  pcVar16 = *(char **)(local_9c + 0x20);
  if (((*(int *)(local_9c + 0x24) < 0) ||
      ((*(int *)(local_9c + 0x24) < 1 && (pcVar16 == (char *)0x0)))) || (pcVar16 <= pcVar13)) {
    local_80 = 0;
  }
  else {
    local_80 = (int)pcVar16 - (int)pcVar13;
  }
  local_a8 = (int *)(*(uint *)(local_9c + 0x14) & 0x1c0);
  if ((local_a8 != (int *)0x40) && ((local_a8 != (int *)0x100 || (!bVar3)))) {
    puVar8 = (uint *)FUN_10254dd0(local_a4,param_2,param_3,local_b0,local_80);
    local_80 = 0;
    param_2 = *puVar8;
    param_3 = (int *******)puVar8[1];
  }
  local_7a = param_2._1_2_;
  uVar7 = param_2 & 0xff;
  local_a0 = 0;
  iVar19 = local_80;
  pppppppiVar21 = param_3;
  uVar5 = param_2._3_1_;
  do {
    bVar10 = (byte)uVar7;
    switch(*(undefined1 *)((int)&local_90 + local_a0)) {
    case 0x20:
      local_76 = uVar5;
      local_75 = bVar10;
      if (pppppppiVar21 == (int *******)0x0) {
LAB_10254aef:
        uVar7 = 1;
      }
      else {
        if (*pppppppiVar21[8] == (int *****)0x0) {
LAB_10254acb:
          pppppiVar2 = (*pppppppiVar21)[3];
          (*(code *)PTR_guard_check_icall_1035d810)(local_7b);
          uVar9 = (*(code *)pppppiVar2)();
          iVar19 = local_80;
        }
        else {
          pppppiVar2 = *pppppppiVar21[0xc];
          if ((int)pppppiVar2 < 1) goto LAB_10254acb;
          *pppppppiVar21[0xc] = (int *****)((int)pppppiVar2 + -1);
          pppppiVar2 = *pppppppiVar21[8];
          *pppppppiVar21[8] = (int *****)((int)pppppiVar2 + 1);
          *(byte *)pppppiVar2 = local_7b;
          uVar9 = (uint)local_7b;
        }
        uVar7 = (uint)local_75;
        if (uVar9 == 0xffffffff) goto LAB_10254aef;
      }
      param_2 = CONCAT13(local_76,CONCAT21(local_7a,(char)uVar7));
      uVar5 = local_76;
      param_3 = pppppppiVar21;
      goto LAB_10254b08;
    case 0x24:
      local_84 = local_4c;
      pppppppbVar17 = (byte *******)&local_5c;
      if ((code *)0xf < local_48) {
        pppppppbVar17 = local_5c;
      }
      iVar19 = local_80;
      local_8c = pppppppiVar21;
      local_76 = uVar5;
      local_75 = bVar10;
      if (local_4c != (int *******)0x0) {
        do {
          local_77 = *(byte *)pppppppbVar17;
          if (pppppppiVar21 == (int *******)0x0) {
LAB_10254778:
            uVar7 = 1;
            local_75 = 1;
          }
          else {
            if (*pppppppiVar21[8] == (int *****)0x0) {
LAB_10254751:
              pppppiVar2 = (*pppppppiVar21)[3];
              (*(code *)PTR_guard_check_icall_1035d810)(local_77);
              uVar7 = (*(code *)pppppiVar2)();
              pppppppiVar21 = local_8c;
            }
            else {
              pppppiVar2 = *pppppppiVar21[0xc];
              if ((int)pppppiVar2 < 1) goto LAB_10254751;
              *pppppppiVar21[0xc] = (int *****)((int)pppppiVar2 + -1);
              pppppiVar2 = *pppppppiVar21[8];
              *pppppppiVar21[8] = (int *****)((int)pppppiVar2 + 1);
              *(byte *)pppppiVar2 = local_77;
              uVar7 = (uint)local_77;
            }
            if (uVar7 == 0xffffffff) goto LAB_10254778;
            uVar7 = (uint)local_75;
          }
          local_84 = (int *******)((int)local_84 + -1);
          pppppppbVar17 = (byte *******)((int)pppppppbVar17 + 1);
        } while (local_84 != (int *******)0x0);
        local_84 = (int *******)0x0;
        iVar19 = local_80;
      }
      goto LAB_10254b8e;
    case 0x2b:
      if (local_1c != (int *******)0x0) {
        pppppppbVar17 = (byte *******)&local_2c;
        if ((code *)0xf < local_18) {
          pppppppbVar17 = local_2c;
        }
        local_77 = *(byte *)pppppppbVar17;
        local_76 = uVar5;
        local_75 = bVar10;
        if (pppppppiVar21 != (int *******)0x0) {
          if (*pppppppiVar21[8] == (int *****)0x0) {
LAB_102547ee:
            pppppiVar2 = (*pppppppiVar21)[3];
            (*(code *)PTR_guard_check_icall_1035d810)(local_77);
            uVar9 = (*(code *)pppppiVar2)();
            iVar19 = local_80;
          }
          else {
            pppppiVar2 = *pppppppiVar21[0xc];
            if ((int)pppppiVar2 < 1) goto LAB_102547ee;
            *pppppppiVar21[0xc] = (int *****)((int)pppppiVar2 + -1);
            pppppiVar2 = *pppppppiVar21[8];
            *pppppppiVar21[8] = (int *****)((int)pppppiVar2 + 1);
            *(byte *)pppppiVar2 = local_77;
            uVar9 = (uint)local_77;
          }
          uVar7 = (uint)local_75;
          if (uVar9 != 0xffffffff) goto LAB_10254b8e;
        }
        uVar7 = 1;
        goto LAB_10254b8e;
      }
      break;
    case 0x76:
      if (local_94 == (int *******)0x0) {
        local_84 = in_stack_00000030;
        pbVar14 = (byte *)&param_8;
        if ((int *******)0xf < in_stack_00000034) {
          pbVar14 = param_8;
        }
        iVar19 = local_80;
        local_8c = pppppppiVar21;
        local_76 = uVar5;
        local_75 = bVar10;
        if (in_stack_00000030 != (int *******)0x0) {
          do {
            local_77 = *pbVar14;
            if (pppppppiVar21 == (int *******)0x0) {
LAB_102548b8:
              uVar7 = 1;
              local_75 = 1;
            }
            else {
              if (*pppppppiVar21[8] == (int *****)0x0) {
LAB_10254891:
                pppppiVar2 = (*pppppppiVar21)[3];
                (*(code *)PTR_guard_check_icall_1035d810)(local_77);
                uVar7 = (*(code *)pppppiVar2)();
                pppppppiVar21 = local_8c;
              }
              else {
                pppppiVar2 = *pppppppiVar21[0xc];
                if ((int)pppppiVar2 < 1) goto LAB_10254891;
                *pppppppiVar21[0xc] = (int *****)((int)pppppiVar2 + -1);
                pppppiVar2 = *pppppppiVar21[8];
                *pppppppiVar21[8] = (int *****)((int)pppppiVar2 + 1);
                *(byte *)pppppiVar2 = local_77;
                uVar7 = (uint)local_77;
              }
              if (uVar7 == 0xffffffff) goto LAB_102548b8;
              uVar7 = (uint)local_75;
            }
            local_84 = (int *******)((int)local_84 + -1);
            pbVar14 = pbVar14 + 1;
          } while (local_84 != (int *******)0x0);
          local_84 = (int *******)0x0;
          iVar19 = local_80;
        }
        goto LAB_10254b8e;
      }
      if (local_94 < in_stack_00000030) {
        pbVar14 = (byte *)&param_8;
        if ((int *******)0xf < in_stack_00000034) {
          pbVar14 = param_8;
        }
        puVar6 = (undefined4 *)
                 FUN_10254d40(local_d4,param_2,pppppppiVar21,pbVar14,
                              (int)in_stack_00000030 - (int)local_94);
        param_2 = *puVar6;
        piVar20 = (int *)puVar6[1];
        pcVar15 = *(code **)(*local_88 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)();
        local_77 = (*pcVar15)();
        if (piVar20 == (int *)0x0) {
LAB_10254a5b:
          uVar7 = param_2 >> 8;
          param_2 = CONCAT31((int3)uVar7,1);
        }
        else {
          if (*(int *)piVar20[8] == 0) {
LAB_10254a3e:
            pcVar15 = *(code **)(*piVar20 + 0xc);
            (*(code *)PTR_guard_check_icall_1035d810)(local_77);
            uVar7 = (*pcVar15)();
          }
          else {
            iVar19 = *(int *)piVar20[0xc];
            if (iVar19 < 1) goto LAB_10254a3e;
            *(int *)piVar20[0xc] = iVar19 + -1;
            pbVar14 = *(byte **)piVar20[8];
            *(byte **)piVar20[8] = pbVar14 + 1;
            *pbVar14 = local_77;
            uVar7 = (uint)local_77;
          }
          if (uVar7 == 0xffffffff) goto LAB_10254a5b;
        }
        pbVar14 = (byte *)&param_8;
        if ((int *******)0xf < in_stack_00000034) {
          pbVar14 = param_8;
        }
        puVar8 = (uint *)FUN_10254d40(local_bc,param_2,piVar20,
                                      (int)((int)in_stack_00000030 + (int)pbVar14) - (int)local_94,
                                      local_94);
      }
      else {
        FUN_1022fee0(local_98);
        pcVar15 = *(code **)(*local_88 + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)();
        local_77 = (*pcVar15)();
        if (param_3 == (int *******)0x0) {
LAB_10254959:
          param_2 = 1;
        }
        else {
          if (*param_3[8] == (int *****)0x0) {
LAB_1025493c:
            pppppiVar2 = (*param_3)[3];
            (*(code *)PTR_guard_check_icall_1035d810)(local_77);
            uVar7 = (*(code *)pppppiVar2)();
          }
          else {
            pppppiVar2 = *param_3[0xc];
            if ((int)pppppiVar2 < 1) goto LAB_1025493c;
            *param_3[0xc] = (int *****)((int)pppppiVar2 + -1);
            pppppiVar2 = *param_3[8];
            *param_3[8] = (int *****)((int)pppppiVar2 + 1);
            *(byte *)pppppiVar2 = local_77;
            uVar7 = (uint)local_77;
          }
          if (uVar7 == 0xffffffff) goto LAB_10254959;
        }
        puVar6 = (undefined4 *)
                 FUN_10254dd0(local_c4,param_2,param_3,local_98,
                              (int)local_94 - (int)in_stack_00000030);
        pbVar14 = (byte *)&param_8;
        if ((int *******)0xf < in_stack_00000034) {
          pbVar14 = param_8;
        }
        puVar8 = (uint *)FUN_10254d40(local_cc,*puVar6,puVar6[1],pbVar14,in_stack_00000030);
      }
      uVar7 = *puVar8;
      pppppppiVar21 = (int *******)puVar8[1];
      param_2._1_2_ = (undefined2)(uVar7 >> 8);
      param_2._3_1_ = (undefined1)(uVar7 >> 0x18);
      local_7a = param_2._1_2_;
      iVar19 = local_80;
      uVar5 = param_2._3_1_;
      param_2 = uVar7;
      param_3 = pppppppiVar21;
      break;
    case 0x78:
LAB_10254b08:
      if (local_a8 == (int *)0x100) {
        local_75 = (byte)uVar7;
        local_76 = uVar5;
        iVar18 = local_80;
        while (local_80 = iVar19, local_80 != 0) {
          if (pppppppiVar21 == (int *******)0x0) {
LAB_10254b70:
            uVar7 = 1;
            local_75 = 1;
          }
          else {
            if (*pppppppiVar21[8] == (int *****)0x0) {
LAB_10254b52:
              pppppiVar2 = (*pppppppiVar21)[3];
              local_80 = iVar18;
              (*(code *)PTR_guard_check_icall_1035d810)(local_7b);
              uVar7 = (*(code *)pppppiVar2)();
            }
            else {
              pppppiVar2 = *pppppppiVar21[0xc];
              if ((int)pppppiVar2 < 1) goto LAB_10254b52;
              *pppppppiVar21[0xc] = (int *****)((int)pppppiVar2 + -1);
              pppppiVar2 = *pppppppiVar21[8];
              *pppppppiVar21[8] = (int *****)((int)pppppiVar2 + 1);
              *(byte *)pppppiVar2 = local_7b;
              uVar7 = (uint)local_7b;
            }
            if (uVar7 == 0xffffffff) goto LAB_10254b70;
            uVar7 = (uint)local_75;
          }
          iVar18 = local_80 + -1;
          iVar19 = iVar18;
        }
        local_80 = 0;
        iVar19 = 0;
LAB_10254b8e:
        param_2 = CONCAT31(CONCAT12(local_76,local_7a),(char)uVar7);
        uVar5 = local_76;
        param_3 = pppppppiVar21;
      }
    }
    local_a0 = local_a0 + 1;
    if (3 < local_a0) {
      if ((int *******)0x1 < local_1c) {
        pppppppbVar17 = (byte *******)&local_2c;
        if ((code *)0xf < local_18) {
          pppppppbVar17 = local_2c;
        }
        puVar8 = (uint *)FUN_10254d40(local_bc,param_2,pppppppiVar21,
                                      (byte *)((int)pppppppbVar17 + 1),(char *)((int)local_1c + -1))
        ;
        param_2 = *puVar8;
        pppppppiVar21 = (int *******)puVar8[1];
      }
      *(undefined4 *)(local_9c + 0x20) = 0;
      *(undefined4 *)(local_9c + 0x24) = 0;
      FUN_10254dd0(local_b4,param_2,pppppppiVar21,local_b0,iVar19);
      FUN_10004e60();
      FUN_10004e60();
      FUN_10004e60();
      FUN_10004e60();
      ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  } while( true );
}

