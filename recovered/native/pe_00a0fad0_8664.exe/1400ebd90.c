/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ebd90 */

void FUN_1400ebd90(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  short param_5,char *param_6,ulonglong param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  short *psVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  char cVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  short *******pppppppsVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  longlong lVar23;
  char *******pppppppcVar24;
  short *psVar25;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong local_d8;
  undefined2 local_d0;
  short local_c8;
  ulonglong local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  short ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  char ******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  puVar18 = auStack_f8;
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_f8;
  local_c8 = param_5;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    local_c0 = 0;
  }
  else {
    local_c0 = 1;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (local_c0 + 2 <= param_7)) &&
      (param_6[local_c0] == '0')) && ((param_6[local_c0 + 1] + 0xa8U & 0xdf) == 0)) {
    local_c0 = local_c0 + 2;
  }
  uVar17 = local_c0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  local_b8 = param_3;
  local_b0 = param_4;
  uStack_a0 = uVar2;
  local_98 = param_2;
  local_90 = param_1;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  uVar13 = FUN_1400e9630(&local_a8);
  lVar14 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  if (lVar14 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar14,1);
  }
  local_88 = (short ******)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1400fab40(&local_88,0,param_7);
  pppppppsVar15 = &local_88;
  if (7 < local_70) {
    pppppppsVar15 = (short *******)local_88;
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar13,param_6,param_6 + param_7,pppppppsVar15);
  uVar2 = *(undefined8 *)(*(longlong *)(param_4 + 0x40) + 8);
  uStack_a0 = uVar2;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  uVar13 = FUN_1400ecb10(&local_a8);
  lVar14 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  if (lVar14 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar14,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar13,local_68);
  pppppppcVar24 = local_68;
  if (0xf < local_50) {
    pppppppcVar24 = (char *******)local_68[0];
  }
  if ((byte)(*(char *)pppppppcVar24 - 1U) < 0x7e) {
    uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar13);
    cVar8 = *(char *)pppppppcVar24;
    param_5 = local_c8;
    if (cVar8 != '\x7f') {
      uVar19 = (undefined1)local_c8;
      do {
        uVar7 = local_78;
        param_5 = local_c8;
        if ((cVar8 < '\x01') || (param_7 - uVar17 <= (ulonglong)(longlong)*(char *)pppppppcVar24))
        break;
        param_7 = param_7 - (longlong)*(char *)pppppppcVar24;
        if (local_78 < param_7) goto LAB_1400ec4c0;
        if (local_70 == local_78) {
          local_d8 = 1;
          local_d0 = uVar9;
          FUN_1400fb450(&local_88,1,uVar19,param_7);
        }
        else {
          uVar17 = local_78 + 1;
          if (((local_78 != uVar17) && (7 < local_70)) && (DAT_140166098 != '\0')) {
            puVar20 = (undefined2 *)((longlong)local_88 + (local_78 + 1) * 2);
            puVar22 = (undefined2 *)((longlong)local_88 + (local_78 + 2) * 2);
            puVar16 = (undefined2 *)(local_70 * 2 + 9 + (longlong)local_88 & 0xfffffffffffffff8);
            puVar21 = puVar16;
            if (puVar20 <= puVar16) {
              puVar21 = puVar20;
            }
            if (puVar16 < puVar22) {
              puVar22 = puVar16;
            }
            _guard_check_icall(local_88,puVar16,puVar21,puVar22);
          }
          pppppppsVar15 = &local_88;
          if (7 < local_70) {
            pppppppsVar15 = (short *******)local_88;
          }
          puVar20 = (undefined2 *)((longlong)pppppppsVar15 + param_7 * 2);
          local_78 = uVar17;
          FUN_140135ff0(puVar20 + 1,puVar20,(uVar7 - param_7) * 2 + 2);
          lVar14 = 1;
          do {
            *puVar20 = uVar9;
            puVar20 = puVar20 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if ('\0' < *(char *)((longlong)pppppppcVar24 + 1)) {
          pppppppcVar24 = (char *******)((longlong)pppppppcVar24 + 1);
        }
        cVar8 = *(char *)pppppppcVar24;
        uVar17 = local_c0;
        param_5 = local_c8;
      } while (cVar8 != '\x7f');
    }
  }
  uVar7 = local_78;
  puVar6 = local_b8;
  uVar17 = *(ulonglong *)(local_b0 + 0x28);
  if (((longlong)uVar17 < 1) || (uVar17 <= local_78)) {
    lVar14 = 0;
  }
  else {
    lVar14 = uVar17 - local_78;
  }
  uVar12 = *(uint *)(local_b0 + 0x18) & 0x1c0;
  sVar10 = local_c8;
  if (uVar12 == 0x40) {
    pppppppsVar15 = &local_88;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    uVar19 = *(undefined1 *)local_b8;
    lVar3 = *(longlong *)(local_b8 + 2);
    for (uVar17 = local_c0; local_c8 = sVar10, uVar17 != 0; uVar17 = uVar17 - 1) {
      if (lVar3 == 0) {
LAB_1400ec339:
        uVar19 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec31b:
          sVar10 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,sVar10);
        }
        else {
          iVar1 = **(int **)(lVar3 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec31b;
          **(int **)(lVar3 + 0x58) = iVar1 + -1;
          psVar25 = (short *)**(longlong **)(lVar3 + 0x40);
          **(longlong **)(lVar3 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1400ec339;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
  }
  else if (uVar12 == 0x100) {
    pppppppsVar15 = &local_88;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    uVar19 = *(undefined1 *)local_b8;
    lVar3 = *(longlong *)(local_b8 + 2);
    for (uVar17 = local_c0; local_c8 = sVar10, uVar17 != 0; uVar17 = uVar17 - 1) {
      if (lVar3 == 0) {
LAB_1400ec243:
        uVar19 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec225:
          sVar10 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,sVar10);
        }
        else {
          iVar1 = **(int **)(lVar3 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec225;
          **(int **)(lVar3 + 0x58) = iVar1 + -1;
          psVar25 = (short *)**(longlong **)(lVar3 + 0x40);
          **(longlong **)(lVar3 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1400ec243;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
    *(undefined1 *)local_b8 = uVar19;
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (lVar3 == 0) {
LAB_1400ec2b1:
        uVar19 = 1;
      }
      else {
        if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec297:
          sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,sVar10);
        }
        else {
          iVar1 = **(int **)(lVar3 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec297;
          **(int **)(lVar3 + 0x58) = iVar1 + -1;
          psVar25 = (short *)**(longlong **)(lVar3 + 0x40);
          **(longlong **)(lVar3 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = sVar10;
          sVar11 = sVar10;
        }
        if (sVar11 == -1) goto LAB_1400ec2b1;
      }
    }
    lVar14 = 0;
  }
  else {
    uVar19 = *(undefined1 *)local_b8;
    lVar3 = *(longlong *)(local_b8 + 2);
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (lVar3 == 0) {
LAB_1400ec134:
        uVar19 = 1;
      }
      else {
        if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec11a:
          sVar10 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,param_5);
        }
        else {
          iVar1 = **(int **)(lVar3 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec11a;
          **(int **)(lVar3 + 0x58) = iVar1 + -1;
          psVar25 = (short *)**(longlong **)(lVar3 + 0x40);
          **(longlong **)(lVar3 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = param_5;
          sVar10 = param_5;
        }
        if (sVar10 == -1) goto LAB_1400ec134;
      }
    }
    *(undefined1 *)puVar6 = uVar19;
    lVar14 = 0;
    pppppppsVar15 = &local_88;
    sVar10 = local_c8;
    uVar17 = local_c0;
    if (7 < local_70) {
      pppppppsVar15 = (short *******)local_88;
    }
    for (; local_c8 = sVar10, uVar17 != 0; uVar17 = uVar17 - 1) {
      if (lVar3 == 0) {
LAB_1400ec1b2:
        uVar19 = 1;
      }
      else {
        sVar10 = *(short *)pppppppsVar15;
        if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec194:
          sVar10 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,sVar10);
        }
        else {
          iVar1 = **(int **)(lVar3 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec194;
          **(int **)(lVar3 + 0x58) = iVar1 + -1;
          psVar25 = (short *)**(longlong **)(lVar3 + 0x40);
          **(longlong **)(lVar3 + 0x40) = (longlong)(psVar25 + 1);
          *psVar25 = sVar10;
        }
        if (sVar10 == -1) goto LAB_1400ec1b2;
      }
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
      sVar10 = local_c8;
    }
  }
  pppppppsVar15 = &local_88;
  if (7 < local_70) {
    pppppppsVar15 = (short *******)local_88;
  }
  psVar25 = (short *)((longlong)pppppppsVar15 + local_c0 * 2);
  lVar3 = *(longlong *)(local_b8 + 2);
  lVar23 = uVar7 - local_c0;
  do {
    if (lVar23 == 0) {
      *(undefined1 *)local_b8 = uVar19;
      *(undefined8 *)(local_b0 + 0x28) = 0;
      local_a8 = *local_b8;
      uStack_a4 = local_b8[1];
      uStack_a0 = *(undefined8 *)(local_b8 + 2);
      local_d8 = lVar14;
      FUN_1400ec4d0(local_90,local_98,&local_a8,sVar10);
      FUN_1400017de(local_68);
      if (7 < local_70) {
        if (DAT_140166098 != '\0') {
          puVar20 = (undefined2 *)((longlong)local_88 + (local_70 + 1) * 2);
          puVar22 = (undefined2 *)((longlong)local_88 + (local_78 + 1) * 2);
          puVar16 = (undefined2 *)((longlong)puVar20 + 7U & 0xfffffffffffffff8);
          puVar21 = puVar16;
          if (puVar22 <= puVar16) {
            puVar21 = puVar22;
          }
          if (puVar16 < puVar20) {
            puVar20 = puVar16;
          }
          _guard_check_icall(local_88,puVar16,puVar21,puVar20);
        }
        uVar17 = local_70 * 2 + 2;
        pppppppsVar15 = (short *******)local_88;
        if (0xfff < uVar17) {
          pppppppsVar15 = (short *******)local_88[-1];
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppsVar15))) {
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            puVar18 = auStack_f0;
LAB_1400ec4c0:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar18 + -8) = &UNK_1400ec4c5;
            FUN_1400f05c0();
          }
          uVar17 = local_70 * 2 + 0x29;
        }
        thunk_FUN_1400ddcd0(pppppppsVar15,uVar17);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_48 ^ (ulonglong)auStack_f8);
    }
    if (lVar3 == 0) {
LAB_1400ec3c3:
      uVar19 = 1;
    }
    else {
      sVar11 = *psVar25;
      if (**(longlong **)(lVar3 + 0x40) == 0) {
LAB_1400ec3a5:
        sVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar3,sVar11);
      }
      else {
        iVar1 = **(int **)(lVar3 + 0x58);
        if (iVar1 < 1) goto LAB_1400ec3a5;
        **(int **)(lVar3 + 0x58) = iVar1 + -1;
        psVar4 = (short *)**(longlong **)(lVar3 + 0x40);
        **(longlong **)(lVar3 + 0x40) = (longlong)(psVar4 + 1);
        *psVar4 = sVar11;
      }
      if (sVar11 == -1) goto LAB_1400ec3c3;
    }
    psVar25 = psVar25 + 1;
    lVar23 = lVar23 + -1;
  } while( true );
}

