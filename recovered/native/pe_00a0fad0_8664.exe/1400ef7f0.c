/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ef7f0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1400ef7f0(undefined8 param_1,undefined8 param_2,short ******param_3,ulonglong param_4,
                  short *******param_5,short param_6,char param_7,longlong *param_8,
                  undefined2 param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short ******ppppppsVar3;
  int iVar4;
  short *****pppppsVar5;
  short ***pppsVar6;
  code *pcVar7;
  byte bVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  char *******pppppppcVar16;
  short *******pppppppsVar17;
  ulonglong uVar18;
  short ******ppppppsVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  short *psVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 uVar28;
  undefined2 *puVar29;
  short ******ppppppsVar30;
  ulonglong uVar31;
  char cVar32;
  char cVar33;
  short ******ppppppsVar34;
  short *******in_R10;
  ulonglong uVar35;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  undefined2 local_120;
  short local_118 [2];
  char local_114;
  char acStack_113 [3];
  short ******local_110;
  uint local_108 [2];
  undefined8 local_100;
  short local_f8 [2];
  uint local_f4;
  ulonglong local_f0;
  short *******local_e8 [2];
  longlong *local_d8;
  short *******local_d0 [2];
  short ******local_c0;
  ulonglong local_b8;
  short *******local_b0;
  undefined8 uStack_a8;
  short ******local_a0;
  ulonglong local_98;
  short *****local_88;
  short *****pppppsStack_80;
  char *******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  puVar24 = auStack_148;
  puVar25 = auStack_148;
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_148;
  local_e8[0] = param_5;
  local_118[0] = param_6;
  local_d8 = param_8;
  local_f8[0] = param_9;
  pppppsVar5 = param_5[8][1];
  ppppppsVar30 = param_3;
  local_110 = param_3;
  local_e8[1] = (short *******)param_2;
  pppppsStack_80 = pppppsVar5;
  if ((char)param_4 == '\0') {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5);
    uVar14 = FUN_1400f0e90(&local_88);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_140178c20)();
    uVar14 = FUN_1400f1170(&local_88);
  }
  local_100 = uVar14;
  lVar15 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5);
  if (lVar15 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar15,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14,local_68);
  uVar12 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14);
  uVar14 = local_100;
  cVar32 = (char)param_4;
  uVar13 = -uVar12;
  if ((int)-uVar12 < 0) {
    uVar13 = uVar12;
  }
  uVar35 = (ulonglong)uVar13;
  local_108[0] = uVar13;
  local_f0 = uVar35;
  if (uVar35 < (ulonglong)param_8[2]) {
    pppppppcVar16 = (char *******)local_68;
    if (0xf < local_50) {
      pppppppcVar16 = local_68[0];
    }
    if (*(char *)pppppppcVar16 != '\x7f') {
      pppppppcVar16 = (char *******)local_68;
      if (0xf < local_50) {
        pppppppcVar16 = local_68[0];
      }
      if ('\0' < *(char *)pppppppcVar16) {
        uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(local_100);
        cVar32 = (char)param_4;
        pppppppcVar16 = (char *******)local_68;
        if (0xf < local_50) {
          pppppppcVar16 = local_68[0];
        }
        uVar20 = param_8[2] - uVar35;
        cVar33 = *(char *)pppppppcVar16;
        param_3 = local_110;
        param_6 = local_118[0];
        uVar13 = local_108[0];
        if (cVar33 != '\x7f') {
          bVar8 = (byte)local_118[0];
          do {
            cVar32 = (char)param_4;
            uVar35 = local_f0;
            uVar14 = local_100;
            param_3 = local_110;
            param_6 = local_118[0];
            uVar13 = local_108[0];
            if ((cVar33 < '\x01') || (uVar20 <= (ulonglong)(longlong)*(char *)pppppppcVar16)) break;
            uVar20 = uVar20 - (longlong)*(char *)pppppppcVar16;
            uVar35 = param_8[2];
            if (uVar35 < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_1400f05c0();
            }
            uVar31 = param_8[3];
            if (uVar31 == uVar35) {
              local_128 = 1;
              ppppppsVar30 = (short ******)(ulonglong)bVar8;
              param_4 = uVar20;
              local_120 = uVar9;
              FUN_1400fb450(param_8,1);
            }
            else {
              uVar1 = uVar35 + 1;
              if (((uVar35 != uVar1) && (7 < uVar31)) && (DAT_140166098 != '\0')) {
                lVar15 = *param_8;
                uVar2 = lVar15 + (uVar35 + 1) * 2;
                param_4 = lVar15 + 2 + uVar1 * 2;
                uVar18 = uVar31 * 2 + 9 + lVar15 & 0xfffffffffffffff8;
                uVar31 = uVar18;
                if (uVar2 <= uVar18) {
                  uVar31 = uVar2;
                }
                if (uVar18 < param_4) {
                  param_4 = uVar18;
                }
                _guard_check_icall(lVar15,uVar18,uVar31);
              }
              param_8[2] = uVar1;
              plVar21 = param_8;
              if (7 < (ulonglong)param_8[3]) {
                plVar21 = (longlong *)*param_8;
              }
              puVar29 = (undefined2 *)((longlong)plVar21 + uVar20 * 2);
              ppppppsVar30 = (short ******)((uVar35 - uVar20) * 2 + 2);
              FUN_140135ff0(puVar29 + 1,puVar29);
              lVar15 = 1;
              do {
                *puVar29 = uVar9;
                puVar29 = puVar29 + 1;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            cVar32 = (char)param_4;
            if ('\0' < *(char *)((longlong)pppppppcVar16 + 1)) {
              pppppppcVar16 = (char *******)((longlong)pppppppcVar16 + 1);
            }
            cVar33 = *(char *)pppppppcVar16;
            uVar35 = local_f0;
            uVar14 = local_100;
            param_3 = local_110;
            param_6 = local_118[0];
            uVar13 = local_108[0];
          } while (cVar33 != '\x7f');
        }
      }
    }
  }
  else {
    ppppppsVar30 = (short ******)((uVar35 - param_8[2]) + 1);
    cVar32 = (char)param_9;
    FUN_1400f08b0(param_8,0);
    uVar14 = local_100;
  }
  local_d0[1] = (short *******)0x0;
  local_c0 = (short ******)0x0;
  local_b8 = 7;
  local_d0[0] = (short *******)0x0;
  if (param_7 == '\0') {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14,&local_114);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_140178c20)();
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14,&local_88);
  if (local_b8 < 8) {
LAB_1400efbc5:
    local_c0 = (short ******)0x0;
    local_b8 = 7;
    local_d0[0] = (short *******)((ulonglong)local_d0[0] & 0xffffffffffff0000);
    FUN_1400de170(local_d0,&local_88);
    FUN_1400de380();
    uStack_a8 = 0;
    local_a0 = (short ******)0x0;
    local_98 = 7;
    local_b0 = (short *******)0x0;
    if (((ulonglong)local_e8[0][3] & 8) != 0) {
      in_R10 = local_e8[0];
      (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14,&local_88);
      if (7 < local_98) {
        if (DAT_140166098 != '\0') {
          ppppppsVar34 = (short ******)((longlong)local_b0 + (local_98 + 1) * 2);
          ppppppsVar3 = (short ******)((longlong)local_b0 + (longlong)((longlong)local_a0 + 1U) * 2)
          ;
          ppppppsVar19 = (short ******)
                         ((ulonglong)((longlong)ppppppsVar34 + 7U) & 0xfffffffffffffff8);
          ppppppsVar30 = ppppppsVar19;
          if (ppppppsVar3 <= ppppppsVar19) {
            ppppppsVar30 = ppppppsVar3;
          }
          if (ppppppsVar19 < ppppppsVar34) {
            ppppppsVar34 = ppppppsVar19;
          }
          cVar32 = (char)ppppppsVar34;
          in_R10 = local_b0;
          _guard_check_icall(local_b0);
        }
        uVar20 = local_98 * 2 + 2;
        pppppppsVar17 = local_b0;
        if (0xfff < uVar20) {
          pppppppsVar17 = (short *******)local_b0[-1];
          if (0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pppppppsVar17)))
          goto LAB_1400efd09;
          uVar20 = local_98 * 2 + 0x29;
        }
        thunk_FUN_1400ddcd0(pppppppsVar17,uVar20);
      }
      local_a0 = (short ******)0x0;
      local_98 = 7;
      local_b0 = (short *******)((ulonglong)local_b0 & 0xffffffffffff0000);
      FUN_1400de170(&local_b0,&local_88);
      FUN_1400de380();
    }
    in_R10 = local_e8[0];
    if (local_114 == ' ') {
      ppppppsVar30 = (short ******)0x1;
LAB_1400efd40:
      cVar33 = '\x01';
      puVar26 = auStack_148;
    }
    else {
      cVar33 = '\0';
      puVar26 = auStack_148;
      ppppppsVar30 = local_a0;
      if ((local_114 != '$') && (puVar26 = auStack_148, ppppppsVar30 = local_c0, local_114 != '+'))
      {
        ppppppsVar30 = (short ******)0x0;
        cVar32 = '\0';
        if (local_114 == 'v') goto LAB_1400efd10;
        puVar26 = auStack_148;
        if (local_114 == 'x') goto LAB_1400efd40;
      }
    }
  }
  else {
    if (DAT_140166098 != '\0') {
      ppppppsVar34 = (short ******)((longlong)local_d0[0] + (local_b8 + 1) * 2);
      ppppppsVar3 = (short ******)((longlong)local_d0[0] + (longlong)((longlong)local_c0 + 1U) * 2);
      ppppppsVar19 = (short ******)((ulonglong)((longlong)ppppppsVar34 + 7U) & 0xfffffffffffffff8);
      ppppppsVar30 = ppppppsVar19;
      if (ppppppsVar3 <= ppppppsVar19) {
        ppppppsVar30 = ppppppsVar3;
      }
      if (ppppppsVar19 < ppppppsVar34) {
        ppppppsVar34 = ppppppsVar19;
      }
      cVar32 = (char)ppppppsVar34;
      in_R10 = local_d0[0];
      _guard_check_icall(local_d0[0]);
    }
    uVar20 = local_b8 * 2 + 2;
    pppppppsVar17 = local_d0[0];
    if (uVar20 < 0x1000) {
LAB_1400efbc0:
      thunk_FUN_1400ddcd0(pppppppsVar17,uVar20);
      goto LAB_1400efbc5;
    }
    pppppppsVar17 = (short *******)local_d0[0][-1];
    if ((ulonglong)((longlong)local_d0[0] + (-8 - (longlong)pppppppsVar17)) < 0x20) {
      uVar20 = local_b8 * 2 + 0x29;
      goto LAB_1400efbc0;
    }
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar24 = auStack_140;
LAB_1400efd09:
    pcVar7 = (code *)swi(0x29);
    (*pcVar7)(5);
    puVar25 = puVar24 + 8;
LAB_1400efd10:
    cVar33 = cVar32;
    uVar20 = param_8[2];
    if (uVar20 <= uVar35) {
      ppppppsVar30 = (short ******)((uVar35 - uVar20) + 1);
    }
    puVar26 = puVar25;
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (uVar13 != 0) + uVar20);
  }
  cVar32 = puVar26[0x35];
  if (cVar32 == ' ') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + 1);
LAB_1400efd90:
    cVar33 = '\x01';
  }
  else if (cVar32 == '$') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_a0);
  }
  else if (cVar32 == '+') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_c0);
  }
  else if (cVar32 == 'v') {
    uVar20 = param_8[2];
    lVar15 = 0;
    if (uVar20 <= uVar35) {
      lVar15 = (uVar35 - uVar20) + 1;
    }
    ppppppsVar30 = (short ******)
                   ((longlong)ppppppsVar30 + lVar15 + uVar20 + (ulonglong)(uVar13 != 0));
  }
  else if (cVar32 == 'x') goto LAB_1400efd90;
  cVar32 = puVar26[0x36];
  if (cVar32 == ' ') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + 1);
  }
  else {
    if (cVar32 == '$') {
      ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_a0);
      goto LAB_1400efde3;
    }
    if (cVar32 == '+') {
      ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_c0);
      goto LAB_1400efde3;
    }
    if (cVar32 == 'v') {
      uVar20 = param_8[2];
      lVar15 = 0;
      if (uVar20 <= uVar35) {
        lVar15 = (uVar35 - uVar20) + 1;
      }
      ppppppsVar30 = (short ******)
                     ((longlong)ppppppsVar30 + lVar15 + uVar20 + (ulonglong)(uVar13 != 0));
      goto LAB_1400efde3;
    }
    if (cVar32 != 'x') goto LAB_1400efde3;
  }
  cVar33 = '\x01';
LAB_1400efde3:
  cVar32 = puVar26[0x37];
  if (cVar32 == ' ') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + 1);
  }
  else if (cVar32 == '$') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_a0);
  }
  else if (cVar32 == '+') {
    ppppppsVar30 = (short ******)((longlong)ppppppsVar30 + (longlong)local_c0);
  }
  else if (cVar32 == 'v') {
    uVar20 = param_8[2];
    lVar15 = 0;
    if (uVar20 <= uVar35) {
      lVar15 = (uVar35 - uVar20) + 1;
    }
    ppppppsVar30 = (short ******)
                   ((longlong)ppppppsVar30 + lVar15 + uVar20 + (ulonglong)(uVar13 != 0));
  }
  ppppppsVar34 = in_R10[5];
  if (((longlong)ppppppsVar34 < 1) || (ppppppsVar34 <= ppppppsVar30)) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)ppppppsVar34 - (longlong)ppppppsVar30;
  }
  uVar13 = *(uint *)(in_R10 + 3) & 0x1c0;
  *(uint *)(puVar26 + 0x54) = uVar13;
  if ((uVar13 != 0x40) && ((uVar13 != 0x100 || (cVar33 == '\0')))) {
    uVar28 = *(undefined1 *)param_3;
    pppppsVar5 = param_3[1];
    for (; lVar15 != 0; lVar15 = lVar15 + -1) {
      if (pppppsVar5 == (short *****)0x0) {
LAB_1400efebe:
        uVar28 = 1;
      }
      else {
        if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400efea5:
          *(undefined8 *)(puVar26 + -8) = 0x1400efeb9;
          sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,param_6);
        }
        else {
          iVar4 = *(int *)pppppsVar5[0xb];
          if (iVar4 < 1) goto LAB_1400efea5;
          *(int *)pppppsVar5[0xb] = iVar4 + -1;
          pppsVar6 = *pppppsVar5[8];
          *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
          *(short *)pppsVar6 = param_6;
          sVar11 = param_6;
        }
        if (sVar11 == -1) goto LAB_1400efebe;
      }
    }
    *(undefined1 *)param_3 = uVar28;
    lVar15 = 0;
    uVar14 = *(undefined8 *)(puVar26 + 0x48);
  }
  local_88 = (short *****)0x0;
  do {
    cVar32 = puVar26[(longlong)local_88 + 0x34];
    if (cVar32 == ' ') {
      uVar28 = *(undefined1 *)param_3;
      pppppsVar5 = param_3[1];
      lVar22 = 1;
      do {
        if (pppppsVar5 == (short *****)0x0) {
LAB_1400f03e1:
          uVar28 = 1;
        }
        else {
          if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f03c7:
            *(undefined8 *)(puVar26 + -8) = 0x1400f03db;
            sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,param_6);
          }
          else {
            iVar4 = *(int *)pppppsVar5[0xb];
            if (iVar4 < 1) goto LAB_1400f03c7;
            *(int *)pppppsVar5[0xb] = iVar4 + -1;
            pppsVar6 = *pppppsVar5[8];
            *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
            *(short *)pppsVar6 = param_6;
            sVar11 = param_6;
          }
          if (sVar11 == -1) goto LAB_1400f03e1;
        }
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      param_3 = *(short *******)(puVar26 + 0x38);
      *(undefined1 *)param_3 = uVar28;
LAB_1400f03f7:
      if (*(int *)(puVar26 + 0x54) == 0x100) {
        uVar28 = *(undefined1 *)param_3;
        pppppsVar5 = param_3[1];
        for (; lVar15 != 0; lVar15 = lVar15 + -1) {
          if (pppppsVar5 == (short *****)0x0) {
LAB_1400f045e:
            uVar28 = 1;
          }
          else {
            if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f0445:
              *(undefined8 *)(puVar26 + -8) = 0x1400f0459;
              sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,param_6);
            }
            else {
              iVar4 = *(int *)pppppsVar5[0xb];
              if (iVar4 < 1) goto LAB_1400f0445;
              *(int *)pppppsVar5[0xb] = iVar4 + -1;
              pppsVar6 = *pppppsVar5[8];
              *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
              *(short *)pppsVar6 = param_6;
              sVar11 = param_6;
            }
            if (sVar11 == -1) goto LAB_1400f045e;
          }
        }
        *(undefined1 *)param_3 = uVar28;
        lVar15 = 0;
      }
    }
    else if (cVar32 == '$') {
      pppppppsVar17 = (short *******)&local_b0;
      if (7 < local_98) {
        pppppppsVar17 = local_b0;
      }
      uVar28 = *(undefined1 *)param_3;
      pppppsVar5 = param_3[1];
      ppppppsVar30 = local_a0;
      if (local_a0 != (short ******)0x0) {
        do {
          if (pppppsVar5 == (short *****)0x0) {
LAB_1400f0365:
            uVar28 = 1;
          }
          else {
            sVar11 = *(short *)pppppppsVar17;
            if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f0347:
              *(undefined8 *)(puVar26 + -8) = 0x1400f035b;
              sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
            }
            else {
              iVar4 = *(int *)pppppsVar5[0xb];
              if (iVar4 < 1) goto LAB_1400f0347;
              *(int *)pppppsVar5[0xb] = iVar4 + -1;
              pppsVar6 = *pppppsVar5[8];
              *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
              *(short *)pppsVar6 = sVar11;
            }
            if (sVar11 == -1) goto LAB_1400f0365;
          }
          pppppppsVar17 = (short *******)((longlong)pppppppsVar17 + 2);
          ppppppsVar30 = (short ******)((longlong)ppppppsVar30 - 1);
        } while (ppppppsVar30 != (short ******)0x0);
        param_3 = *(short *******)(puVar26 + 0x38);
      }
      *(undefined1 *)param_3 = uVar28;
    }
    else if (cVar32 == '+') {
      if (local_c0 != (short ******)0x0) {
        psVar23 = (short *)(puVar26 + 0x78);
        if (7 < local_b8) {
          psVar23 = *(short **)(puVar26 + 0x78);
        }
        uVar28 = *(undefined1 *)param_3;
        pppppsVar5 = param_3[1];
        lVar22 = 1;
        do {
          if (pppppsVar5 == (short *****)0x0) {
LAB_1400f02d3:
            uVar28 = 1;
          }
          else {
            sVar11 = *psVar23;
            if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f02b5:
              *(undefined8 *)(puVar26 + -8) = 0x1400f02c9;
              sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
            }
            else {
              iVar4 = *(int *)pppppsVar5[0xb];
              if (iVar4 < 1) goto LAB_1400f02b5;
              *(int *)pppppsVar5[0xb] = iVar4 + -1;
              pppsVar6 = *pppppsVar5[8];
              *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
              *(short *)pppsVar6 = sVar11;
            }
            if (sVar11 == -1) goto LAB_1400f02d3;
          }
          psVar23 = psVar23 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        param_3 = *(short *******)(puVar26 + 0x38);
        *(undefined1 *)param_3 = uVar28;
      }
    }
    else if (cVar32 == 'v') {
      uVar35 = param_8[2];
      if (*(int *)(puVar26 + 0x40) == 0) {
        plVar21 = param_8;
        if (7 < (ulonglong)param_8[3]) {
          plVar21 = (longlong *)*param_8;
        }
        uVar28 = *(undefined1 *)param_3;
        pppppsVar5 = param_3[1];
        if (uVar35 != 0) {
          do {
            if (pppppsVar5 == (short *****)0x0) {
LAB_1400effa3:
              uVar28 = 1;
            }
            else {
              sVar11 = (short)*plVar21;
              if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400eff85:
                *(undefined8 *)(puVar26 + -8) = 0x1400eff99;
                sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
              }
              else {
                iVar4 = *(int *)pppppsVar5[0xb];
                if (iVar4 < 1) goto LAB_1400eff85;
                *(int *)pppppsVar5[0xb] = iVar4 + -1;
                pppsVar6 = *pppppsVar5[8];
                *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
                *(short *)pppsVar6 = sVar11;
              }
              if (sVar11 == -1) goto LAB_1400effa3;
            }
            plVar21 = (longlong *)((longlong)plVar21 + 2);
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
          param_3 = *(short *******)(puVar26 + 0x38);
          *(undefined1 *)param_3 = uVar28;
          goto LAB_1400f046d;
        }
      }
      else {
        uVar20 = *(ulonglong *)(puVar26 + 0x58);
        if (uVar20 < uVar35) {
          lVar22 = uVar35 - uVar20;
          plVar21 = param_8;
          if (7 < (ulonglong)param_8[3]) {
            plVar21 = (longlong *)*param_8;
          }
          uVar28 = *(undefined1 *)param_3;
          pppppsVar5 = param_3[1];
          if (lVar22 != 0) {
            do {
              if (pppppsVar5 == (short *****)0x0) {
LAB_1400f0177:
                uVar28 = 1;
              }
              else {
                sVar11 = (short)*plVar21;
                if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f0159:
                  *(undefined8 *)(puVar26 + -8) = 0x1400f016d;
                  sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
                }
                else {
                  iVar4 = *(int *)pppppsVar5[0xb];
                  if (iVar4 < 1) goto LAB_1400f0159;
                  *(int *)pppppsVar5[0xb] = iVar4 + -1;
                  pppsVar6 = *pppppsVar5[8];
                  *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
                  *(short *)pppsVar6 = sVar11;
                }
                if (sVar11 == -1) goto LAB_1400f0177;
              }
              plVar21 = (longlong *)((longlong)plVar21 + 2);
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            param_3 = *(short *******)(puVar26 + 0x38);
          }
          *(undefined1 *)param_3 = uVar28;
          *(undefined8 *)(puVar26 + -8) = 0x1400f01a1;
          uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(*(undefined8 *)(puVar26 + 0x48));
          *(undefined8 *)(puVar26 + -8) = 0x1400f01ac;
          FUN_1400e38e0(param_3,uVar9);
          plVar21 = param_8;
          if (7 < (ulonglong)param_8[3]) {
            plVar21 = (longlong *)*param_8;
          }
          uVar28 = *(undefined1 *)param_3;
          pppppsVar5 = param_3[1];
          lVar22 = *(longlong *)(puVar26 + 0x58);
          psVar23 = (short *)(lVar22 * -2 + param_8[2] * 2 + (longlong)plVar21);
          do {
            if (pppppsVar5 == (short *****)0x0) {
LAB_1400f0233:
              uVar28 = 1;
            }
            else {
              sVar11 = *psVar23;
              if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f0215:
                *(undefined8 *)(puVar26 + -8) = 0x1400f0229;
                sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
              }
              else {
                iVar4 = *(int *)pppppsVar5[0xb];
                if (iVar4 < 1) goto LAB_1400f0215;
                *(int *)pppppsVar5[0xb] = iVar4 + -1;
                pppsVar6 = *pppppsVar5[8];
                *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
                *(short *)pppsVar6 = sVar11;
              }
              if (sVar11 == -1) goto LAB_1400f0233;
            }
            psVar23 = psVar23 + 1;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          param_3 = *(short *******)(puVar26 + 0x38);
        }
        else {
          sVar11 = *(short *)(puVar26 + 0x50);
          *(undefined8 *)(puVar26 + -8) = 0x1400effde;
          FUN_1400e38e0(param_3,sVar11);
          *(undefined8 *)(puVar26 + -8) = 0x1400effee;
          uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar14);
          *(undefined8 *)(puVar26 + -8) = 0x1400efff9;
          FUN_1400e38e0(param_3,uVar9);
          uVar28 = *(undefined1 *)param_3;
          pppppsVar5 = param_3[1];
          lVar22 = uVar20 - param_8[2];
          if (lVar22 != 0) {
            do {
              if (pppppsVar5 == (short *****)0x0) {
LAB_1400f005c:
                uVar28 = 1;
              }
              else {
                if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f0043:
                  *(undefined8 *)(puVar26 + -8) = 0x1400f0056;
                  sVar10 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
                }
                else {
                  iVar4 = *(int *)pppppsVar5[0xb];
                  if (iVar4 < 1) goto LAB_1400f0043;
                  *(int *)pppppsVar5[0xb] = iVar4 + -1;
                  pppsVar6 = *pppppsVar5[8];
                  *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
                  *(short *)pppsVar6 = sVar11;
                  sVar10 = sVar11;
                }
                if (sVar10 == -1) goto LAB_1400f005c;
              }
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            param_3 = *(short *******)(puVar26 + 0x38);
          }
          *(undefined1 *)param_3 = uVar28;
          lVar22 = param_8[2];
          plVar21 = param_8;
          if (7 < (ulonglong)param_8[3]) {
            plVar21 = (longlong *)*param_8;
          }
          if (lVar22 != 0) {
            do {
              if (pppppsVar5 == (short *****)0x0) {
LAB_1400f00e3:
                uVar28 = 1;
              }
              else {
                sVar11 = (short)*plVar21;
                if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f00c5:
                  *(undefined8 *)(puVar26 + -8) = 0x1400f00d9;
                  sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
                }
                else {
                  iVar4 = *(int *)pppppsVar5[0xb];
                  if (iVar4 < 1) goto LAB_1400f00c5;
                  *(int *)pppppsVar5[0xb] = iVar4 + -1;
                  pppsVar6 = *pppppsVar5[8];
                  *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
                  *(short *)pppsVar6 = sVar11;
                }
                if (sVar11 == -1) goto LAB_1400f00e3;
              }
              plVar21 = (longlong *)((longlong)plVar21 + 2);
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            param_3 = *(short *******)(puVar26 + 0x38);
            *(undefined1 *)param_3 = uVar28;
            goto LAB_1400f046d;
          }
        }
      }
      *(undefined1 *)param_3 = uVar28;
    }
    else if (cVar32 == 'x') goto LAB_1400f03f7;
LAB_1400f046d:
    local_88 = (short *****)((longlong)local_88 + 1);
    param_6 = *(short *)(puVar26 + 0x30);
    uVar14 = *(undefined8 *)(puVar26 + 0x48);
  } while (local_88 < (short ****)0x4);
  if ((short ******)0x1 < local_c0) {
    psVar23 = (short *)(puVar26 + 0x78);
    if (7 < local_b8) {
      psVar23 = *(short **)(puVar26 + 0x78);
    }
    uVar28 = *(undefined1 *)param_3;
    pppppsVar5 = param_3[1];
    puVar27 = (undefined1 *)((longlong)local_c0 + -1);
    if (puVar27 != (undefined1 *)0x0) {
      do {
        psVar23 = psVar23 + 1;
        if (pppppsVar5 == (short *****)0x0) {
LAB_1400f0516:
          uVar28 = 1;
        }
        else {
          sVar11 = *psVar23;
          if (*pppppsVar5[8] == (short ***)0x0) {
LAB_1400f04f8:
            *(undefined8 *)(puVar26 + -8) = 0x1400f050c;
            sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(pppppsVar5,sVar11);
          }
          else {
            iVar4 = *(int *)pppppsVar5[0xb];
            if (iVar4 < 1) goto LAB_1400f04f8;
            *(int *)pppppsVar5[0xb] = iVar4 + -1;
            pppsVar6 = *pppppsVar5[8];
            *pppppsVar5[8] = (short ***)((longlong)pppsVar6 + 2);
            *(short *)pppsVar6 = sVar11;
          }
          if (sVar11 == -1) goto LAB_1400f0516;
        }
        puVar27 = puVar27 + -1;
      } while (puVar27 != (undefined1 *)0x0);
      param_3 = *(short *******)(puVar26 + 0x38);
    }
    *(undefined1 *)param_3 = uVar28;
  }
  *(undefined8 *)(*(longlong *)(puVar26 + 0x60) + 0x28) = 0;
  local_88 = *param_3;
  pppppsStack_80 = param_3[1];
  *(undefined8 *)(puVar26 + -8) = 0x1400f0557;
  FUN_1400e6e00(*(undefined8 *)(puVar26 + 0x68),&local_88,*(undefined2 *)(puVar26 + 0x30),lVar15);
  *(undefined8 *)(puVar26 + -8) = 0x1400f0561;
  FUN_1400de380(&local_b0);
  *(undefined8 *)(puVar26 + -8) = 0x1400f056c;
  FUN_1400de380(puVar26 + 0x78);
  *(undefined8 *)(puVar26 + -8) = 0x1400f0576;
  FUN_1400017de(local_68);
  *(undefined8 *)(puVar26 + -8) = 0x1400f057f;
  FUN_1400de380(param_8);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar26 + -8) = &UNK_1400f0590;
  FUN_1400d3720(local_48 ^ (ulonglong)puVar26);
}

