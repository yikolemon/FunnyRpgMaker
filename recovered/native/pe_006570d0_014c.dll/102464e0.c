/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102464e0 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

int FUN_102464e0(undefined4 param_1,uint param_2,ushort *param_3,char param_4,int param_5,
                ushort param_6,char param_7,char *****param_8)

{
  char cVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  bool bVar6;
  char *****pppppcVar7;
  char *****pppppcVar8;
  ushort uVar9;
  undefined2 uVar10;
  short sVar11;
  undefined4 *puVar12;
  uint uVar13;
  char ******ppppppcVar14;
  char *****pppppcVar15;
  uint *puVar16;
  ushort ******ppppppuVar17;
  int iVar18;
  byte bVar19;
  undefined1 uVar20;
  uint uVar21;
  code *pcVar22;
  char ****ppppcVar23;
  char ****ppppcVar24;
  int *piVar25;
  ushort *puVar26;
  char *****in_stack_00000030;
  char *****in_stack_00000034;
  ushort in_stack_00000038;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined1 local_b4 [4];
  int *local_b0;
  int local_ac;
  uint local_a8;
  undefined1 local_a4 [4];
  char *****local_a0;
  char ****local_9c;
  uint local_98;
  char *****local_94;
  uint local_90;
  int *local_8c;
  ushort *local_88;
  char ****local_84;
  undefined4 local_80;
  char ****local_7c;
  undefined1 local_76;
  byte local_75;
  undefined1 local_74 [24];
  char *****local_5c [5];
  uint local_48;
  ushort *****local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char ****local_34;
  uint local_30;
  ushort *****local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_10289c7b;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b8 = param_1;
  local_98 = (uint)param_6;
  local_a8 = (uint)in_stack_00000038;
  local_ac = param_5;
  local_8 = 0;
  piVar25 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar22 = *(code **)(*piVar25 + 4);
  local_b0 = piVar25;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar22)();
  if (param_4 == '\0') {
    local_8 = CONCAT31(local_8._1_3_,2);
    local_8c = (int *)FUN_10247b30(local_b4);
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
    local_8c = (int *)FUN_10247d30(local_b4);
  }
  local_8 = local_8 & 0xffffff00;
  pcVar22 = *(code **)(*piVar25 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar12 = (undefined4 *)(*pcVar22)();
  if (puVar12 != (undefined4 *)0x0) {
    pcVar22 = *(code **)*puVar12;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar22)();
  }
  piVar25 = local_8c;
  pcVar22 = *(code **)(*local_8c + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_5c);
  (*pcVar22)();
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar22 = *(code **)(*piVar25 + 0x24);
  (*(code *)PTR_guard_check_icall_1035d810)();
  uVar13 = (*pcVar22)();
  local_9c = (char ****)((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f));
  if (local_9c < in_stack_00000030) {
    ppppppcVar14 = local_5c;
    if (0xf < local_48) {
      ppppppcVar14 = (char ******)local_5c[0];
    }
    if (*(char *)ppppppcVar14 != '\x7f') {
      ppppppcVar14 = local_5c;
      if (0xf < local_48) {
        ppppppcVar14 = (char ******)local_5c[0];
      }
      if ('\0' < *(char *)ppppppcVar14) {
        pcVar22 = *(code **)(*piVar25 + 0x10);
        (*(code *)PTR_guard_check_icall_1035d810)();
        local_80 = (*pcVar22)();
        local_a0 = (char *****)local_5c;
        if (0xf < local_48) {
          local_a0 = local_5c[0];
        }
        local_80 = local_80 & 0xffff;
        cVar1 = *(char *)local_a0;
        pppppcVar15 = (char *****)((int)in_stack_00000030 - (int)local_9c);
        pppppcVar7 = in_stack_00000030;
        pppppcVar8 = in_stack_00000034;
        do {
          piVar25 = local_8c;
          in_stack_00000030 = pppppcVar7;
          in_stack_00000034 = pppppcVar8;
          if (((cVar1 == '\x7f') || (cVar1 < '\x01')) ||
             (pppppcVar15 <= (char *****)(int)*(char *)local_a0)) break;
          local_7c = (char ****)((int)pppppcVar15 - (int)*(char *)local_a0);
          if (pppppcVar7 < local_7c) {
            FUN_10247090();
            iVar18 = func_0x9e349416();
            DAT_05010505 = DAT_05010505 + (char)iVar18;
            return CONCAT31((int3)((uint)(&DAT_05050505 + iVar18) >> 8),
                            (char)(&DAT_05050505 + iVar18) + DAT_05050505) + 0x4465554a;
          }
          if (pppppcVar8 == pppppcVar7) {
            if (pppppcVar7 == (char *****)0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
              FUN_100013fb();
            }
            local_84 = (char ****)((int)pppppcVar7 + 1U | 7);
            if (local_84 < (char *****)0x7fffffff) {
              if ((char *****)(0x7ffffffe - ((uint)pppppcVar8 >> 1)) < pppppcVar8) {
                local_84 = (char ****)(char *****)0x7ffffffe;
              }
              else {
                pppppcVar15 = (char *****)(((uint)pppppcVar8 >> 1) + (int)pppppcVar8);
                if (local_84 < pppppcVar15) {
                  local_84 = (char ****)pppppcVar15;
                }
              }
            }
            else {
              local_84 = (char ****)(char *****)0x7ffffffe;
            }
            local_94 = (char *****)FUN_10250c70(&param_8,&local_84);
            FUN_10236130();
            in_stack_00000030 = (char *****)((int)pppppcVar7 + 1);
            in_stack_00000034 = (char *****)local_84;
            local_90 = (int)local_7c * 2;
            local_88 = (ushort *)((int)local_94 + (int)local_7c * 2);
            if (pppppcVar8 < (char *****)0x8) {
              FUN_1025b2d0(local_94,&param_8,local_90);
              *local_88 = (ushort)local_80;
              FUN_1025b2d0(local_88 + 1,(int)&param_8 + local_90,
                           ((int)pppppcVar7 - (int)local_7c) * 2 + 2);
            }
            else {
              local_84 = (char ****)param_8;
              FUN_1025b2d0(local_94,param_8,local_90);
              *local_88 = (ushort)local_80;
              FUN_1025b2d0(local_88 + 1,local_90 + (int)local_84,
                           ((int)pppppcVar7 - (int)local_7c) * 2 + 2);
              uVar13 = (int)pppppcVar8 * 2 + 2;
              pppppcVar15 = (char *****)local_84;
              if (0xfff < uVar13) {
                pppppcVar15 = (char *****)local_84[-1];
                uVar13 = (int)pppppcVar8 * 2 + 0x25;
                if (0x1f < (uint)((int)local_84 + (-4 - (int)pppppcVar15))) {
                  pcVar22 = (code *)swi(0x29);
                  (*pcVar22)();
                  piVar25 = local_8c;
                  break;
                }
              }
              FUN_102283a0(pppppcVar15,uVar13);
            }
            param_8 = local_94;
            FUN_102360d0();
          }
          else {
            if (pppppcVar7 != (char *****)((int)pppppcVar7 + 1)) {
              pppppcVar15 = (char *****)&param_8;
              if ((char *****)0x7 < pppppcVar8) {
                pppppcVar15 = param_8;
              }
              FUN_10236190(pppppcVar15,pppppcVar8,pppppcVar7,(char *****)((int)pppppcVar7 + 1));
            }
            in_stack_00000030 = (char *****)((int)pppppcVar7 + 1);
            pppppcVar15 = (char *****)&param_8;
            if ((char *****)0x7 < in_stack_00000034) {
              pppppcVar15 = param_8;
            }
            puVar26 = (ushort *)((int)pppppcVar15 + (int)local_7c * 2);
            FUN_1025b2d0(puVar26 + 1,puVar26,((int)pppppcVar7 - (int)local_7c) * 2 + 2);
            *puVar26 = (ushort)local_80;
          }
          if ('\0' < *(char *)((int)local_a0 + 1)) {
            local_a0 = (char *****)((int)local_a0 + 1);
          }
          cVar1 = *(char *)local_a0;
          pppppcVar15 = (char *****)local_7c;
          pppppcVar7 = in_stack_00000030;
          pppppcVar8 = in_stack_00000034;
        } while( true );
      }
    }
  }
  else {
    FUN_102475a0(0,(int)local_9c + (1 - (int)in_stack_00000030),local_a8);
  }
  local_1c = 0;
  local_18 = 7;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = (ushort *****)0x0;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_7 == '\0') {
    pcVar22 = *(code **)(*piVar25 + 0x28);
    (*(code *)PTR_guard_check_icall_1035d810)(&local_a0);
    (*pcVar22)();
    pcVar22 = *(code **)(*piVar25 + 0x1c);
  }
  else {
    pcVar22 = *(code **)(*piVar25 + 0x2c);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar22)();
    pcVar22 = *(code **)(*piVar25 + 0x20);
  }
  local_94 = local_a0;
  (*(code *)PTR_guard_check_icall_1035d810)(local_74);
  (*pcVar22)();
  FUN_10247300(local_74);
  FUN_102363f0();
  local_34 = (char ****)0x0;
  local_30 = 7;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_44 = (ushort *****)0x0;
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_ac + 0x14) & 8) != 0) {
    pcVar22 = *(code **)(*piVar25 + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)(local_74);
    (*pcVar22)();
    FUN_10247300(local_74);
    FUN_102363f0();
  }
  uVar21 = 0;
  bVar6 = false;
  uVar13 = 0;
  do {
    switch(*(undefined1 *)((int)&local_94 + uVar13)) {
    case 0x20:
      uVar21 = uVar21 + 1;
    case 0x78:
      if (uVar13 != 3) {
        bVar6 = true;
      }
      goto LAB_10246994;
    case 0x24:
      uVar21 = uVar21 + (int)local_34;
      break;
    case 0x2b:
      uVar21 = uVar21 + local_1c;
      break;
    case 0x76:
      if (local_9c < in_stack_00000030) {
        iVar18 = 0;
      }
      else {
        iVar18 = (int)local_9c + (1 - (int)in_stack_00000030);
      }
      uVar21 = (int)in_stack_00000030 +
               uVar21 + iVar18 + (uint)((char *****)local_9c != (char *****)0x0);
    }
LAB_10246994:
    uVar13 = uVar13 + 1;
  } while (uVar13 < 4);
  uVar13 = *(uint *)(local_ac + 0x20);
  if (((*(int *)(local_ac + 0x24) < 0) || ((*(int *)(local_ac + 0x24) < 1 && (uVar13 == 0)))) ||
     (uVar13 <= uVar21)) {
    local_7c = (char ****)0x0;
  }
  else {
    local_7c = (char ****)(uVar13 - uVar21);
  }
  local_b0 = (int *)(*(uint *)(local_ac + 0x14) & 0x1c0);
  if ((local_b0 != (int *)0x40) && ((local_b0 != (int *)0x100 || (!bVar6)))) {
    puVar16 = (uint *)FUN_1023e7c0(local_a4,param_2,param_3,local_98,local_7c);
    local_7c = (char ****)0x0;
    param_2 = *puVar16;
    param_3 = (ushort *)puVar16[1];
  }
  local_80._2_2_ = param_2._1_2_;
  uVar13 = param_2 & 0xff;
  local_a0 = (char *****)0x0;
  ppppcVar24 = local_7c;
  puVar26 = param_3;
  uVar20 = param_2._3_1_;
  do {
    bVar19 = (byte)uVar13;
    switch(*(undefined1 *)((int)&local_94 + (int)local_a0)) {
    case 0x20:
      local_76 = uVar20;
      local_75 = bVar19;
      if (puVar26 == (ushort *)0x0) {
LAB_10246e2b:
        uVar13 = 1;
      }
      else {
        if (**(int **)(puVar26 + 0x10) == 0) {
LAB_10246dfe:
          pcVar22 = *(code **)(*(int *)puVar26 + 0xc);
          (*(code *)PTR_guard_check_icall_1035d810)(local_98);
          sVar11 = (*pcVar22)();
          ppppcVar24 = local_7c;
        }
        else {
          iVar18 = **(int **)(puVar26 + 0x18);
          if (iVar18 < 1) goto LAB_10246dfe;
          **(int **)(puVar26 + 0x18) = iVar18 + -1;
          psVar5 = (short *)**(int **)(puVar26 + 0x10);
          **(int **)(puVar26 + 0x10) = (int)(psVar5 + 1);
          sVar11 = (short)local_98;
          *psVar5 = sVar11;
        }
        uVar13 = (uint)local_75;
        if (sVar11 == -1) goto LAB_10246e2b;
      }
      param_2 = CONCAT13(local_76,CONCAT21(local_80._2_2_,(char)uVar13));
      uVar20 = local_76;
      param_3 = puVar26;
      goto LAB_10246e44;
    case 0x24:
      local_84 = local_34;
      ppppppuVar17 = &local_44;
      if (7 < local_30) {
        ppppppuVar17 = (ushort ******)local_44;
      }
      ppppcVar24 = local_7c;
      local_88 = puVar26;
      local_76 = uVar20;
      local_75 = bVar19;
      if ((char *****)local_34 != (char *****)0x0) {
        do {
          uVar9 = *(ushort *)ppppppuVar17;
          local_90 = (uint)uVar9;
          if (puVar26 == (ushort *)0x0) {
LAB_10246b22:
            uVar13 = 1;
            local_75 = 1;
          }
          else {
            if (**(int **)(puVar26 + 0x10) == 0) {
LAB_10246af6:
              pcVar22 = *(code **)(*(int *)puVar26 + 0xc);
              (*(code *)PTR_guard_check_icall_1035d810)(local_90);
              uVar9 = (*pcVar22)();
              puVar26 = local_88;
            }
            else {
              iVar18 = **(int **)(puVar26 + 0x18);
              if (iVar18 < 1) goto LAB_10246af6;
              **(int **)(puVar26 + 0x18) = iVar18 + -1;
              puVar2 = (ushort *)**(int **)(puVar26 + 0x10);
              **(int **)(puVar26 + 0x10) = (int)(puVar2 + 1);
              *puVar2 = uVar9;
            }
            if (uVar9 == 0xffff) goto LAB_10246b22;
            uVar13 = (uint)local_75;
          }
          local_84 = (char ****)((int)local_84 - 1);
          ppppppuVar17 = (ushort ******)((int)ppppppuVar17 + 2);
        } while ((char *****)local_84 != (char *****)0x0);
        local_84 = (char ****)0x0;
        ppppcVar24 = local_7c;
      }
      goto LAB_10246ed4;
    case 0x2b:
      if (local_1c != 0) {
        ppppppuVar17 = &local_2c;
        if (7 < local_18) {
          ppppppuVar17 = (ushort ******)local_2c;
        }
        uVar9 = *(ushort *)ppppppuVar17;
        local_90 = (uint)uVar9;
        local_76 = uVar20;
        local_75 = bVar19;
        if (puVar26 != (ushort *)0x0) {
          if (**(int **)(puVar26 + 0x10) == 0) {
LAB_10246b9f:
            pcVar22 = *(code **)(*(int *)puVar26 + 0xc);
            (*(code *)PTR_guard_check_icall_1035d810)(local_90);
            uVar9 = (*pcVar22)();
            ppppcVar24 = local_7c;
          }
          else {
            iVar18 = **(int **)(puVar26 + 0x18);
            if (iVar18 < 1) goto LAB_10246b9f;
            **(int **)(puVar26 + 0x18) = iVar18 + -1;
            puVar2 = (ushort *)**(int **)(puVar26 + 0x10);
            **(int **)(puVar26 + 0x10) = (int)(puVar2 + 1);
            *puVar2 = uVar9;
          }
          uVar13 = (uint)local_75;
          if (uVar9 != 0xffff) goto LAB_10246ed4;
        }
        uVar13 = 1;
        goto LAB_10246ed4;
      }
      break;
    case 0x76:
      if ((char *****)local_9c == (char *****)0x0) {
        local_84 = (char ****)in_stack_00000030;
        pppppcVar15 = (char *****)&param_8;
        if ((char *****)0x7 < in_stack_00000034) {
          pppppcVar15 = param_8;
        }
        ppppcVar24 = local_7c;
        local_88 = puVar26;
        local_76 = uVar20;
        local_75 = bVar19;
        if (in_stack_00000030 != (char *****)0x0) {
          do {
            uVar9 = *(ushort *)pppppcVar15;
            local_90 = (uint)uVar9;
            if (puVar26 == (ushort *)0x0) {
LAB_10246c72:
              uVar13 = 1;
              local_75 = 1;
            }
            else {
              if (**(int **)(puVar26 + 0x10) == 0) {
LAB_10246c46:
                pcVar22 = *(code **)(*(int *)puVar26 + 0xc);
                (*(code *)PTR_guard_check_icall_1035d810)(local_90);
                uVar9 = (*pcVar22)();
                puVar26 = local_88;
              }
              else {
                iVar18 = **(int **)(puVar26 + 0x18);
                if (iVar18 < 1) goto LAB_10246c46;
                **(int **)(puVar26 + 0x18) = iVar18 + -1;
                puVar2 = (ushort *)**(int **)(puVar26 + 0x10);
                **(int **)(puVar26 + 0x10) = (int)(puVar2 + 1);
                *puVar2 = uVar9;
              }
              if (uVar9 == 0xffff) goto LAB_10246c72;
              uVar13 = (uint)local_75;
            }
            local_84 = (char ****)((int)local_84 + -1);
            pppppcVar15 = (char *****)((int)pppppcVar15 + 2);
          } while ((char *****)local_84 != (char *****)0x0);
          local_84 = (char ****)0x0;
          ppppcVar24 = local_7c;
        }
        goto LAB_10246ed4;
      }
      if (local_9c < in_stack_00000030) {
        pppppcVar15 = (char *****)&param_8;
        if ((char *****)0x7 < in_stack_00000034) {
          pppppcVar15 = param_8;
        }
        puVar12 = (undefined4 *)
                  FUN_1023e730(local_d8,param_2,puVar26,pppppcVar15,
                               (int)in_stack_00000030 - (int)local_9c);
        uVar3 = *puVar12;
        uVar4 = puVar12[1];
        pcVar22 = *(code **)(*local_8c + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar10 = (*pcVar22)();
        FUN_1023b120(uVar10);
        pppppcVar15 = (char *****)&param_8;
        if ((char *****)0x7 < in_stack_00000034) {
          pppppcVar15 = param_8;
        }
        puVar16 = (uint *)FUN_1023e730(local_c0,uVar3,uVar4,
                                       (ushort *)
                                       ((int)pppppcVar15 +
                                       ((int)in_stack_00000030 - (int)local_9c) * 2),local_9c);
      }
      else {
        FUN_1023b120(local_a8);
        pcVar22 = *(code **)(*local_8c + 0xc);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar10 = (*pcVar22)();
        FUN_1023b120(uVar10);
        puVar12 = (undefined4 *)
                  FUN_1023e7c0(local_c8,param_2,param_3,local_a8,
                               (int)local_9c - (int)in_stack_00000030);
        pppppcVar15 = (char *****)&param_8;
        if ((char *****)0x7 < in_stack_00000034) {
          pppppcVar15 = param_8;
        }
        puVar16 = (uint *)FUN_1023e730(local_d0,*puVar12,puVar12[1],pppppcVar15,in_stack_00000030);
      }
      uVar13 = *puVar16;
      puVar26 = (ushort *)puVar16[1];
      param_2._1_2_ = (undefined2)(uVar13 >> 8);
      param_2._3_1_ = (undefined1)(uVar13 >> 0x18);
      local_80._2_2_ = param_2._1_2_;
      ppppcVar24 = local_7c;
      uVar20 = param_2._3_1_;
      param_2 = uVar13;
      param_3 = puVar26;
      break;
    case 0x78:
LAB_10246e44:
      if (local_b0 == (int *)0x100) {
        local_75 = (byte)uVar13;
        local_76 = uVar20;
        ppppcVar23 = local_7c;
        while (local_7c = ppppcVar24, local_7c != (char ****)0x0) {
          if (puVar26 == (ushort *)0x0) {
LAB_10246eb6:
            uVar13 = 1;
            local_75 = 1;
          }
          else {
            if (**(int **)(puVar26 + 0x10) == 0) {
LAB_10246e8f:
              pcVar22 = *(code **)(*(int *)puVar26 + 0xc);
              local_7c = ppppcVar23;
              (*(code *)PTR_guard_check_icall_1035d810)(local_98);
              sVar11 = (*pcVar22)();
            }
            else {
              iVar18 = **(int **)(puVar26 + 0x18);
              if (iVar18 < 1) goto LAB_10246e8f;
              **(int **)(puVar26 + 0x18) = iVar18 + -1;
              psVar5 = (short *)**(int **)(puVar26 + 0x10);
              **(int **)(puVar26 + 0x10) = (int)(psVar5 + 1);
              sVar11 = (short)local_98;
              *psVar5 = sVar11;
            }
            if (sVar11 == -1) goto LAB_10246eb6;
            uVar13 = (uint)local_75;
          }
          ppppcVar23 = (char ****)((int)local_7c + -1);
          ppppcVar24 = ppppcVar23;
        }
        local_7c = (char ****)0x0;
        ppppcVar24 = (char ****)0;
LAB_10246ed4:
        param_2 = CONCAT31(CONCAT12(local_76,local_80._2_2_),(char)uVar13);
        uVar20 = local_76;
        param_3 = puVar26;
      }
    }
    local_a0 = (char *****)((int)local_a0 + 1);
    if ((char *****)0x3 < local_a0) {
      if (1 < local_1c) {
        ppppppuVar17 = &local_2c;
        if (7 < local_18) {
          ppppppuVar17 = (ushort ******)local_2c;
        }
        puVar16 = (uint *)FUN_1023e730(local_c0,param_2,puVar26,(ushort *)((int)ppppppuVar17 + 2),
                                       local_1c - 1);
        param_2 = *puVar16;
        puVar26 = (ushort *)puVar16[1];
      }
      *(undefined4 *)(local_ac + 0x20) = 0;
      *(undefined4 *)(local_ac + 0x24) = 0;
      FUN_1023e7c0(local_b8,param_2,puVar26,local_98,ppppcVar24);
      FUN_102363f0();
      FUN_102363f0();
      FUN_10001fee();
      FUN_102363f0();
      ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  } while( true );
}

