/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025dd90 */

void FUN_18025dd90(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  short param_5,char *param_6,ulonglong param_7,char param_8)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  short *psVar5;
  code *pcVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  char cVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  short *******pppppppsVar19;
  undefined *puVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 uVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  longlong lVar28;
  char *******pppppppcVar29;
  short *psVar30;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong local_d8;
  undefined2 local_d0;
  short local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  ulonglong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  short ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  char ******local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  puVar23 = auStack_f8;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_f8;
  local_c8 = param_5;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    local_c0 = 0;
  }
  else {
    local_c0 = 1;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar20 = &DAT_180387558;
    if (((local_c0 + 2 <= param_7) && (param_6[local_c0] == '0')) &&
       ((param_6[local_c0 + 1] + 0xa8U & 0xdf) == 0)) {
      local_c0 = local_c0 + 2;
    }
  }
  else {
    puVar20 = &DAT_180387590;
  }
  uVar22 = local_c0;
  local_b8 = param_3;
  local_b0 = param_4;
  local_90 = param_2;
  local_88 = param_1;
  local_98 = FUN_18028ace0(param_6,puVar20);
  local_c3 = 0;
  puVar15 = (undefined8 *)FUN_180287560();
  local_c4 = *(undefined1 *)*puVar15;
  uVar16 = FUN_18028ace0(param_6,&local_c4);
  uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = uVar3;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
  uVar17 = FUN_1802530d0(&local_a8);
  lVar18 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
  if (lVar18 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar18,1);
  }
  local_80 = (short ******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_1802645e0(&local_80,0,param_7);
  pppppppsVar19 = &local_80;
  if (7 < local_68) {
    pppppppsVar19 = (short *******)local_80;
  }
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar17,param_6,param_6 + param_7,pppppppsVar19);
  uVar3 = *(undefined8 *)(*(longlong *)(local_b0 + 0x40) + 8);
  uStack_a0 = uVar3;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
  uVar17 = FUN_1802565b0(&local_a8);
  lVar18 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
  if (lVar18 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar18,1);
  }
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar17,local_60);
  uVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar17);
  if (uVar16 != param_7) {
    uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar17);
    pppppppsVar19 = &local_80;
    if (7 < local_68) {
      pppppppsVar19 = (short *******)local_80;
    }
    *(undefined2 *)((longlong)pppppppsVar19 + uVar16 * 2) = uVar11;
  }
  if (param_8 != '\0') {
    if (uVar16 == param_7) {
      uVar16 = local_98;
    }
    pppppppcVar29 = local_60;
    if (0xf < local_48) {
      pppppppcVar29 = (char *******)local_60[0];
    }
    cVar9 = *(char *)pppppppcVar29;
    param_5 = local_c8;
    if (cVar9 != '\x7f') {
      uVar24 = (undefined1)local_c8;
      do {
        uVar8 = local_70;
        param_5 = local_c8;
        if ((cVar9 < '\x01') || (uVar16 - uVar22 <= (ulonglong)(longlong)*(char *)pppppppcVar29))
        break;
        uVar16 = uVar16 - (longlong)*(char *)pppppppcVar29;
        if (local_70 < uVar16) goto LAB_18025e531;
        if (local_68 == local_70) {
          local_d8 = 1;
          local_d0 = uVar10;
          FUN_180264ef0(&local_80,1,uVar24,uVar16);
        }
        else {
          uVar1 = local_70 + 1;
          if (((local_70 != uVar1) && (7 < local_68)) && (DAT_18034e408 != '\0')) {
            puVar25 = (undefined2 *)((longlong)local_80 + (local_70 + 1) * 2);
            puVar27 = (undefined2 *)((longlong)local_80 + (local_70 + 2) * 2);
            puVar21 = (undefined2 *)(local_68 * 2 + 9 + (longlong)local_80 & 0xfffffffffffffff8);
            puVar26 = puVar21;
            if (puVar25 <= puVar21) {
              puVar26 = puVar25;
            }
            if (puVar21 < puVar27) {
              puVar27 = puVar21;
            }
            _guard_check_icall(local_80,puVar21,puVar26,puVar27);
          }
          pppppppsVar19 = &local_80;
          if (7 < local_68) {
            pppppppsVar19 = (short *******)local_80;
          }
          puVar25 = (undefined2 *)((longlong)pppppppsVar19 + uVar16 * 2);
          local_70 = uVar1;
          FUN_1802a82f0(puVar25 + 1,puVar25,(uVar8 - uVar16) * 2 + 2);
          lVar18 = 1;
          do {
            *puVar25 = uVar10;
            puVar25 = puVar25 + 1;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if ('\0' < *(char *)((longlong)pppppppcVar29 + 1)) {
          pppppppcVar29 = (char *******)((longlong)pppppppcVar29 + 1);
        }
        cVar9 = *(char *)pppppppcVar29;
        param_5 = local_c8;
      } while (cVar9 != '\x7f');
    }
  }
  uVar16 = local_70;
  puVar7 = local_b8;
  uVar22 = *(ulonglong *)(local_b0 + 0x28);
  if (((longlong)uVar22 < 1) || (uVar22 <= local_70)) {
    lVar18 = 0;
  }
  else {
    lVar18 = uVar22 - local_70;
  }
  uVar14 = *(uint *)(local_b0 + 0x18) & 0x1c0;
  sVar12 = local_c8;
  if (uVar14 == 0x40) {
    pppppppsVar19 = &local_80;
    if (7 < local_68) {
      pppppppsVar19 = (short *******)local_80;
    }
    uVar24 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar22 = local_c0; local_c8 = sVar12, uVar22 != 0; uVar22 = uVar22 - 1) {
      if (lVar4 == 0) {
LAB_18025e3aa:
        uVar24 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar19;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e38c:
          sVar12 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,sVar12);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_18025e38c;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar30 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar30 + 1);
          *psVar30 = sVar12;
        }
        if (sVar12 == -1) goto LAB_18025e3aa;
      }
      pppppppsVar19 = (short *******)((longlong)pppppppsVar19 + 2);
      sVar12 = local_c8;
    }
  }
  else if (uVar14 == 0x100) {
    pppppppsVar19 = &local_80;
    if (7 < local_68) {
      pppppppsVar19 = (short *******)local_80;
    }
    uVar24 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (uVar22 = local_c0; local_c8 = sVar12, uVar22 != 0; uVar22 = uVar22 - 1) {
      if (lVar4 == 0) {
LAB_18025e2b3:
        uVar24 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar19;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e295:
          sVar12 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,sVar12);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_18025e295;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar30 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar30 + 1);
          *psVar30 = sVar12;
        }
        if (sVar12 == -1) goto LAB_18025e2b3;
      }
      pppppppsVar19 = (short *******)((longlong)pppppppsVar19 + 2);
      sVar12 = local_c8;
    }
    *(undefined1 *)local_b8 = uVar24;
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      if (lVar4 == 0) {
LAB_18025e321:
        uVar24 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e307:
          sVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,sVar12);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_18025e307;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar30 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar30 + 1);
          *psVar30 = sVar12;
          sVar13 = sVar12;
        }
        if (sVar13 == -1) goto LAB_18025e321;
      }
    }
    lVar18 = 0;
  }
  else {
    uVar24 = *(undefined1 *)local_b8;
    lVar4 = *(longlong *)(local_b8 + 2);
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      if (lVar4 == 0) {
LAB_18025e1a2:
        uVar24 = 1;
      }
      else {
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e188:
          sVar12 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,param_5);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_18025e188;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar30 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar30 + 1);
          *psVar30 = param_5;
          sVar12 = param_5;
        }
        if (sVar12 == -1) goto LAB_18025e1a2;
      }
    }
    *(undefined1 *)puVar7 = uVar24;
    lVar18 = 0;
    pppppppsVar19 = &local_80;
    sVar12 = local_c8;
    uVar22 = local_c0;
    if (7 < local_68) {
      pppppppsVar19 = (short *******)local_80;
    }
    for (; local_c8 = sVar12, uVar22 != 0; uVar22 = uVar22 - 1) {
      if (lVar4 == 0) {
LAB_18025e222:
        uVar24 = 1;
      }
      else {
        sVar12 = *(short *)pppppppsVar19;
        if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e204:
          sVar12 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,sVar12);
        }
        else {
          iVar2 = **(int **)(lVar4 + 0x58);
          if (iVar2 < 1) goto LAB_18025e204;
          **(int **)(lVar4 + 0x58) = iVar2 + -1;
          psVar30 = (short *)**(longlong **)(lVar4 + 0x40);
          **(longlong **)(lVar4 + 0x40) = (longlong)(psVar30 + 1);
          *psVar30 = sVar12;
        }
        if (sVar12 == -1) goto LAB_18025e222;
      }
      pppppppsVar19 = (short *******)((longlong)pppppppsVar19 + 2);
      sVar12 = local_c8;
    }
  }
  pppppppsVar19 = &local_80;
  if (7 < local_68) {
    pppppppsVar19 = (short *******)local_80;
  }
  psVar30 = (short *)((longlong)pppppppsVar19 + local_c0 * 2);
  lVar4 = *(longlong *)(local_b8 + 2);
  lVar28 = uVar16 - local_c0;
  do {
    if (lVar28 == 0) {
      *(undefined1 *)local_b8 = uVar24;
      *(undefined8 *)(local_b0 + 0x28) = 0;
      local_a8 = *local_b8;
      uStack_a4 = local_b8[1];
      uStack_a0 = *(undefined8 *)(local_b8 + 2);
      local_d8 = lVar18;
      FUN_180255f70(local_88,local_90,&local_a8,sVar12);
      FUN_180001ef2(local_60);
      if (7 < local_68) {
        if (DAT_18034e408 != '\0') {
          puVar25 = (undefined2 *)((longlong)local_80 + (local_68 + 1) * 2);
          puVar27 = (undefined2 *)((longlong)local_80 + (local_70 + 1) * 2);
          puVar21 = (undefined2 *)((longlong)puVar25 + 7U & 0xfffffffffffffff8);
          puVar26 = puVar21;
          if (puVar27 <= puVar21) {
            puVar26 = puVar27;
          }
          if (puVar21 < puVar25) {
            puVar25 = puVar21;
          }
          _guard_check_icall(local_80,puVar21,puVar26,puVar25);
        }
        uVar22 = local_68 * 2 + 2;
        pppppppsVar19 = (short *******)local_80;
        if (0xfff < uVar22) {
          pppppppsVar19 = (short *******)local_80[-1];
          if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pppppppsVar19))) {
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar23 = auStack_f0;
LAB_18025e531:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_18025e536;
            FUN_18025a060();
          }
          uVar22 = local_68 * 2 + 0x29;
        }
        thunk_FUN_1802464a0(pppppppsVar19,uVar22);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_40 ^ (ulonglong)auStack_f8);
    }
    if (lVar4 == 0) {
LAB_18025e434:
      uVar24 = 1;
    }
    else {
      sVar13 = *psVar30;
      if (**(longlong **)(lVar4 + 0x40) == 0) {
LAB_18025e416:
        sVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar4,sVar13);
      }
      else {
        iVar2 = **(int **)(lVar4 + 0x58);
        if (iVar2 < 1) goto LAB_18025e416;
        **(int **)(lVar4 + 0x58) = iVar2 + -1;
        psVar5 = (short *)**(longlong **)(lVar4 + 0x40);
        **(longlong **)(lVar4 + 0x40) = (longlong)(psVar5 + 1);
        *psVar5 = sVar13;
      }
      if (sVar13 == -1) goto LAB_18025e434;
    }
    psVar30 = psVar30 + 1;
    lVar28 = lVar28 + -1;
  } while( true );
}

