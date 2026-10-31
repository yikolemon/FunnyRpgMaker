/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024d9f0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_18024d9f0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *******pppppppcVar13;
  longlong lVar14;
  short *******pppppppsVar15;
  byte *pbVar16;
  short *******pppppppsVar17;
  byte *******pppppppbVar18;
  char *pcVar19;
  ulonglong uVar20;
  byte *pbVar21;
  short *psVar22;
  short *psVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  byte *pbVar28;
  char *pcVar29;
  short *psVar30;
  char *pcVar31;
  byte *pbVar32;
  short *psVar33;
  char *pcVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  uint local_1b8;
  uint local_1b4;
  char local_1b0 [8];
  undefined8 *local_1a8 [2];
  int local_198;
  uint local_194;
  char local_190 [8];
  ulonglong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  short *******local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  char *******local_140;
  undefined8 uStack_138;
  longlong local_130;
  ulonglong local_128;
  short *******local_120 [2];
  longlong local_110;
  ulonglong local_108;
  byte *******local_100 [2];
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  short *******local_c0 [3];
  ulonglong local_a8;
  short *******local_a0 [3];
  ulonglong local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_1e8;
  local_180 = param_7;
  local_1b4 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_1a8[0] = param_2;
  local_170 = uVar2;
  local_168 = param_2;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
  if (param_5 == '\0') {
    puVar10 = (undefined8 *)FUN_180250e90(&local_178);
  }
  else {
    puVar10 = (undefined8 *)FUN_180251170(&local_178);
  }
  local_1a8[1] = puVar10;
  lVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
  puVar25 = auStack_1e8;
  if (lVar11 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11,1);
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_1b0[0] = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 7;
  local_160 = (short *******)0x0;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_190);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar36 = 1;
  local_1b4 = 1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar2;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
  uVar12 = FUN_180093388(&local_178);
  local_178 = uVar12;
  lVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
  if (lVar11 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11,1);
  }
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar12,"0123456789-",&DAT_180327cd4,param_7);
  local_188 = 0;
LAB_18024dba5:
  uVar2 = local_178;
  uVar20 = local_188;
  lVar11 = 0;
  puVar24 = auStack_1e8;
  if (3 < local_188) goto LAB_18024f22b;
  cVar7 = local_190[local_188];
  if (cVar7 == ' ') {
LAB_18024dbd5:
    if (local_188 != 3) {
      bVar4 = false;
LAB_18024dbf0:
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18024f0b0:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024f0b0;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_18024f0fd:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024f0fd;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
        if (*param_4 == 0) goto LAB_18024f116;
      }
      else if (*param_4 != 0) goto LAB_18024f116;
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_18024f189:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024f189;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                        (uVar2,0x48,*(undefined2 *)((longlong)param_3 + 10));
      if (cVar7 == '\0') goto LAB_18024f116;
      bVar4 = true;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_18024f20e:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024f1ec:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar37 = **(int **)(lVar11 + 0x50);
          if (iVar37 < 1) goto LAB_18024f1ec;
          **(int **)(lVar11 + 0x50) = iVar37 + -1;
          psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
          sVar9 = *psVar33;
        }
        if (sVar9 == -1) goto LAB_18024f20e;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_18024dbf0;
    }
    goto LAB_18024e665;
  }
  if (cVar7 == '$') {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_120);
    uVar36 = uVar36 | 0x80;
    local_1b4 = uVar36;
    if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18024ec49:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024ec49;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_18024ec97:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024ec97;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 != 0) {
        if (*param_4 == 0) goto LAB_18024ecb4;
        goto LAB_18024ed1e;
      }
      if (*param_4 == 0) goto LAB_18024ed1e;
LAB_18024ecb4:
      pppppppsVar15 = (short *******)local_120;
      if (7 < local_108) {
        pppppppsVar15 = local_120[0];
      }
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_18024ed04:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024ed04;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar15) goto LAB_18024ed1e;
    }
    else {
LAB_18024ed1e:
      if ((uVar20 != 3) || (1 < local_150)) goto LAB_18024eeae;
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18024ed78:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024ed78;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_18024edc6:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024edc6;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
        if (*param_4 != 0) {
LAB_18024ede3:
          if ((char)param_3[1] == '\0') {
            if (lVar11 == 0) {
LAB_18024ee25:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_18024ee25;
              *(short *)((longlong)param_3 + 10) = sVar9;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar15 = (short *******)local_120;
          if (7 < local_108) {
            pppppppsVar15 = local_120[0];
          }
          if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar15) goto LAB_18024eeae;
        }
      }
      else if (*param_4 == 0) goto LAB_18024ede3;
    }
    if (((local_110 != 0) && (7 < local_108)) && (DAT_18034e408 != '\0')) {
      psVar33 = (short *)((longlong)local_120[0] + (local_110 + 1) * 2);
      psVar23 = (short *)(local_108 * 2 + 9 + (longlong)local_120[0] & 0xfffffffffffffff8);
      psVar30 = psVar23;
      if (psVar33 <= psVar23) {
        psVar30 = psVar33;
      }
      psVar33 = (short *)((longlong)local_120[0] + 2);
      if (psVar23 < (short *)((longlong)local_120[0] + 2)) {
        psVar33 = psVar23;
      }
      _guard_check_icall(local_120[0],psVar23,psVar30,psVar33);
    }
    local_110 = 0;
    pppppppsVar15 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar15 = local_120[0];
    }
    *(short *)pppppppsVar15 = 0;
LAB_18024eeae:
    pppppppsVar15 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar15 = local_120[0];
    }
LAB_18024eec2:
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_18024ef03:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_18024ef03;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_18024ef51:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_18024ef51;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_18024ef6a;
    }
    else if (*param_4 != 0) goto LAB_18024ef6a;
    pppppppsVar17 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar17 = local_120[0];
    }
    if (pppppppsVar15 == (short *******)((longlong)pppppppsVar17 + local_110 * 2))
    goto LAB_18024ef6a;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_18024f00b:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11);
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_18024f00b;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar15) goto LAB_18024ef6a;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18024f07f:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024f05a:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar37 = **(int **)(lVar11 + 0x50);
        if (iVar37 < 1) goto LAB_18024f05a;
        **(int **)(lVar11 + 0x50) = iVar37 + -1;
        psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
        sVar9 = *psVar33;
      }
      if (sVar9 == -1) goto LAB_18024f07f;
      *(undefined1 *)(param_3 + 1) = 0;
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
    }
    goto LAB_18024eec2;
  }
  if (cVar7 != '+') {
    if (cVar7 == 'v') {
      local_198 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_100);
      local_1b4 = uVar36 | 0x200;
      local_194 = local_1b4;
      puVar5 = local_1a8[0];
      if ((local_f0 != 0) &&
         (sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10), puVar5 = local_1a8[0],
         sVar9 != 0)) {
        pppppppbVar18 = (byte *******)local_100;
        if (0xf < local_e8) {
          pppppppbVar18 = local_100[0];
        }
        if (*(byte *)pppppppbVar18 < 0x7f) {
          uStack_138 = 0;
          local_130 = 0;
          local_128 = 0xf;
          local_140 = (char *******)0x0;
          FUN_180003bf2(&local_140,0);
          puVar10 = local_1a8[0];
LAB_18024dcd0:
          if ((char)param_3[1] == '\0') {
            lVar14 = *param_3;
            if (lVar14 == 0) {
LAB_18024dd11:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_18024dd11;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          if ((char)param_4[1] == '\0') {
            lVar14 = *param_4;
            if (lVar14 == 0) {
LAB_18024dd5f:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_18024dd5f;
              *(short *)((longlong)param_4 + 10) = sVar8;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar14 = *param_3;
          if (lVar14 == 0) {
            if (*param_4 == 0) goto LAB_18024dd80;
          }
          else if (*param_4 != 0) goto LAB_18024dd80;
          if ((char)param_3[1] == '\0') {
            if (lVar14 == 0) {
LAB_18024de70:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_18024de70;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          lVar14 = thunk_FUN_18023b000(param_7,param_7 + 0x16,
                                       *(undefined2 *)((longlong)param_3 + 10));
          uVar20 = lVar14 - param_7 >> 1;
          if (uVar20 < 10) {
            FUN_180003bf2(puVar10,"0123456789-"[uVar20]);
            pppppppcVar13 = (char *******)&local_140;
            if (0xf < local_128) {
              pppppppcVar13 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar13 + lVar11) != '\x7f') {
              pppppppcVar13 = (char *******)&local_140;
              if (0xf < local_128) {
                pppppppcVar13 = local_140;
              }
              *(char *)((longlong)pppppppcVar13 + lVar11) =
                   *(char *)((longlong)pppppppcVar13 + lVar11) + '\x01';
            }
          }
          else {
            pppppppcVar13 = (char *******)&local_140;
            if (0xf < local_128) {
              pppppppcVar13 = local_140;
            }
            if (*(char *)((longlong)pppppppcVar13 + lVar11) == '\0') goto LAB_18024dd80;
            if ((char)param_3[1] == '\0') {
              lVar14 = *param_3;
              if (lVar14 == 0) {
LAB_18024df33:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar14 + 0x50) < 1)) {
                  sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
                }
                if (sVar8 == -1) goto LAB_18024df33;
                *(short *)((longlong)param_3 + 10) = sVar8;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if (*(short *)((longlong)param_3 + 10) != sVar9) goto LAB_18024dd80;
            FUN_180003bf2(&local_140,0);
            lVar11 = lVar11 + 1;
          }
          lVar14 = *param_3;
          if (lVar14 == 0) {
LAB_18024dfac:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_18024df89:
              sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              iVar37 = **(int **)(lVar14 + 0x50);
              if (iVar37 < 1) goto LAB_18024df89;
              **(int **)(lVar14 + 0x50) = iVar37 + -1;
              psVar33 = (short *)**(longlong **)(lVar14 + 0x38);
              **(longlong **)(lVar14 + 0x38) = (longlong)(psVar33 + 1);
              sVar8 = *psVar33;
            }
            if (sVar8 == -1) goto LAB_18024dfac;
            *(undefined1 *)(param_3 + 1) = 0;
          }
          goto LAB_18024dcd0;
        }
      }
LAB_18024e1c2:
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18024e203:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024e203;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_18024e24d:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024e24d;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      iVar37 = local_198;
      uVar36 = local_194;
      if (lVar11 == 0) {
        if (*param_4 == 0) goto LAB_18024e165;
      }
      else if (*param_4 != 0) goto LAB_18024e165;
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_18024e2b5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18024e2b5;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = thunk_FUN_18023b000(param_7,param_7 + 0x16,*(undefined2 *)((longlong)param_3 + 10));
      uVar20 = lVar11 - param_7 >> 1;
      uVar36 = local_194;
      iVar37 = local_198;
      if (9 < uVar20) goto LAB_18024e165;
      FUN_180003bf2(puVar5,"0123456789-"[uVar20]);
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_18024e342:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024e31f:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar37 = **(int **)(lVar11 + 0x50);
          if (iVar37 < 1) goto LAB_18024e31f;
          **(int **)(lVar11 + 0x50) = iVar37 + -1;
          psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
          sVar9 = *psVar33;
        }
        if (sVar9 == -1) goto LAB_18024e342;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_18024e1c2;
    }
    if (cVar7 == 'x') goto LAB_18024dbd5;
    goto LAB_18024e665;
  }
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18024e6ce:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18024e6ce;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_18024e71c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18024e71c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) {
LAB_18024e740:
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_80);
      uVar35 = uVar36 | 0x102;
      local_1b4 = uVar35;
      if (local_70 == 0) {
LAB_18024e7f6:
        bVar4 = false;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_c0);
        uVar35 = uVar36 | 0x906;
        local_1b4 = uVar35;
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_18024e7d4:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_18024e7d4;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppsVar15 = (short *******)local_c0;
        if (7 < local_a8) {
          pppppppsVar15 = local_c0[0];
        }
        if (*(short *)pppppppsVar15 != *(short *)((longlong)param_3 + 10)) goto LAB_18024e7f6;
        bVar4 = true;
      }
      if ((uVar35 & 4) != 0) {
        uVar35 = uVar35 & 0xfffffffb;
        local_1b4 = uVar35;
        FUN_180248010(local_c0);
      }
      if ((uVar35 & 2) != 0) {
        uVar35 = uVar35 & 0xfffffffd;
        local_1b4 = uVar35;
        FUN_180248010(local_80);
      }
      if (bVar4) {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18024e881:
          *param_3 = 0;
          uVar6 = 1;
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024e864:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar37 = **(int **)(lVar11 + 0x50);
            if (iVar37 < 1) goto LAB_18024e864;
            **(int **)(lVar11 + 0x50) = iVar37 + -1;
            psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
            sVar9 = *psVar33;
          }
          if (sVar9 == -1) goto LAB_18024e881;
          uVar6 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar6;
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_e0);
        uVar36 = uVar35 | 0x400;
        local_1b4 = uVar36;
        if (7 < local_148) {
          if (DAT_18034e408 != '\0') {
            psVar33 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
            psVar30 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
            psVar22 = (short *)((longlong)psVar33 + 7U & 0xfffffffffffffff8);
            psVar23 = psVar22;
            if (psVar30 <= psVar22) {
              psVar23 = psVar30;
            }
            if (psVar22 < psVar33) {
              psVar33 = psVar22;
            }
            _guard_check_icall(local_160,psVar22,psVar23,psVar33);
          }
          FUN_18000171c(&local_160,local_160,local_148);
        }
        local_150 = 0;
        local_148 = 7;
        local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
        FUN_180247e00(&local_160,local_e0);
        FUN_180248010(local_e0);
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_e0);
        uVar36 = uVar35 | 0x1008;
        local_1b4 = uVar36;
        if (local_d0 == 0) {
LAB_18024e9ee:
          bVar4 = false;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_a0);
          uVar36 = uVar35 | 0x3018;
          local_1b4 = uVar36;
          if ((char)param_3[1] == '\0') {
            lVar11 = *param_3;
            if (lVar11 == 0) {
LAB_18024e9c8:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_18024e9c8;
              *(short *)((longlong)param_3 + 10) = sVar9;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar15 = (short *******)local_a0;
          if (7 < local_88) {
            pppppppsVar15 = local_a0[0];
          }
          if (*(short *)pppppppsVar15 != *(short *)((longlong)param_3 + 10)) goto LAB_18024e9ee;
          bVar4 = true;
        }
        if ((uVar36 & 0x10) != 0) {
          uVar36 = uVar36 & 0xffffffef;
          local_1b4 = uVar36;
          FUN_180248010(local_a0);
        }
        if ((uVar36 & 8) != 0) {
          uVar36 = uVar36 & 0xfffffff7;
          local_1b4 = uVar36;
          FUN_180248010(local_e0);
        }
        if (bVar4) {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_18024ea79:
            *param_3 = 0;
            uVar6 = 1;
          }
          else {
            if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024ea5c:
              sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              iVar37 = **(int **)(lVar11 + 0x50);
              if (iVar37 < 1) goto LAB_18024ea5c;
              **(int **)(lVar11 + 0x50) = iVar37 + -1;
              psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
              **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
              sVar9 = *psVar33;
            }
            if (sVar9 == -1) goto LAB_18024ea79;
            uVar6 = 0;
          }
          *(undefined1 *)(param_3 + 1) = uVar6;
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_e0);
          uVar36 = uVar36 | 0x8000;
          local_1b4 = uVar36;
          if (7 < local_148) {
            if (DAT_18034e408 != '\0') {
              psVar33 = (short *)((longlong)local_160 + (local_148 + 1) * 2);
              psVar30 = (short *)((longlong)local_160 + (local_150 + 1) * 2);
              psVar22 = (short *)((longlong)psVar33 + 7U & 0xfffffffffffffff8);
              psVar23 = psVar22;
              if (psVar30 <= psVar22) {
                psVar23 = psVar30;
              }
              if (psVar22 < psVar33) {
                psVar33 = psVar22;
              }
              _guard_check_icall(local_160,psVar22,psVar23,psVar33);
            }
            FUN_18000171c(&local_160,local_160,local_148);
          }
          local_150 = 0;
          local_148 = 7;
          local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
          FUN_180247e00(&local_160,local_e0);
          FUN_180248010(local_e0);
          local_1b0[0] = 1;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_60);
          local_1b4 = uVar36 | 0x4020;
          if (local_50 == 0) {
LAB_18024eb8b:
            bVar4 = false;
          }
          else {
            (*(code *)PTR__guard_dispatch_icall_18038bc80)(puVar10,local_e0);
            local_1b4 = uVar36 | 0x14060;
            if (local_d0 != 0) goto LAB_18024eb8b;
            bVar4 = true;
          }
          uVar36 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar36 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar36;
            FUN_180248010(local_e0);
          }
          if ((uVar36 & 0x20) != 0) {
            uVar36 = uVar36 & 0xffffffdf;
            local_1b4 = uVar36;
            FUN_180248010(local_60);
          }
          if (bVar4) {
            local_1b0[0] = 1;
          }
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_18024e740;
  goto LAB_18024e665;
LAB_18024ef6a:
  pppppppsVar17 = (short *******)local_120;
  if (7 < local_108) {
    pppppppsVar17 = local_120[0];
  }
  local_1b8 = local_1b8 & 0xff;
  if (pppppppsVar15 != (short *******)((longlong)pppppppsVar17 + local_110 * 2)) {
    local_1b8 = 1;
  }
  FUN_180248010(local_120);
  param_7 = local_180;
LAB_18024e665:
  local_188 = uVar20 + 1;
  if ((char)local_1b8 != '\0') goto code_r0x00018024e675;
  goto LAB_18024dba5;
LAB_18024dd80:
  uVar36 = local_194;
  iVar37 = local_198;
  if (lVar11 == 0) {
LAB_18024ddaa:
    uVar20 = (ulonglong)local_1b8;
  }
  else {
    pppppppcVar13 = (char *******)&local_140;
    if (0xf < local_128) {
      pppppppcVar13 = local_140;
    }
    if ('\0' < *(char *)((longlong)pppppppcVar13 + lVar11)) {
      lVar11 = lVar11 + 1;
      goto LAB_18024ddaa;
    }
    uVar20 = CONCAT71((int7)((ulonglong)pppppppcVar13 >> 8),1);
    local_1b8 = (uint)uVar20;
  }
  pppppppbVar18 = (byte *******)local_100;
  if (0xf < local_e8) {
    pppppppbVar18 = local_100[0];
  }
  if ((char)uVar20 != '\0') {
LAB_18024dfcc:
    if (0xf < local_128) {
      if (DAT_18034e408 != '\0') {
        pcVar31 = (char *)(local_128 + 1 + (longlong)local_140);
        pcVar34 = (char *)((longlong)local_140 + local_130 + 1);
        pcVar19 = (char *)((ulonglong)(pcVar31 + 7) & 0xfffffffffffffff8);
        pcVar29 = pcVar19;
        if (pcVar34 <= pcVar19) {
          pcVar29 = pcVar34;
        }
        if (pcVar19 < pcVar31) {
          pcVar31 = pcVar19;
        }
        _guard_check_icall(local_140,pcVar19,pcVar29,pcVar31);
      }
      uVar20 = local_128 + 1;
      pppppppcVar13 = local_140;
      if (0xfff < uVar20) {
        pppppppcVar13 = (char *******)local_140[-1];
        if ((char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar13)))
        goto LAB_18024f21d;
        uVar20 = local_128 + 0x28;
      }
      thunk_FUN_1802464a0(pppppppcVar13,uVar20);
    }
    local_130 = 0;
    local_128 = 0xf;
    local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
    puVar10 = local_1a8[1];
    uVar20 = local_188;
    if (local_e8 < 0x10) goto LAB_18024e665;
    if (DAT_18034e408 != '\0') {
      pbVar32 = (byte *)((longlong)local_100[0] + local_e8 + 1);
      pbVar16 = (byte *)((longlong)local_100[0] + local_f0 + 1);
      pbVar21 = (byte *)((ulonglong)(pbVar32 + 7) & 0xfffffffffffffff8);
      pbVar28 = pbVar21;
      if (pbVar16 <= pbVar21) {
        pbVar28 = pbVar16;
      }
      if (pbVar21 < pbVar32) {
        pbVar32 = pbVar21;
      }
      _guard_check_icall(local_100[0],pbVar21,pbVar28,pbVar32);
    }
    pppppppbVar18 = local_100[0];
    if ((local_e8 + 1 < 0x1000) ||
       (pppppppbVar18 = (byte *******)local_100[0][-1], puVar24 = auStack_1e8,
       (byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar18)) < (byte *)0x20)) {
      thunk_FUN_1802464a0(pppppppbVar18);
      puVar10 = local_1a8[1];
      uVar20 = local_188;
      goto LAB_18024e665;
    }
    goto LAB_18024f224;
  }
  while ((lVar11 != 0 && (bVar1 = *(byte *)pppppppbVar18, bVar1 != 0x7f))) {
    lVar11 = lVar11 + -1;
    if (lVar11 != 0) {
      pppppppcVar13 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar13 = local_140;
      }
      if (bVar1 == *(byte *)((longlong)pppppppcVar13 + lVar11)) goto LAB_18024de02;
LAB_18024dfc7:
      local_1b8 = CONCAT31(local_1b8._1_3_,1);
      goto LAB_18024dfcc;
    }
LAB_18024de02:
    if (lVar11 == 0) {
      pppppppcVar13 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar13 = local_140;
      }
      if ((char)bVar1 < *(char *)pppppppcVar13) goto LAB_18024dfc7;
    }
    if ('\0' < (char)*(byte *)((longlong)pppppppbVar18 + 1)) {
      pppppppbVar18 = (byte *******)((longlong)pppppppbVar18 + 1);
    }
  }
  if (0xf < local_128) {
    if (DAT_18034e408 != '\0') {
      pcVar31 = (char *)(local_128 + 1 + (longlong)local_140);
      pcVar34 = (char *)((longlong)local_140 + local_130 + 1);
      pcVar19 = (char *)((ulonglong)(pcVar31 + 7) & 0xfffffffffffffff8);
      pcVar29 = pcVar19;
      if (pcVar34 <= pcVar19) {
        pcVar29 = pcVar34;
      }
      if (pcVar19 < pcVar31) {
        pcVar31 = pcVar19;
      }
      _guard_check_icall(local_140,pcVar19,pcVar29,pcVar31);
    }
    uVar20 = local_128 + 1;
    pppppppcVar13 = local_140;
    if (0xfff < uVar20) {
      pppppppcVar13 = (char *******)local_140[-1];
      if ((char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar13))) {
LAB_18024f21d:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar24 = auStack_1e0;
        goto LAB_18024f224;
      }
      uVar20 = local_128 + 0x28;
    }
    thunk_FUN_1802464a0(pppppppcVar13,uVar20);
  }
LAB_18024e165:
  iVar26 = 0;
  iVar27 = 0;
  sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18024e36b:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_18024e36b;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_18024e3bd:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_18024e3bd;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    iVar27 = iVar26;
    if (*param_4 != 0) {
LAB_18024e3e6:
      iVar27 = iVar26;
      if (sVar9 != 0) {
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_18024e431:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar8 == -1) goto LAB_18024e431;
            *(short *)((longlong)param_3 + 10) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) == sVar9) {
LAB_18024e446:
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_18024e4a0:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024e479:
              sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              iVar27 = **(int **)(lVar11 + 0x50);
              if (iVar27 < 1) goto LAB_18024e479;
              **(int **)(lVar11 + 0x50) = iVar27 + -1;
              psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
              **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
              sVar9 = *psVar33;
            }
            if (sVar9 == -1) goto LAB_18024e4a0;
            *(undefined1 *)(param_3 + 1) = 0;
            FUN_18024d310(param_3);
          }
          if ((char)param_4[1] == '\0') {
            lVar11 = *param_4;
            if (lVar11 == 0) {
LAB_18024e4f0:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_18024e4f0;
              *(short *)((longlong)param_4 + 10) = sVar9;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar11 = *param_3;
          iVar27 = iVar26;
          if (lVar11 != 0) {
            if (*param_4 != 0) goto LAB_18024e505;
LAB_18024e52f:
            if (iVar37 <= iVar26) goto LAB_18024e50f;
            if ((char)param_3[1] == '\0') {
              if (lVar11 == 0) {
LAB_18024e576:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar11 + 0x50) < 1)) {
                  sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
                }
                if (sVar9 == -1) goto LAB_18024e576;
                *(short *)((longlong)param_3 + 10) = sVar9;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar11 = thunk_FUN_18023b000(param_7,param_7 + 0x16,
                                         *(undefined2 *)((longlong)param_3 + 10));
            uVar20 = lVar11 - param_7 >> 1;
            if (9 < uVar20) goto LAB_18024e50a;
            FUN_180003bf2(local_1a8[0],"0123456789-"[uVar20]);
            iVar26 = iVar26 + 1;
            goto LAB_18024e446;
          }
          if (*param_4 != 0) goto LAB_18024e52f;
LAB_18024e505:
          if (iVar37 <= iVar26) goto LAB_18024e50f;
LAB_18024e50a:
          local_1b8 = CONCAT31(local_1b8._1_3_,1);
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_18024e3e6;
LAB_18024e50f:
  puVar10 = local_1a8[0];
  if (local_1a8[0][2] == 0) {
    local_1b8 = CONCAT31(local_1b8._1_3_,1);
  }
  else {
    for (; iVar27 < iVar37; iVar27 = iVar27 + 1) {
      FUN_180003bf2(puVar10,0x30);
      param_7 = local_180;
    }
  }
  puVar10 = local_1a8[1];
  uVar20 = local_188;
  if (0xf < local_e8) {
    if (DAT_18034e408 != '\0') {
      pbVar32 = (byte *)((longlong)local_100[0] + local_e8 + 1);
      pbVar21 = (byte *)((longlong)local_100[0] + local_f0 + 1);
      pbVar16 = (byte *)((ulonglong)(pbVar32 + 7) & 0xfffffffffffffff8);
      pbVar28 = pbVar16;
      if (pbVar21 <= pbVar16) {
        pbVar28 = pbVar21;
      }
      if (pbVar16 < pbVar32) {
        pbVar32 = pbVar16;
      }
      _guard_check_icall(local_100[0],pbVar16,pbVar28,pbVar32);
    }
    uVar20 = local_e8 + 1;
    pppppppbVar18 = local_100[0];
    if (0xfff < uVar20) {
      pppppppbVar18 = (byte *******)local_100[0][-1];
      puVar24 = auStack_1e8;
      if ((byte *)0x1f < (byte *)((longlong)local_100[0] + (-8 - (longlong)pppppppbVar18))) {
LAB_18024f224:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar24 = puVar24 + 8;
LAB_18024f22b:
        puVar25 = puVar24;
        if (local_150 < 2) goto LAB_18024f35d;
        pppppppsVar15 = (short *******)&local_160;
        if (7 < local_148) {
          pppppppsVar15 = local_160;
        }
        goto LAB_18024f250;
      }
      uVar20 = local_e8 + 0x28;
    }
    thunk_FUN_1802464a0(pppppppbVar18,uVar20);
    puVar10 = local_1a8[1];
    uVar20 = local_188;
  }
  goto LAB_18024e665;
LAB_18024f116:
  puVar10 = local_1a8[1];
  param_7 = local_180;
  if ((local_190[uVar20] == ' ') && (local_1b8 = local_1b8 & 0xff, !bVar4)) {
    local_1b8 = 1;
  }
  goto LAB_18024e665;
code_r0x00018024e675:
  FUN_18023f1d0(local_1a8[0],0);
  goto LAB_18024f37d;
LAB_18024f250:
  pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
  pppppppsVar17 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar17 = local_160;
  }
  if (pppppppsVar15 != (short *******)((longlong)pppppppsVar17 + local_150 * 2)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18024f27d;
      FUN_18024d310(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18024f28c;
      FUN_18024d310(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_18024f298;
    }
    else if (*param_4 != 0) goto LAB_18024f298;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18024f2df;
      FUN_18024d310(param_3);
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar15) goto LAB_18024f298;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18024f344:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18024f31b:
        *(undefined8 *)(puVar25 + -8) = 0x18024f328;
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar37 = **(int **)(lVar11 + 0x50);
        if (iVar37 < 1) goto LAB_18024f31b;
        **(int **)(lVar11 + 0x50) = iVar37 + -1;
        psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
        sVar9 = *psVar33;
      }
      if (sVar9 == -1) goto LAB_18024f344;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_18024f250;
  }
LAB_18024f298:
  pppppppsVar17 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar17 = local_160;
  }
  if (pppppppsVar15 == (short *******)((longlong)pppppppsVar17 + local_150 * 2)) {
LAB_18024f35d:
    if (puVar25[0x38] != '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x18024f37c;
      FUN_18007d9c0(*(undefined8 *)(puVar25 + 0x40),0,1,0x2d);
    }
  }
  else {
    *(undefined8 *)(puVar25 + -8) = 0x18024f2c6;
    FUN_18023f1d0(*(undefined8 *)(puVar25 + 0x40),0);
  }
LAB_18024f37d:
  *(undefined8 *)(puVar25 + -8) = 0x18024f386;
  FUN_180248010(&local_160);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar25 + -8) = &UNK_18024f398;
  FUN_1802396d0(local_40 ^ (ulonglong)puVar25);
}

