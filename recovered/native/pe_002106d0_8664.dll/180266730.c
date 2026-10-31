/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180266730 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180266730(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  char *******pppppppcVar20;
  char *pcVar21;
  byte *******pppppppbVar22;
  char *******pppppppcVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  char *pcVar26;
  char *pcVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  undefined1 local_1b8;
  uint local_1b4;
  uint local_1b0;
  longlong local_1a8;
  uint local_1a0;
  undefined8 *local_198;
  int local_190;
  char acStack_18c [4];
  undefined8 local_188;
  ulonglong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 *local_168;
  char *******local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  ulonglong local_148;
  char *******local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  ulonglong local_128;
  char *******local_120 [2];
  longlong local_110;
  ulonglong local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  ulonglong local_f0;
  ulonglong local_e8;
  byte *******local_e0 [2];
  longlong local_d0;
  ulonglong local_c8;
  char *******local_c0 [3];
  ulonglong local_a8;
  char *******local_a0 [3];
  ulonglong local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_1e8;
  local_1a8 = param_7;
  local_1b4 = 0;
  uVar4 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_198 = param_2;
  local_170 = uVar4;
  local_168 = param_2;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
  if (param_5 == '\0') {
    uVar15 = FUN_180269930(&local_178);
  }
  else {
    uVar15 = FUN_180269c10(&local_178);
  }
  local_188 = uVar15;
  lVar16 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
  puVar24 = auStack_1e8;
  if (lVar16 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar16,1);
  }
  local_1b0 = local_1b0 & 0xffffff00;
  local_1b8 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0xf;
  local_140 = (char *******)0x0;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,acStack_18c);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar13 = 1;
  local_1b4 = 1;
  uVar4 = *(undefined8 *)(*(longlong *)(param_6 + 0x40) + 8);
  local_170 = uVar4;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
  lVar16 = FUN_18001c0ec(&local_178);
  local_178 = lVar16;
  lVar17 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar4);
  if (lVar17 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar17,1);
  }
  lVar17 = local_1a8;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar16,"0123456789-",&DAT_180327f4c,local_1a8);
  local_180 = 0;
  uVar25 = local_1b8;
LAB_1802668f0:
  lVar16 = local_178;
  uVar29 = local_180;
  if (local_180 < 4) {
    cVar11 = acStack_18c[local_180];
    if (cVar11 == ' ') {
LAB_180266920:
      if (local_180 != 3) {
        bVar7 = false;
LAB_180266931:
        if ((char)param_3[1] == '\0') {
          lVar17 = *param_3;
          if (lVar17 == 0) {
LAB_180267bef:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar17 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_180267bef;
            *(char *)((longlong)param_3 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar17 = *param_4;
          if (lVar17 == 0) {
LAB_180267c3e:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar17 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_180267c3e;
            *(char *)((longlong)param_4 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar17 = *param_3;
        if (lVar17 == 0) {
          if (*param_4 == 0) goto LAB_180267c5a;
        }
        else if (*param_4 != 0) goto LAB_180267c5a;
        if ((char)param_3[1] == '\0') {
          if (lVar17 == 0) {
LAB_180267ce9:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar17 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_180267ce9;
            *(char *)((longlong)param_3 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((*(byte *)(*(longlong *)(lVar16 + 0x18) +
                      (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) & 0x48) == 0)
        goto LAB_180267c5a;
        bVar7 = true;
        lVar17 = *param_3;
        if (lVar17 == 0) {
LAB_180267d56:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar17 + 0x38) == 0) {
LAB_180267d3b:
            uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar17 + 0x50);
            if (iVar28 < 1) goto LAB_180267d3b;
            **(int **)(lVar17 + 0x50) = iVar28 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar17 + 0x38);
            **(longlong **)(lVar17 + 0x38) = (longlong)(pbVar5 + 1);
            uVar14 = (uint)*pbVar5;
          }
          if (uVar14 == 0xffffffff) goto LAB_180267d56;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_180266931;
      }
      goto LAB_180267c7f;
    }
    if (cVar11 == '$') {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,local_120);
      uVar13 = uVar13 | 0x80;
      local_1b4 = uVar13;
      if ((*(byte *)(param_6 + 0x18) & 8) == 0) {
        if ((char)param_3[1] == '\0') {
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_1802677a5:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_1802677a5;
            *(char *)((longlong)param_3 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar16 = *param_4;
          if (lVar16 == 0) {
LAB_1802677f4:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_1802677f4;
            *(char *)((longlong)param_4 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar16 = *param_3;
        if (lVar16 != 0) {
          if (*param_4 == 0) goto LAB_180267819;
          goto LAB_18026787a;
        }
        if (*param_4 == 0) goto LAB_18026787a;
LAB_180267819:
        pppppppcVar23 = (char *******)local_120;
        if (0xf < local_108) {
          pppppppcVar23 = local_120[0];
        }
        if ((char)param_3[1] == '\0') {
          if (lVar16 == 0) {
LAB_180267863:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_180267863;
            *(char *)((longlong)param_3 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar23) goto LAB_18026787a;
      }
      else {
LAB_18026787a:
        if ((uVar29 != 3) || (1 < local_130)) goto LAB_180267a03;
        if ((char)param_3[1] == '\0') {
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_1802678ce:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_1802678ce;
            *(char *)((longlong)param_3 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar16 = *param_4;
          if (lVar16 == 0) {
LAB_18026791d:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar14 == 0xffffffff) goto LAB_18026791d;
            *(char *)((longlong)param_4 + 9) = (char)uVar14;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar16 = *param_3;
        if (lVar16 == 0) {
          if (*param_4 != 0) {
LAB_180267942:
            if ((char)param_3[1] == '\0') {
              if (lVar16 == 0) {
LAB_18026797e:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar16 + 0x50) < 1)) {
                  uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
                }
                if (uVar14 == 0xffffffff) goto LAB_18026797e;
                *(char *)((longlong)param_3 + 9) = (char)uVar14;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            pppppppcVar23 = (char *******)local_120;
            if (0xf < local_108) {
              pppppppcVar23 = local_120[0];
            }
            if (*(char *)((longlong)param_3 + 9) == *(char *)pppppppcVar23) goto LAB_180267a03;
          }
        }
        else if (*param_4 == 0) goto LAB_180267942;
      }
      if (((local_110 != 0) && (0xf < local_108)) && (DAT_18034e408 != '\0')) {
        pcVar19 = (char *)((longlong)local_120[0] + local_110 + 1);
        pcVar21 = (char *)((ulonglong)((longlong)local_120[0] + local_108 + 8) & 0xfffffffffffffff8)
        ;
        pcVar26 = pcVar21;
        if (pcVar19 <= pcVar21) {
          pcVar26 = pcVar19;
        }
        pcVar19 = (char *)((longlong)local_120[0] + 1);
        if (pcVar21 < (char *)((longlong)local_120[0] + 1)) {
          pcVar19 = pcVar21;
        }
        _guard_check_icall(local_120[0],pcVar21,pcVar26,pcVar19);
      }
      local_110 = 0;
      pppppppcVar23 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar23 = local_120[0];
      }
      *(char *)pppppppcVar23 = '\0';
LAB_180267a03:
      pppppppcVar23 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar23 = local_120[0];
      }
LAB_180267a11:
      if ((char)param_3[1] == '\0') {
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_180267a50:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar14 == 0xffffffff) goto LAB_180267a50;
          *(char *)((longlong)param_3 + 9) = (char)uVar14;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar16 = *param_4;
        if (lVar16 == 0) {
LAB_180267a9f:
          *param_4 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar14 == 0xffffffff) goto LAB_180267a9f;
          *(char *)((longlong)param_4 + 9) = (char)uVar14;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar16 = *param_3;
      if (lVar16 == 0) {
        if (*param_4 == 0) goto LAB_180267abb;
      }
      else if (*param_4 != 0) goto LAB_180267abb;
      pppppppcVar20 = (char *******)local_120;
      if (0xf < local_108) {
        pppppppcVar20 = local_120[0];
      }
      if (pppppppcVar23 == (char *******)((longlong)pppppppcVar20 + local_110)) goto LAB_180267abb;
      if ((char)param_3[1] == '\0') {
        if (lVar16 == 0) {
LAB_180267b4e:
          *param_3 = 0;
        }
        else {
          if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
             (**(int **)(lVar16 + 0x50) < 1)) {
            uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar16);
          }
          else {
            uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
          }
          if (uVar14 == 0xffffffff) goto LAB_180267b4e;
          *(char *)((longlong)param_3 + 9) = (char)uVar14;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar23) goto LAB_180267abb;
      pppppppcVar23 = (char *******)((longlong)pppppppcVar23 + 1);
      lVar16 = *param_3;
      if (lVar16 == 0) {
LAB_180267bbf:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_180267b9b:
          uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar28 = **(int **)(lVar16 + 0x50);
          if (iVar28 < 1) goto LAB_180267b9b;
          **(int **)(lVar16 + 0x50) = iVar28 + -1;
          pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
          **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
          uVar14 = (uint)*pbVar5;
        }
        if (uVar14 == 0xffffffff) goto LAB_180267bbf;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_180267a11;
    }
    if (cVar11 != '+') {
      if (cVar11 == 'v') {
        local_190 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15);
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15);
        local_1b4 = uVar13 | 0x200;
        local_1a0 = local_1b4;
        puVar8 = local_198;
        if ((local_d0 != 0) &&
           (cVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15), puVar8 = local_198,
           uVar15 = local_188, cVar11 != '\0')) {
          pppppppbVar22 = (byte *******)local_e0;
          if (0xf < local_c8) {
            pppppppbVar22 = local_e0[0];
          }
          if (*(byte *)pppppppbVar22 < 0x7f) {
            uStack_158 = 0;
            local_150 = 0;
            local_148 = 0xf;
            local_160 = (char *******)0x0;
            FUN_180003bf2(&local_160,0);
            lVar16 = 0;
LAB_180266a10:
            if ((char)param_3[1] == '\0') {
              lVar18 = *param_3;
              if (lVar18 == 0) {
LAB_180266a4f:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar18 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar18 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar18 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_180266a4f;
                *(char *)((longlong)param_3 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            if ((char)param_4[1] == '\0') {
              lVar18 = *param_4;
              if (lVar18 == 0) {
LAB_180266a9a:
                *param_4 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar18 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar18 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar18 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_180266a9a;
                *(char *)((longlong)param_4 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_4 + 1) = 1;
            }
            lVar18 = *param_3;
            if (lVar18 == 0) {
              if (*param_4 == 0) goto LAB_180266ab2;
            }
            else if (*param_4 != 0) goto LAB_180266ab2;
            if ((char)param_3[1] == '\0') {
              if (lVar18 == 0) {
LAB_180266b1f:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar18 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar18 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar18 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_180266b1f;
                *(char *)((longlong)param_3 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar18 = thunk_FUN_18023aef0(lVar17,lVar17 + 0xb,*(undefined1 *)((longlong)param_3 + 9))
            ;
            if ((ulonglong)(lVar18 - lVar17) < 10) {
              FUN_180003bf2(local_198,"0123456789-"[lVar18 - lVar17]);
              pppppppcVar23 = (char *******)&local_160;
              if (0xf < local_148) {
                pppppppcVar23 = local_160;
              }
              if (*(char *)((longlong)pppppppcVar23 + lVar16) != '\x7f') {
                pppppppcVar23 = (char *******)&local_160;
                if (0xf < local_148) {
                  pppppppcVar23 = local_160;
                }
                *(char *)((longlong)pppppppcVar23 + lVar16) =
                     *(char *)((longlong)pppppppcVar23 + lVar16) + '\x01';
              }
            }
            else {
              pppppppcVar23 = (char *******)&local_160;
              if (0xf < local_148) {
                pppppppcVar23 = local_160;
              }
              if (*(char *)((longlong)pppppppcVar23 + lVar16) == '\0') goto LAB_180266ab2;
              if ((char)param_3[1] == '\0') {
                lVar18 = *param_3;
                if (lVar18 == 0) {
LAB_180266be1:
                  *param_3 = 0;
                }
                else {
                  if (((byte *)**(undefined8 **)(lVar18 + 0x38) == (byte *)0x0) ||
                     (**(int **)(lVar18 + 0x50) < 1)) {
                    uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                  }
                  else {
                    uVar13 = (uint)*(byte *)**(undefined8 **)(lVar18 + 0x38);
                  }
                  if (uVar13 == 0xffffffff) goto LAB_180266be1;
                  *(char *)((longlong)param_3 + 9) = (char)uVar13;
                }
                *(undefined1 *)(param_3 + 1) = 1;
              }
              uVar29 = local_150;
              if (*(char *)((longlong)param_3 + 9) != cVar11) goto LAB_180266ab2;
              if (local_150 < local_148) {
                uVar1 = local_150 + 1;
                if (((local_150 != uVar1) && (0xf < local_148)) && (DAT_18034e408 != '\0')) {
                  pcVar19 = (char *)((longlong)local_160 + local_150 + 1);
                  pcVar21 = (char *)((ulonglong)((longlong)local_160 + local_148 + 8) &
                                    0xfffffffffffffff8);
                  pcVar26 = pcVar21;
                  if (pcVar19 <= pcVar21) {
                    pcVar26 = pcVar19;
                  }
                  _guard_check_icall(local_160,pcVar21,pcVar26);
                }
                local_150 = uVar1;
                pppppppcVar23 = (char *******)&local_160;
                if (0xf < local_148) {
                  pppppppcVar23 = local_160;
                }
                ((char *)((longlong)pppppppcVar23 + uVar29))[0] = '\0';
                ((char *)((longlong)pppppppcVar23 + uVar29))[1] = '\0';
              }
              else {
                FUN_1802442b0(&local_160,1,uVar25,0);
              }
              lVar16 = lVar16 + 1;
              lVar17 = local_1a8;
            }
            lVar18 = *param_3;
            if (lVar18 == 0) {
LAB_180266cd2:
              *param_3 = 0;
              *(undefined1 *)(param_3 + 1) = 1;
            }
            else {
              if (**(longlong **)(lVar18 + 0x38) == 0) {
LAB_180266cb7:
                uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                iVar28 = **(int **)(lVar18 + 0x50);
                if (iVar28 < 1) goto LAB_180266cb7;
                **(int **)(lVar18 + 0x50) = iVar28 + -1;
                pbVar5 = (byte *)**(longlong **)(lVar18 + 0x38);
                **(longlong **)(lVar18 + 0x38) = (longlong)(pbVar5 + 1);
                uVar13 = (uint)*pbVar5;
              }
              if (uVar13 == 0xffffffff) goto LAB_180266cd2;
              *(undefined1 *)(param_3 + 1) = 0;
            }
            goto LAB_180266a10;
          }
        }
LAB_180266d94:
        if ((char)param_3[1] == '\0') {
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_180266dd3:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_180266dd3;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar16 = *param_4;
          if (lVar16 == 0) {
LAB_180266e1d:
            *param_4 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_180266e1d;
            *(char *)((longlong)param_4 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar16 = *param_3;
        uVar25 = local_1b8;
        if (lVar16 == 0) {
          if (*param_4 == 0) goto LAB_180266e3a;
        }
        else if (*param_4 != 0) goto LAB_180266e3a;
        if ((char)param_3[1] == '\0') {
          if (lVar16 == 0) {
LAB_180266ed0:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_180266ed0;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        lVar16 = thunk_FUN_18023aef0(lVar17,lVar17 + 0xb,*(undefined1 *)((longlong)param_3 + 9));
        uVar25 = local_1b8;
        if (9 < (ulonglong)(lVar16 - lVar17)) goto LAB_180266e3a;
        FUN_180003bf2(puVar8);
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_180266f4f:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        else {
          if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_180266f34:
            uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar16 + 0x50);
            if (iVar28 < 1) goto LAB_180266f34;
            **(int **)(lVar16 + 0x50) = iVar28 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
            **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
            uVar13 = (uint)*pbVar5;
          }
          if (uVar13 == 0xffffffff) goto LAB_180266f4f;
          *(undefined1 *)(param_3 + 1) = 0;
        }
        goto LAB_180266d94;
      }
      if (cVar11 == 'x') goto LAB_180266920;
      goto LAB_180267c7f;
    }
    if ((char)param_3[1] == '\0') {
      lVar16 = *param_3;
      if (lVar16 == 0) {
LAB_18026723e:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar16 + 0x50) < 1)) {
          uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
        }
        if (uVar14 == 0xffffffff) goto LAB_18026723e;
        *(char *)((longlong)param_3 + 9) = (char)uVar14;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar16 = *param_4;
      if (lVar16 == 0) {
LAB_18026728d:
        *param_4 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar16 + 0x50) < 1)) {
          uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
        }
        if (uVar14 == 0xffffffff) goto LAB_18026728d;
        *(char *)((longlong)param_4 + 9) = (char)uVar14;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    if (*param_3 == 0) {
      if (*param_4 != 0) goto LAB_1802672b9;
    }
    else if (*param_4 == 0) {
LAB_1802672b9:
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,local_80);
      uVar14 = uVar13 | 0x102;
      local_1b4 = uVar14;
      if (local_70 == 0) {
LAB_18026736e:
        bVar7 = false;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,local_c0);
        uVar14 = uVar13 | 0x906;
        local_1b4 = uVar14;
        if ((char)param_3[1] == '\0') {
          lVar16 = *param_3;
          if (lVar16 == 0) {
LAB_180267349:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_180267349;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        pppppppcVar23 = (char *******)local_c0;
        if (0xf < local_a8) {
          pppppppcVar23 = local_c0[0];
        }
        if (*(char *)pppppppcVar23 != *(char *)((longlong)param_3 + 9)) goto LAB_18026736e;
        bVar7 = true;
      }
      if ((uVar14 & 4) != 0) {
        uVar14 = uVar14 & 0xfffffffb;
        local_1b4 = uVar14;
        FUN_180004c8c(local_c0);
      }
      if ((uVar14 & 2) != 0) {
        uVar14 = uVar14 & 0xfffffffd;
        local_1b4 = uVar14;
        FUN_180004c8c(local_80);
      }
      if (bVar7) {
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_1802673f2:
          *param_3 = 0;
          uVar12 = 1;
        }
        else {
          if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_1802673dc:
            uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar16 + 0x50);
            if (iVar28 < 1) goto LAB_1802673dc;
            **(int **)(lVar16 + 0x50) = iVar28 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
            **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
            uVar13 = (uint)*pbVar5;
          }
          if (uVar13 == 0xffffffff) goto LAB_1802673f2;
          uVar12 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar12;
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,&local_100);
        local_1b4 = uVar14 | 0x400;
        local_1a0 = local_1b4;
        if (0xf < local_128) {
          if (DAT_18034e408 != '\0') {
            pcVar19 = (char *)((longlong)local_140 + local_128 + 1);
            pcVar27 = (char *)((longlong)local_140 + local_130 + 1);
            pcVar21 = (char *)((ulonglong)(pcVar19 + 7) & 0xfffffffffffffff8);
            pcVar26 = pcVar21;
            if (pcVar27 <= pcVar21) {
              pcVar26 = pcVar27;
            }
            if (pcVar21 < pcVar19) {
              pcVar19 = pcVar21;
            }
            _guard_check_icall(local_140,pcVar21,pcVar26,pcVar19);
          }
          pppppppcVar23 = local_140;
          if ((0xfff < local_128 + 1) &&
             (pppppppcVar23 = (char *******)local_140[-1],
             (char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)pppppppcVar23)))) {
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar24 = auStack_1e0;
            goto LAB_180267d6c;
          }
          thunk_FUN_1802464a0(pppppppcVar23);
        }
        uVar10 = local_e8;
        uVar1 = local_f0;
        local_140 = (char *******)((ulonglong)local_140 & 0xffffffffffffff00);
        if (local_e8 < 0x10) {
          FUN_1802a82f0(&local_140,&local_100,local_f0 + 1);
        }
        else {
          local_140 = (char *******)CONCAT71(uStack_ff,local_100);
        }
        local_128 = uVar10;
        local_130 = uVar1;
        local_f0 = 0;
        local_e8 = 0xf;
        local_100 = 0;
        FUN_180004c8c(&local_100);
        lVar17 = local_1a8;
        uVar13 = local_1a0;
      }
      else {
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,&local_100);
        uVar13 = uVar14 | 0x1008;
        local_1b4 = uVar13;
        if (local_f0 == 0) {
LAB_1802675b6:
          bVar7 = false;
        }
        else {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,local_a0);
          uVar13 = uVar14 | 0x3018;
          local_1b4 = uVar13;
          if ((char)param_3[1] == '\0') {
            lVar16 = *param_3;
            if (lVar16 == 0) {
LAB_180267591:
              *param_3 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar16 + 0x50) < 1)) {
                uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                uVar14 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
              }
              if (uVar14 == 0xffffffff) goto LAB_180267591;
              *(char *)((longlong)param_3 + 9) = (char)uVar14;
            }
            *(undefined1 *)(param_3 + 1) = 1;
          }
          pppppppcVar23 = (char *******)local_a0;
          if (0xf < local_88) {
            pppppppcVar23 = local_a0[0];
          }
          if (*(char *)pppppppcVar23 != *(char *)((longlong)param_3 + 9)) goto LAB_1802675b6;
          bVar7 = true;
        }
        if ((uVar13 & 0x10) != 0) {
          uVar13 = uVar13 & 0xffffffef;
          local_1b4 = uVar13;
          FUN_180004c8c(local_a0);
        }
        if ((uVar13 & 8) != 0) {
          uVar13 = uVar13 & 0xfffffff7;
          local_1b4 = uVar13;
          FUN_180004c8c(&local_100);
        }
        if (!bVar7) {
          (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,local_60);
          local_1b4 = uVar13 | 0x4020;
          if (local_50 == 0) {
LAB_1802676e9:
            bVar7 = false;
          }
          else {
            (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,&local_100);
            local_1b4 = uVar13 | 0x14060;
            if (local_f0 != 0) goto LAB_1802676e9;
            bVar7 = true;
          }
          uVar13 = local_1b4;
          if ((local_1b4 & 0x40) != 0) {
            uVar13 = local_1b4 & 0xffffffbf;
            local_1b4 = uVar13;
            FUN_180004c8c(&local_100);
          }
          if ((uVar13 & 0x20) != 0) {
            uVar13 = uVar13 & 0xffffffdf;
            local_1b4 = uVar13;
            FUN_180004c8c(local_60);
          }
          lVar17 = local_1a8;
          if (bVar7) {
            local_1b8 = 1;
          }
          goto LAB_180267c7f;
        }
        lVar16 = *param_3;
        if (lVar16 == 0) {
LAB_18026763a:
          *param_3 = 0;
          uVar12 = 1;
        }
        else {
          if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_180267624:
            uVar14 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar16 + 0x50);
            if (iVar28 < 1) goto LAB_180267624;
            **(int **)(lVar16 + 0x50) = iVar28 + -1;
            pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
            **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
            uVar14 = (uint)*pbVar5;
          }
          if (uVar14 == 0xffffffff) goto LAB_18026763a;
          uVar12 = 0;
        }
        *(undefined1 *)(param_3 + 1) = uVar12;
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15,&local_100);
        uVar13 = uVar13 | 0x8000;
        local_1b4 = uVar13;
        FUN_18023f160(&local_140,&local_100);
        FUN_180004c8c(&local_100);
        local_1b8 = 1;
        lVar17 = local_1a8;
      }
    }
    goto LAB_180267c7f;
  }
LAB_180267d6c:
  if (local_130 < 2) goto LAB_180267e91;
  pppppppcVar23 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar23 = local_140;
  }
  goto LAB_180267d90;
LAB_180267abb:
  pppppppcVar20 = (char *******)local_120;
  if (0xf < local_108) {
    pppppppcVar20 = local_120[0];
  }
  local_1b0 = local_1b0 & 0xff;
  if (pppppppcVar23 != (char *******)((longlong)pppppppcVar20 + local_110)) {
    local_1b0 = 1;
  }
  FUN_180004c8c(local_120);
  lVar17 = local_1a8;
  goto LAB_180267c7f;
LAB_180266ab2:
  if (lVar16 != 0) {
    pppppppcVar23 = (char *******)&local_160;
    if (0xf < local_148) {
      pppppppcVar23 = local_160;
    }
    if (*(char *)((longlong)pppppppcVar23 + lVar16) < '\x01') {
      local_1b0 = CONCAT31(local_1b0._1_3_,1);
    }
    else {
      lVar16 = lVar16 + 1;
    }
  }
  pppppppbVar22 = (byte *******)local_e0;
  if (0xf < local_c8) {
    pppppppbVar22 = local_e0[0];
  }
  if ((char)local_1b0 != '\0') {
LAB_180266d46:
    FUN_180004c8c(&local_160);
    FUN_180004c8c(local_e0);
    uVar15 = local_188;
    uVar29 = local_180;
    uVar13 = local_1a0;
    goto LAB_180267c7f;
  }
  while ((lVar16 != 0 && (bVar2 = *(byte *)pppppppbVar22, bVar2 != 0x7f))) {
    lVar16 = lVar16 + -1;
    if (lVar16 != 0) {
      pppppppcVar23 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar23 = local_160;
      }
      if (bVar2 == *(byte *)((longlong)pppppppcVar23 + lVar16)) goto LAB_180266d1f;
LAB_180266d41:
      local_1b0 = CONCAT31(local_1b0._1_3_,1);
      goto LAB_180266d46;
    }
LAB_180266d1f:
    if (lVar16 == 0) {
      pppppppcVar23 = (char *******)&local_160;
      if (0xf < local_148) {
        pppppppcVar23 = local_160;
      }
      if ((char)bVar2 < *(char *)pppppppcVar23) goto LAB_180266d41;
    }
    if ('\0' < (char)*(byte *)((longlong)pppppppbVar22 + 1)) {
      pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
    }
  }
  FUN_180004c8c(&local_160);
  uVar15 = local_188;
LAB_180266e3a:
  iVar9 = local_190;
  iVar28 = 0;
  cVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar15);
  if ((char)param_3[1] == '\0') {
    lVar16 = *param_3;
    if (lVar16 == 0) {
LAB_180266f72:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar16 + 0x50) < 1)) {
        uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
      }
      if (uVar13 == 0xffffffff) goto LAB_180266f72;
      *(char *)((longlong)param_3 + 9) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar16 = *param_4;
    if (lVar16 == 0) {
LAB_180266fc1:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar16 + 0x50) < 1)) {
        uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
      }
      if (uVar13 == 0xffffffff) goto LAB_180266fc1;
      *(char *)((longlong)param_4 + 9) = (char)uVar13;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar16 = *param_3;
  if (lVar16 == 0) {
    if (*param_4 != 0) {
LAB_180266fee:
      if (cVar11 != '\0') {
        if ((char)param_3[1] == '\0') {
          if (lVar16 == 0) {
LAB_180267032:
            *param_3 = 0;
          }
          else {
            if (((byte *)**(undefined8 **)(lVar16 + 0x38) == (byte *)0x0) ||
               (**(int **)(lVar16 + 0x50) < 1)) {
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              uVar13 = (uint)*(byte *)**(undefined8 **)(lVar16 + 0x38);
            }
            if (uVar13 == 0xffffffff) goto LAB_180267032;
            *(char *)((longlong)param_3 + 9) = (char)uVar13;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        lVar16 = local_1a8;
        if (*(char *)((longlong)param_3 + 9) == cVar11) {
LAB_180267050:
          lVar17 = *param_3;
          if (lVar17 == 0) {
LAB_1802670a3:
            *param_3 = 0;
            *(undefined1 *)(param_3 + 1) = 1;
          }
          else {
            if (**(longlong **)(lVar17 + 0x38) == 0) {
LAB_180267083:
              uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              iVar3 = **(int **)(lVar17 + 0x50);
              if (iVar3 < 1) goto LAB_180267083;
              **(int **)(lVar17 + 0x50) = iVar3 + -1;
              pbVar5 = (byte *)**(longlong **)(lVar17 + 0x38);
              **(longlong **)(lVar17 + 0x38) = (longlong)(pbVar5 + 1);
              uVar13 = (uint)*pbVar5;
            }
            if (uVar13 == 0xffffffff) goto LAB_1802670a3;
            *(undefined1 *)(param_3 + 1) = 0;
            FUN_1800e5e14(param_3);
          }
          if ((char)param_4[1] == '\0') {
            lVar17 = *param_4;
            if (lVar17 == 0) {
LAB_1802670f2:
              *param_4 = 0;
            }
            else {
              if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                 (**(int **)(lVar17 + 0x50) < 1)) {
                uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
              }
              else {
                uVar13 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
              }
              if (uVar13 == 0xffffffff) goto LAB_1802670f2;
              *(char *)((longlong)param_4 + 9) = (char)uVar13;
            }
            *(undefined1 *)(param_4 + 1) = 1;
          }
          lVar17 = *param_3;
          if (lVar17 == 0) {
            if (*param_4 == 0) goto LAB_18026710e;
LAB_180267139:
            if (iVar9 <= iVar28) goto LAB_180267118;
            if ((char)param_3[1] == '\0') {
              if (lVar17 == 0) {
LAB_18026717a:
                *param_3 = 0;
              }
              else {
                if (((byte *)**(undefined8 **)(lVar17 + 0x38) == (byte *)0x0) ||
                   (**(int **)(lVar17 + 0x50) < 1)) {
                  uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
                }
                else {
                  uVar13 = (uint)*(byte *)**(undefined8 **)(lVar17 + 0x38);
                }
                if (uVar13 == 0xffffffff) goto LAB_18026717a;
                *(char *)((longlong)param_3 + 9) = (char)uVar13;
              }
              *(undefined1 *)(param_3 + 1) = 1;
            }
            lVar17 = thunk_FUN_18023aef0(lVar16,lVar16 + 0xb,*(undefined1 *)((longlong)param_3 + 9))
            ;
            if (9 < (ulonglong)(lVar17 - lVar16)) goto LAB_180267113;
            FUN_180003bf2(local_198);
            iVar28 = iVar28 + 1;
            goto LAB_180267050;
          }
          if (*param_4 == 0) goto LAB_180267139;
LAB_18026710e:
          if (iVar9 <= iVar28) goto LAB_180267118;
LAB_180267113:
          local_1b0 = CONCAT31(local_1b0._1_3_,1);
        }
      }
    }
  }
  else if (*param_4 == 0) goto LAB_180266fee;
LAB_180267118:
  puVar8 = local_198;
  if (local_198[2] == 0) {
    local_1b0 = CONCAT31(local_1b0._1_3_,1);
  }
  else {
    for (; iVar28 < iVar9; iVar28 = iVar28 + 1) {
      FUN_180003bf2(puVar8);
      uVar25 = local_1b8;
    }
  }
  FUN_180004c8c(local_e0);
  lVar17 = local_1a8;
  uVar29 = local_180;
  uVar13 = local_1a0;
LAB_180267c7f:
  local_180 = uVar29 + 1;
  if ((char)local_1b0 != '\0') goto code_r0x000180267c92;
  goto LAB_1802668f0;
LAB_180267c5a:
  lVar17 = local_1a8;
  uVar25 = local_1b8;
  if (acStack_18c[uVar29] == ' ') {
    uVar12 = (char)local_1b0;
    if (!bVar7) {
      uVar12 = 1;
    }
    local_1b0 = CONCAT31(local_1b0._1_3_,uVar12);
  }
  goto LAB_180267c7f;
code_r0x000180267c92:
  FUN_18023f1d0(local_198,0);
  puVar24 = auStack_1e8;
  goto LAB_180267eb1;
LAB_180267d90:
  pppppppcVar23 = (char *******)((longlong)pppppppcVar23 + 1);
  pppppppcVar20 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar20 = local_140;
  }
  if (pppppppcVar23 != (char *******)((longlong)pppppppcVar20 + local_130)) {
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x180267db8;
      FUN_1800e5e14(param_3);
    }
    if ((char)param_4[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x180267dc8;
      FUN_1800e5e14(param_4);
    }
    if (*param_3 == 0) {
      if (*param_4 == 0) goto LAB_180267dd5;
    }
    else if (*param_4 != 0) goto LAB_180267dd5;
    if ((char)param_3[1] == '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x180267e19;
      FUN_1800e5e14(param_3);
    }
    if (*(char *)((longlong)param_3 + 9) != *(char *)pppppppcVar23) goto LAB_180267dd5;
    lVar16 = *param_3;
    if (lVar16 == 0) {
LAB_180267e78:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar16 + 0x38) == 0) {
LAB_180267e54:
        *(undefined8 *)(puVar24 + -8) = 0x180267e61;
        uVar13 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar28 = **(int **)(lVar16 + 0x50);
        if (iVar28 < 1) goto LAB_180267e54;
        **(int **)(lVar16 + 0x50) = iVar28 + -1;
        pbVar5 = (byte *)**(longlong **)(lVar16 + 0x38);
        **(longlong **)(lVar16 + 0x38) = (longlong)(pbVar5 + 1);
        uVar13 = (uint)*pbVar5;
      }
      if (uVar13 == 0xffffffff) goto LAB_180267e78;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_180267d90;
  }
LAB_180267dd5:
  pppppppcVar20 = (char *******)&local_140;
  if (0xf < local_128) {
    pppppppcVar20 = local_140;
  }
  if (pppppppcVar23 == (char *******)((longlong)pppppppcVar20 + local_130)) {
LAB_180267e91:
    if (puVar24[0x30] != '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x180267eb0;
      FUN_18007d9c0(*(undefined8 *)(puVar24 + 0x50),0,1,0x2d);
    }
  }
  else {
    *(undefined8 *)(puVar24 + -8) = 0x180267dff;
    FUN_18023f1d0(*(undefined8 *)(puVar24 + 0x50),0);
  }
LAB_180267eb1:
  *(undefined8 *)(puVar24 + -8) = 0x180267eba;
  FUN_180004c8c(&local_140);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar24 + -8) = &UNK_180267ecc;
  FUN_1802396d0(local_40 ^ (ulonglong)puVar24);
}

