/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e3f50 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1400e3f50(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
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
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_1e8;
  local_180 = param_7;
  local_1b4 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_1a8[0] = param_2;
  local_170 = uVar2;
  local_168 = param_2;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  if (param_5 == '\0') {
    puVar10 = (undefined8 *)FUN_1400e73f0(&local_178);
  }
  else {
    puVar10 = (undefined8 *)FUN_1400e76d0(&local_178);
  }
  local_1a8[1] = puVar10;
  lVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  puVar25 = auStack_1e8;
  if (lVar11 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11,1);
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_1b0[0] = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = 7;
  local_160 = (short *******)0x0;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_190);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar36 = 1;
  local_1b4 = 1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar2;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  uVar12 = FUN_1400629e2(&local_178);
  local_178 = uVar12;
  lVar11 = (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar2);
  if (lVar11 != 0) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11,1);
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(uVar12,"0123456789-",&DAT_1401657c4,param_7);
  local_188 = 0;
LAB_1400e4105:
  uVar2 = local_178;
  uVar20 = local_188;
  lVar11 = 0;
  puVar24 = auStack_1e8;
  if (3 < local_188) goto LAB_1400e578b;
  cVar7 = local_190[local_188];
  if (cVar7 == ' ') {
LAB_1400e4135:
    if (local_188 != 3) {
      bVar4 = false;
LAB_1400e4150:
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400e5610:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e5610;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1400e565d:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e565d;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
        if (*param_4 == 0) goto LAB_1400e5676;
      }
      else if (*param_4 != 0) goto LAB_1400e5676;
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1400e56e9:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e56e9;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      cVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                        (uVar2,0x48,*(undefined2 *)((longlong)param_3 + 10));
      if (cVar7 == '\0') goto LAB_1400e5676;
      bVar4 = true;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400e576e:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e574c:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar37 = **(int **)(lVar11 + 0x50);
          if (iVar37 < 1) goto LAB_1400e574c;
          **(int **)(lVar11 + 0x50) = iVar37 + -1;
          psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
          sVar9 = *psVar33;
        }
        if (sVar9 == -1) goto LAB_1400e576e;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1400e4150;
    }
    goto LAB_1400e4bc5;
  }
  if (cVar7 == '$') {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_120);
    uVar36 = uVar36 | 0x80;
    local_1b4 = uVar36;
    if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400e51a9:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e51a9;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1400e51f7:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e51f7;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 != 0) {
        if (*param_4 == 0) goto LAB_1400e5214;
        goto LAB_1400e527e;
      }
      if (*param_4 == 0) goto LAB_1400e527e;
LAB_1400e5214:
      pppppppsVar15 = (short *******)local_120;
      if (7 < local_108) {
        pppppppsVar15 = local_120[0];
      }
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1400e5264:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e5264;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar15) goto LAB_1400e527e;
    }
    else {
LAB_1400e527e:
      if ((uVar20 != 3) || (1 < local_150)) goto LAB_1400e540e;
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400e52d8:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e52d8;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1400e5326:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e5326;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
        if (*param_4 != 0) {
LAB_1400e5343:
          if ((char)param_3[1] == '\0') {
            if (lVar11 == 0) {
LAB_1400e5385:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_1400e5385;
              *(short *)((longlong)param_3 + 10) = sVar9;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar15 = (short *******)local_120;
          if (7 < local_108) {
            pppppppsVar15 = local_120[0];
          }
          if (*(short *)((longlong)param_3 + 10) == *(short *)pppppppsVar15) goto LAB_1400e540e;
        }
      }
      else if (*param_4 == 0) goto LAB_1400e5343;
    }
    if (((local_110 != 0) && (7 < local_108)) && (DAT_140166098 != '\0')) {
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
LAB_1400e540e:
    pppppppsVar15 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar15 = local_120[0];
    }
LAB_1400e5422:
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400e5463:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400e5463;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar11 = *param_4;
      if (lVar11 == 0) {
LAB_1400e54b1:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400e54b1;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar11 = *param_3;
    if (lVar11 == 0) {
      if (*param_4 == 0) goto LAB_1400e54ca;
    }
    else if (*param_4 != 0) goto LAB_1400e54ca;
    pppppppsVar17 = (short *******)local_120;
    if (7 < local_108) {
      pppppppsVar17 = local_120[0];
    }
    if (pppppppsVar15 == (short *******)((longlong)pppppppsVar17 + local_110 * 2))
    goto LAB_1400e54ca;
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_1400e556b:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400e556b;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar15) goto LAB_1400e54ca;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400e55df:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e55ba:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar37 = **(int **)(lVar11 + 0x50);
        if (iVar37 < 1) goto LAB_1400e55ba;
        **(int **)(lVar11 + 0x50) = iVar37 + -1;
        psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
        sVar9 = *psVar33;
      }
      if (sVar9 == -1) goto LAB_1400e55df;
      *(undefined1 *)(param_3 + 1) = 0;
      pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
    }
    goto LAB_1400e5422;
  }
  if (cVar7 != '+') {
    if (cVar7 == 'v') {
      local_198 = (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10);
      (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_100);
      local_1b4 = uVar36 | 0x200;
      local_194 = local_1b4;
      puVar5 = local_1a8[0];
      if ((local_f0 != 0) &&
         (sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10), puVar5 = local_1a8[0],
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
          FUN_14000cf50(&local_140,0);
          puVar10 = local_1a8[0];
LAB_1400e4230:
          if ((char)param_3[1] == '\0') {
            lVar14 = *param_3;
            if (lVar14 == 0) {
LAB_1400e4271:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1400e4271;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          if ((char)param_4[1] == '\0') {
            lVar14 = *param_4;
            if (lVar14 == 0) {
LAB_1400e42bf:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1400e42bf;
              *(short *)((longlong)param_4 + 10) = sVar8;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar14 = *param_3;
          if (lVar14 == 0) {
            if (*param_4 == 0) goto LAB_1400e42e0;
          }
          else if (*param_4 != 0) goto LAB_1400e42e0;
          if ((char)param_3[1] == '\0') {
            if (lVar14 == 0) {
LAB_1400e43d0:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar14 + 0x50) < 1)) {
                sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
              }
              if (sVar8 == -1) goto LAB_1400e43d0;
              *(short *)((longlong)param_3 + 10) = sVar8;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          lVar14 = thunk_FUN_1400dabb0(param_7,param_7 + 0x16,
                                       *(undefined2 *)((longlong)param_3 + 10));
          uVar20 = lVar14 - param_7 >> 1;
          if (uVar20 < 10) {
            FUN_14000cf50(puVar10,"0123456789-"[uVar20]);
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
            if (*(char *)((longlong)pppppppcVar13 + lVar11) == '\0') goto LAB_1400e42e0;
            if ((char)param_3[1] == '\0') {
              lVar14 = *param_3;
              if (lVar14 == 0) {
LAB_1400e4493:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar14 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar14 + 0x50) < 1)) {
                  sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
                }
                else {
                  sVar8 = *(short *)**(undefined8 **)(lVar14 + 0x38);
                }
                if (sVar8 == -1) goto LAB_1400e4493;
                *(short *)((longlong)param_3 + 10) = sVar8;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if (*(short *)((longlong)param_3 + 10) != sVar9) goto LAB_1400e42e0;
            FUN_14000cf50(&local_140,0);
            lVar11 = lVar11 + 1;
          }
          lVar14 = *param_3;
          if (lVar14 == 0) {
LAB_1400e450c:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar14 + 0x38) == 0) {
LAB_1400e44e9:
              sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              iVar37 = **(int **)(lVar14 + 0x50);
              if (iVar37 < 1) goto LAB_1400e44e9;
              **(int **)(lVar14 + 0x50) = iVar37 + -1;
              psVar33 = (short *)**(longlong **)(lVar14 + 0x38);
              **(longlong **)(lVar14 + 0x38) = (longlong)(psVar33 + 1);
              sVar8 = *psVar33;
            }
            if (sVar8 == -1) goto LAB_1400e450c;
            *(undefined1 *)(param_3 + 1) = 0;
          }
          goto LAB_1400e4230;
        }
      }
LAB_1400e4722:
      if ((char)param_3[1] == '\0') {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400e4763:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e4763;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1400e47ad:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e47ad;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar11 = *param_3;
      iVar37 = local_198;
      uVar36 = local_194;
      if (lVar11 == 0) {
        if (*param_4 == 0) goto LAB_1400e46c5;
      }
      else if (*param_4 != 0) goto LAB_1400e46c5;
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1400e4815:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar11 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400e4815;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = thunk_FUN_1400dabb0(param_7,param_7 + 0x16,*(undefined2 *)((longlong)param_3 + 10));
      uVar20 = lVar11 - param_7 >> 1;
      uVar36 = local_194;
      iVar37 = local_198;
      if (9 < uVar20) goto LAB_1400e46c5;
      FUN_14000cf50(puVar5,"0123456789-"[uVar20]);
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400e48a2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e487f:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar37 = **(int **)(lVar11 + 0x50);
          if (iVar37 < 1) goto LAB_1400e487f;
          **(int **)(lVar11 + 0x50) = iVar37 + -1;
          psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
          sVar9 = *psVar33;
        }
        if (sVar9 == -1) goto LAB_1400e48a2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1400e4722;
    }
    if (cVar7 == 'x') goto LAB_1400e4135;
    goto LAB_1400e4bc5;
  }
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400e4c2e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400e4c2e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400e4c7c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400e4c7c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) {
LAB_1400e4ca0:
      (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_80);
      uVar35 = uVar36 | 0x102;
      local_1b4 = uVar35;
      if (local_70 == 0) {
LAB_1400e4d56:
        bVar4 = false;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_c0);
        uVar35 = uVar36 | 0x906;
        local_1b4 = uVar35;
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_1400e4d34:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar9 == -1) goto LAB_1400e4d34;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppsVar15 = (short *******)local_c0;
        if (7 < local_a8) {
          pppppppsVar15 = local_c0[0];
        }
        if (*(short *)pppppppsVar15 != *(short *)((longlong)param_3 + 10)) goto LAB_1400e4d56;
        bVar4 = true;
      }
      if ((uVar35 & 4) != 0) {
        uVar35 = uVar35 & 0xfffffffb;
        local_1b4 = uVar35;
        FUN_1400de380(local_c0);
      }
      if ((uVar35 & 2) != 0) {
        uVar35 = uVar35 & 0xfffffffd;
        local_1b4 = uVar35;
        FUN_1400de380(local_80);
      }
      if (bVar4) {
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400e4de1:
          *param_3 = 0;
          uVar6 = 1;
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e4dc4:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar37 = **(int **)(lVar11 + 0x50);
            if (iVar37 < 1) goto LAB_1400e4dc4;
            **(int **)(lVar11 + 0x50) = iVar37 + -1;
            psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
            sVar9 = *psVar33;
          }
          if (sVar9 == -1) goto LAB_1400e4de1;
          uVar6 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar6;
        (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_e0);
        uVar36 = uVar35 | 0x400;
        local_1b4 = uVar36;
        if (7 < local_148) {
          if (DAT_140166098 != '\0') {
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
          FUN_140008b72(&local_160,local_160,local_148);
        }
        local_150 = 0;
        local_148 = 7;
        local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
        FUN_1400de170(&local_160,local_e0);
        FUN_1400de380(local_e0);
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_e0);
        uVar36 = uVar35 | 0x1008;
        local_1b4 = uVar36;
        if (local_d0 == 0) {
LAB_1400e4f4e:
          bVar4 = false;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_a0);
          uVar36 = uVar35 | 0x3018;
          local_1b4 = uVar36;
          if ((char)param_3[1] == '\0') {
            lVar11 = *param_3;
            if (lVar11 == 0) {
LAB_1400e4f28:
              *param_3 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_1400e4f28;
              *(short *)((longlong)param_3 + 10) = sVar9;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppsVar15 = (short *******)local_a0;
          if (7 < local_88) {
            pppppppsVar15 = local_a0[0];
          }
          if (*(short *)pppppppsVar15 != *(short *)((longlong)param_3 + 10)) goto LAB_1400e4f4e;
          bVar4 = true;
        }
        if ((uVar36 & 0x10) != 0) {
          uVar36 = uVar36 & 0xffffffef;
          local_1b4 = uVar36;
          FUN_1400de380(local_a0);
        }
        if ((uVar36 & 8) != 0) {
          uVar36 = uVar36 & 0xfffffff7;
          local_1b4 = uVar36;
          FUN_1400de380(local_e0);
        }
        if (bVar4) {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_1400e4fd9:
            *param_3 = 0;
            uVar6 = 1;
          }
          else {
            if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e4fbc:
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              iVar37 = **(int **)(lVar11 + 0x50);
              if (iVar37 < 1) goto LAB_1400e4fbc;
              **(int **)(lVar11 + 0x50) = iVar37 + -1;
              psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
              **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
              sVar9 = *psVar33;
            }
            if (sVar9 == -1) goto LAB_1400e4fd9;
            uVar6 = 0;
          }
          *(undefined1 *)(param_3 + 1) = uVar6;
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_e0);
          uVar36 = uVar36 | 0x8000;
          local_1b4 = uVar36;
          if (7 < local_148) {
            if (DAT_140166098 != '\0') {
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
            FUN_140008b72(&local_160,local_160,local_148);
          }
          local_150 = 0;
          local_148 = 7;
          local_160 = (short *******)((ulonglong)local_160 & 0xffffffffffff0000);
          FUN_1400de170(&local_160,local_e0);
          FUN_1400de380(local_e0);
          local_1b0[0] = 1;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_60);
          local_1b4 = uVar36 | 0x4020;
          if (local_50 == 0) {
LAB_1400e50eb:
            bVar4 = false;
          }
          else {
            (*(code *)PTR__guard_dispatch_icall_140178c20)(puVar10,local_e0);
            local_1b4 = uVar36 | 0x14060;
            if (local_d0 != 0) goto LAB_1400e50eb;
            bVar4 = true;
          }
          uVar36 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar36 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar36;
            FUN_1400de380(local_e0);
          }
          if ((uVar36 & 0x20) != 0) {
            uVar36 = uVar36 & 0xffffffdf;
            local_1b4 = uVar36;
            FUN_1400de380(local_60);
          }
          if (bVar4) {
            local_1b0[0] = 1;
          }
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1400e4ca0;
  goto LAB_1400e4bc5;
LAB_1400e54ca:
  pppppppsVar17 = (short *******)local_120;
  if (7 < local_108) {
    pppppppsVar17 = local_120[0];
  }
  local_1b8 = local_1b8 & 0xff;
  if (pppppppsVar15 != (short *******)((longlong)pppppppsVar17 + local_110 * 2)) {
    local_1b8 = 1;
  }
  FUN_1400de380(local_120);
  param_7 = local_180;
LAB_1400e4bc5:
  local_188 = uVar20 + 1;
  if ((char)local_1b8 != '\0') goto code_r0x0001400e4bd5;
  goto LAB_1400e4105;
LAB_1400e42e0:
  uVar36 = local_194;
  iVar37 = local_198;
  if (lVar11 == 0) {
LAB_1400e430a:
    uVar20 = (ulonglong)local_1b8;
  }
  else {
    pppppppcVar13 = (char *******)&local_140;
    if (0xf < local_128) {
      pppppppcVar13 = local_140;
    }
    if ('\0' < *(char *)((longlong)pppppppcVar13 + lVar11)) {
      lVar11 = lVar11 + 1;
      goto LAB_1400e430a;
    }
    uVar20 = CONCAT71((int7)((ulonglong)pppppppcVar13 >> 8),1);
    local_1b8 = (uint)uVar20;
  }
  pppppppbVar18 = (byte *******)local_100;
  if (0xf < local_e8) {
    pppppppbVar18 = local_100[0];
  }
  if ((char)uVar20 != '\0') {
LAB_1400e452c:
    if (0xf < local_128) {
      if (DAT_140166098 != '\0') {
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
        goto LAB_1400e577d;
        uVar20 = local_128 + 0x28;
      }
      thunk_FUN_1400ddcd0(pppppppcVar13,uVar20);
    }
    local_130 = 0;
    local_128 = 0xf;
    local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
    puVar10 = local_1a8[1];
    uVar20 = local_188;
    if (local_e8 < 0x10) goto LAB_1400e4bc5;
    if (DAT_140166098 != '\0') {
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
      thunk_FUN_1400ddcd0(pppppppbVar18);
      puVar10 = local_1a8[1];
      uVar20 = local_188;
      goto LAB_1400e4bc5;
    }
    goto LAB_1400e5784;
  }
  while ((lVar11 != 0 && (bVar1 = *(byte *)pppppppbVar18, bVar1 != 0x7f))) {
    lVar11 = lVar11 + -1;
    if (lVar11 != 0) {
      pppppppcVar13 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar13 = local_140;
      }
      if (bVar1 == *(byte *)((longlong)pppppppcVar13 + lVar11)) goto LAB_1400e4362;
LAB_1400e4527:
      local_1b8 = CONCAT31(local_1b8._1_3_,1);
      goto LAB_1400e452c;
    }
LAB_1400e4362:
    if (lVar11 == 0) {
      pppppppcVar13 = (char *******)&local_140;
      if (0xf < local_128) {
        pppppppcVar13 = local_140;
      }
      if ((char)bVar1 < *(char *)pppppppcVar13) goto LAB_1400e4527;
    }
    if ('\0' < (char)*(byte *)((longlong)pppppppbVar18 + 1)) {
      pppppppbVar18 = (byte *******)((longlong)pppppppbVar18 + 1);
    }
  }
  if (0xf < local_128) {
    if (DAT_140166098 != '\0') {
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
LAB_1400e577d:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar24 = auStack_1e0;
        goto LAB_1400e5784;
      }
      uVar20 = local_128 + 0x28;
    }
    thunk_FUN_1400ddcd0(pppppppcVar13,uVar20);
  }
LAB_1400e46c5:
  iVar26 = 0;
  iVar27 = 0;
  sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400e48cb:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_1400e48cb;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400e491d:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar8 == -1) goto LAB_1400e491d;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    iVar27 = iVar26;
    if (*param_4 != 0) {
LAB_1400e4946:
      iVar27 = iVar26;
      if (sVar9 != 0) {
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_1400e4991:
            *param_3 = 0;
          }
          else {
            if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar11 + 0x50) < 1)) {
              sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
            }
            if (sVar8 == -1) goto LAB_1400e4991;
            *(short *)((longlong)param_3 + 10) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) == sVar9) {
LAB_1400e49a6:
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_1400e4a00:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e49d9:
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              iVar27 = **(int **)(lVar11 + 0x50);
              if (iVar27 < 1) goto LAB_1400e49d9;
              **(int **)(lVar11 + 0x50) = iVar27 + -1;
              psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
              **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
              sVar9 = *psVar33;
            }
            if (sVar9 == -1) goto LAB_1400e4a00;
            *(undefined1 *)(param_3 + 1) = 0;
            FUN_1400e3870(param_3);
          }
          if ((char)param_4[1] == '\0') {
            lVar11 = *param_4;
            if (lVar11 == 0) {
LAB_1400e4a50:
              *param_4 = 0;
            }
            else {
              if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                 (**(int **)(lVar11 + 0x50) < 1)) {
                sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
              }
              else {
                sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
              }
              if (sVar9 == -1) goto LAB_1400e4a50;
              *(short *)((longlong)param_4 + 10) = sVar9;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar11 = *param_3;
          iVar27 = iVar26;
          if (lVar11 != 0) {
            if (*param_4 != 0) goto LAB_1400e4a65;
LAB_1400e4a8f:
            if (iVar37 <= iVar26) goto LAB_1400e4a6f;
            if ((char)param_3[1] == '\0') {
              if (lVar11 == 0) {
LAB_1400e4ad6:
                *param_3 = 0;
              }
              else {
                if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
                   (**(int **)(lVar11 + 0x50) < 1)) {
                  sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
                }
                else {
                  sVar9 = *(short *)**(undefined8 **)(lVar11 + 0x38);
                }
                if (sVar9 == -1) goto LAB_1400e4ad6;
                *(short *)((longlong)param_3 + 10) = sVar9;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar11 = thunk_FUN_1400dabb0(param_7,param_7 + 0x16,
                                         *(undefined2 *)((longlong)param_3 + 10));
            uVar20 = lVar11 - param_7 >> 1;
            if (9 < uVar20) goto LAB_1400e4a6a;
            FUN_14000cf50(local_1a8[0],"0123456789-"[uVar20]);
            iVar26 = iVar26 + 1;
            goto LAB_1400e49a6;
          }
          if (*param_4 != 0) goto LAB_1400e4a8f;
LAB_1400e4a65:
          if (iVar37 <= iVar26) goto LAB_1400e4a6f;
LAB_1400e4a6a:
          local_1b8 = CONCAT31(local_1b8._1_3_,1);
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1400e4946;
LAB_1400e4a6f:
  puVar10 = local_1a8[0];
  if (local_1a8[0][2] == 0) {
    local_1b8 = CONCAT31(local_1b8._1_3_,1);
  }
  else {
    for (; iVar27 < iVar37; iVar27 = iVar27 + 1) {
      FUN_14000cf50(puVar10,0x30);
      param_7 = local_180;
    }
  }
  puVar10 = local_1a8[1];
  uVar20 = local_188;
  if (0xf < local_e8) {
    if (DAT_140166098 != '\0') {
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
LAB_1400e5784:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar24 = puVar24 + 8;
LAB_1400e578b:
        puVar25 = puVar24;
        if (local_150 < 2) goto LAB_1400e58bd;
        pppppppsVar15 = (short *******)&local_160;
        if (7 < local_148) {
          pppppppsVar15 = local_160;
        }
        goto LAB_1400e57b0;
      }
      uVar20 = local_e8 + 0x28;
    }
    thunk_FUN_1400ddcd0(pppppppbVar18,uVar20);
    puVar10 = local_1a8[1];
    uVar20 = local_188;
  }
  goto LAB_1400e4bc5;
LAB_1400e5676:
  puVar10 = local_1a8[1];
  param_7 = local_180;
  if ((local_190[uVar20] == ' ') && (local_1b8 = local_1b8 & 0xff, !bVar4)) {
    local_1b8 = 1;
  }
  goto LAB_1400e4bc5;
code_r0x0001400e4bd5:
  FUN_1400d4400(local_1a8[0],0);
  goto LAB_1400e58dd;
LAB_1400e57b0:
  pppppppsVar15 = (short *******)((longlong)pppppppsVar15 + 2);
  pppppppsVar17 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar17 = local_160;
  }
  if (pppppppsVar15 != (short *******)((longlong)pppppppsVar17 + local_150 * 2)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x1400e57dd;
      FUN_1400e3870(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x1400e57ec;
      FUN_1400e3870(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_1400e57f8;
    }
    else if (*param_4 != 0) goto LAB_1400e57f8;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x1400e583f;
      FUN_1400e3870(param_3);
    }
    if (*(short *)((longlong)param_3 + 10) != *(short *)pppppppsVar15) goto LAB_1400e57f8;
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400e58a4:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400e587b:
        *(undefined8 *)(puVar25 + -8) = 0x1400e5888;
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar37 = **(int **)(lVar11 + 0x50);
        if (iVar37 < 1) goto LAB_1400e587b;
        **(int **)(lVar11 + 0x50) = iVar37 + -1;
        psVar33 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar33 + 1);
        sVar9 = *psVar33;
      }
      if (sVar9 == -1) goto LAB_1400e58a4;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1400e57b0;
  }
LAB_1400e57f8:
  pppppppsVar17 = (short *******)&local_160;
  if (7 < local_148) {
    pppppppsVar17 = local_160;
  }
  if (pppppppsVar15 == (short *******)((longlong)pppppppsVar17 + local_150 * 2)) {
LAB_1400e58bd:
    if (puVar25[0x38] != '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x1400e58dc;
      FUN_1400247b0(*(undefined8 *)(puVar25 + 0x40),0,1,0x2d);
    }
  }
  else {
    *(undefined8 *)(puVar25 + -8) = 0x1400e5826;
    FUN_1400d4400(*(undefined8 *)(puVar25 + 0x40),0);
  }
LAB_1400e58dd:
  *(undefined8 *)(puVar25 + -8) = 0x1400e58e6;
  FUN_1400de380(&local_160);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar25 + -8) = &UNK_1400e58f8;
  FUN_1400d3720(local_40 ^ (ulonglong)puVar25);
}

