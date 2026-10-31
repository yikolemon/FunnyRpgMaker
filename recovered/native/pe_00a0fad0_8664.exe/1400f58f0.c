/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f58f0 */

/* WARNING: Removing unreachable block (ram,0x0001400f67b3) */

void FUN_1400f58f0(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char ******ppppppcVar15;
  char ******ppppppcVar16;
  undefined8 *puVar17;
  char cVar18;
  longlong lVar19;
  longlong lVar20;
  char cVar21;
  longlong lVar22;
  char ******ppppppcVar23;
  char cVar24;
  undefined8 unaff_R12;
  uint7 uVar26;
  ulonglong uVar25;
  char *pcVar27;
  int iVar28;
  char *pcVar29;
  undefined1 auStack_128 [48];
  char local_f8;
  char local_f7;
  char local_f6;
  char local_f5;
  short local_f4;
  char *local_f0;
  uint local_e8;
  short local_e4;
  short local_e2;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  char *****local_c0 [3];
  ulonglong local_a8;
  char *****local_a0 [2];
  longlong local_90;
  ulonglong local_88;
  short local_80 [22];
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_128;
  local_e0 = param_2;
  uVar10 = FUN_1400e9630(param_5);
  (*(code *)PTR__guard_dispatch_icall_140178c20)
            (uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_140165765,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_1400ecb10(param_5);
  local_d0 = lVar11;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11,local_a0);
  uVar26 = (uint7)((ulonglong)unaff_R12 >> 8);
  if (local_90 == 0) {
    sVar7 = 0;
    cVar21 = '\0';
  }
  else {
    sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
    cVar24 = '\0';
    local_f8 = '\0';
    cVar21 = local_f8;
    if (local_90 != 0) {
      lVar11 = *param_3;
LAB_1400f59d8:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1400f5a16:
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
          if (sVar9 == -1) goto LAB_1400f5a16;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_1400f5a60:
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
          if (sVar9 == -1) goto LAB_1400f5a60;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      cVar21 = cVar24;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_1400f5a83;
      }
      else if (*param_4 != 0) goto LAB_1400f5a83;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1400f5b01:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400f5b01;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f5a83;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400f5b68:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar24 = '\x01';
        uVar26 = 0;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f5b45:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar28 = **(int **)(lVar11 + 0x50);
          if (iVar28 < 1) goto LAB_1400f5b45;
          **(int **)(lVar11 + 0x50) = iVar28 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_1400f5b68;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar24 = '\x01';
      }
      goto LAB_1400f59d8;
    }
  }
LAB_1400f5a83:
  local_f8 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1400f5b9e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5b9e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1400f5bec:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5bec;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1400f5c13:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1400f5c55:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400f5c55;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((longlong)param_3 + 10) == local_e4) {
        *param_1 = 0x2b;
        param_1 = param_1 + 1;
        lVar13 = *param_3;
        if (lVar13 != 0) {
          if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1400f5ca1:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar28 = **(int **)(lVar13 + 0x50);
            if (iVar28 < 1) goto LAB_1400f5ca1;
            **(int **)(lVar13 + 0x50) = iVar28 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1400f5cdf;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else if (*(short *)((longlong)param_3 + 10) == local_e2) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        FUN_1400e37f0(param_3);
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1400f5c13;
LAB_1400f5cdf:
  *param_1 = 0x30;
  pcVar29 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar29;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1400f5d3d:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5d3d;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1400f5d8e:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5d8e;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_1400f6002;
  }
  else if (*param_4 != 0) goto LAB_1400f6002;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_1400f5dfb:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5dfb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_1400f6002;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_1400f5ea6:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1400f5e4c:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_1400f5e4c;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1400f5ea6;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_1400f5ea6;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_1400f5ea6;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1400f5ef7:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f5ef7;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1400f5f13:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_1400f5f70:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_1400f5f70;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar21 = '\x01';
      }
      sVar9 = *(short *)((longlong)param_3 + 10);
      if (sVar9 != local_4e) {
        if (cVar21 == '\0') {
          lVar13 = *param_3;
          if (lVar13 == 0) {
LAB_1400f5fca:
            *param_3 = 0;
            sVar9 = *(short *)((longlong)param_3 + 10);
          }
          else {
            if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar13 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
            }
            if (sVar9 == -1) goto LAB_1400f5fca;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_1400f6002;
        }
      }
      local_f6 = '\x01';
      FUN_1400e37f0(param_3);
      *pcVar29 = 'x';
      local_f0 = param_1 + 2;
LAB_1400f6002:
      uVar25 = (ulonglong)uVar26 << 8;
      local_e8 = (uint)uVar25;
      iVar28 = 0;
      local_d8 = 0;
      uVar12 = 10;
      if (local_f6 != '\0') {
        uVar12 = 0x16;
      }
      local_c8 = uVar12;
      if (local_90 != 0) {
LAB_1400f6218:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_1400f6259:
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
            if (sVar9 == -1) goto LAB_1400f6259;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_1400f62a2:
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
            if (sVar9 == -1) goto LAB_1400f62a2;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_1400f62ba;
        }
        else if (*param_4 != 0) goto LAB_1400f62ba;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_1400f635e:
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
            if (sVar9 == -1) goto LAB_1400f635e;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f62ba;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_1400f63c3:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f63a1:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_1400f63a1;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_1400f63c3;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = '\x01';
        }
        goto LAB_1400f6218;
      }
LAB_1400f6034:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_1400f6079:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1400f6079;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_1400f60cb:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1400f60cb;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_1400f688c;
      }
      else if (*param_4 != 0) goto LAB_1400f688c;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1400f6138:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1400f6138;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = thunk_FUN_1400dabb0(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_1400f688c;
      if (iVar28 < local_e0) {
        if ((uVar14 != 0) || (iVar28 != 0)) {
          *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
          local_f0 = local_f0 + 1;
          iVar28 = iVar28 + 1;
        }
      }
      else {
        local_d8 = local_d8 + 1;
        if (uVar14 != 0) {
          uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
          local_e8 = (uint)uVar25;
        }
      }
      local_f7 = '\x01';
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_1400f6202:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1400f61e2:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_1400f61e2;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_1400f6202;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1400f6034;
    }
  }
  else if (*param_4 == 0) goto LAB_1400f5f13;
  *pcVar29 = '\0';
LAB_1400f7658:
  FUN_1400017de(local_a0);
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_40 ^ (ulonglong)auStack_128);
LAB_1400f62ba:
  FUN_14002213a(local_c0,1,uVar10);
  uVar12 = local_c8;
  lVar13 = 0;
  uVar25 = (ulonglong)local_e8;
LAB_1400f62e0:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400f63f1:
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
      if (sVar9 == -1) goto LAB_1400f63f1;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400f6443:
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
      if (sVar9 == -1) goto LAB_1400f6443;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1400f645f;
  }
  else if (*param_4 != 0) goto LAB_1400f645f;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1400f64d8:
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
      if (sVar9 == -1) goto LAB_1400f64d8;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_1400dabb0(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar14 < uVar12) {
    local_f7 = '\x01';
    if (iVar28 < local_e0) {
      if ((uVar14 != 0) || (iVar28 != 0)) {
        *local_f0 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
        local_f0 = local_f0 + 1;
        iVar28 = iVar28 + 1;
      }
    }
    else {
      local_d8 = local_d8 + 1;
      if (uVar14 != 0) {
        uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
      }
    }
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) != '\x7f') {
      ppppppcVar15 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar15 = (char ******)local_c0[0];
      }
      *(char *)((longlong)ppppppcVar15 + lVar13) =
           *(char *)((longlong)ppppppcVar15 + lVar13) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400f65bd:
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
        if (sVar9 == -1) goto LAB_1400f65bd;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f645f;
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) == '\0') {
      local_f8 = '\x01';
    }
    else {
      FUN_14000cf50(local_c0);
      lVar13 = lVar13 + 1;
    }
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1400f664e:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f662e:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1400f662e;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1400f664e;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400f62e0;
LAB_1400f645f:
  lVar11 = local_d0;
  local_e8 = (uint)uVar25;
  if (lVar13 != 0) {
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) < '\x01') {
      local_f8 = '\x01';
    }
    else {
      lVar13 = lVar13 + 1;
    }
  }
LAB_1400f6670:
  if ((char)param_3[1] == '\0') {
    lVar22 = *param_3;
    if (lVar22 == 0) {
LAB_1400f66b1:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f66b1;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar22 = *param_4;
    if (lVar22 == 0) {
LAB_1400f66ff:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f66ff;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar22 = *param_3;
  if (lVar22 == 0) {
    if (*param_4 == 0) goto LAB_1400f6723;
  }
  else if (*param_4 != 0) goto LAB_1400f6723;
  if ((char)param_3[1] == '\0') {
    if (lVar22 == 0) {
LAB_1400f67ff:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_1400f67ff;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f6723;
  lVar22 = *param_3;
  if (lVar22 == 0) {
LAB_1400f6869:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = '\x01';
  }
  else {
    if (**(longlong **)(lVar22 + 0x38) == 0) {
LAB_1400f6847:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar22 + 0x50);
      if (iVar1 < 1) goto LAB_1400f6847;
      **(int **)(lVar22 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar22 + 0x38);
      **(longlong **)(lVar22 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1400f6869;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = '\x01';
  }
  goto LAB_1400f6670;
LAB_1400f6723:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar23 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  uVar25 = (ulonglong)local_e8;
  if (local_f8 == '\0') {
LAB_1400f6755:
    do {
      do {
        if (lVar13 == 0) goto LAB_1400f6883;
        if (ppppppcVar15 != ppppppcVar23) {
          cVar21 = *(char *)ppppppcVar15;
          ppppppcVar15 = (char ******)((longlong)ppppppcVar15 + 1);
        }
        lVar13 = lVar13 + -1;
      } while (0x7d < (byte)(cVar21 - 1U));
      if (lVar13 != 0) {
        ppppppcVar16 = local_c0;
        if (0xf < local_a8) {
          ppppppcVar16 = (char ******)local_c0[0];
        }
        if (*(char *)((longlong)ppppppcVar16 + lVar13) != cVar21) break;
        if (lVar13 != 0) goto LAB_1400f6755;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = '\x01';
  }
LAB_1400f6883:
  FUN_1400017de(local_c0);
LAB_1400f688c:
  if (((local_f6 != '\0') && (local_f7 != '\0')) && (iVar28 == 0)) {
    *local_f0 = '0';
    local_f0 = local_f0 + 1;
  }
  puVar17 = (undefined8 *)FUN_1401174fc();
  cVar21 = *(char *)*puVar17;
  local_f5 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1400f6904:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f6904;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1400f6956:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f6956;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar29 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1400f69d3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1400f6a15:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1400f6a15;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      sVar7 = *(short *)((longlong)param_3 + 10);
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      pcVar29 = local_f0;
      if (sVar7 == sVar9) {
        *local_f0 = cVar21;
        pcVar29 = local_f0 + 1;
        lVar11 = *param_3;
        local_f0 = pcVar29;
        if (lVar11 != 0) {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f6a82:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_1400f6a82;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1400f6979;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1400f69d3;
LAB_1400f6979:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar28 == 0) {
LAB_1400f6993:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_1400f6ac9:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400f6ac9;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1400f6b13:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400f6b13;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1400f6b2b;
    }
    else if (*param_4 != 0) goto LAB_1400f6b2b;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_1400f6bc1:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1400f6bc1;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f6b2b;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1400f6c31:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1400f6c0e:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_1400f6c0e;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_1400f6c31;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_1400f6993;
  }
LAB_1400f6b43:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400f6c5a:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f6c5a;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400f6cac:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f6cac;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1400f6cd0;
  }
  else if (*param_4 != 0) goto LAB_1400f6cd0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1400f6dd5:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f6dd5;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_1400dabb0(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_1400f6cd0;
  if (iVar28 < local_e0) {
    *pcVar29 = "0123456789ABCDEFabcdef-+XxPp"[uVar14];
    pcVar29 = pcVar29 + 1;
    iVar28 = iVar28 + 1;
  }
  else {
    uVar25 = uVar25 & 0xff;
    if (uVar14 != 0) {
      uVar25 = 1;
    }
  }
  lVar11 = *param_3;
  cVar21 = '\x01';
  if (lVar11 == 0) {
LAB_1400f6e89:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f6e69:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1400f6e69;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_1400f6e89;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400f6b43;
LAB_1400f6b2b:
  uVar25 = (ulonglong)local_e8;
  pcVar29 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_1400f6b43;
LAB_1400f6cd0:
  cVar24 = local_f6;
  if ((char)uVar25 != '\0') {
    pcVar27 = pcVar29 + -1;
    cVar18 = *pcVar27;
    if (cVar18 == local_f5) {
      pcVar27 = pcVar29 + -2;
      cVar18 = *pcVar27;
    }
    if (cVar18 != '0') {
      cVar6 = '5';
      if (local_f6 != '\0') {
        cVar6 = '8';
      }
      if (cVar18 != cVar6) goto LAB_1400f6d13;
    }
    *pcVar27 = cVar18 + '\x01';
  }
LAB_1400f6d13:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar29;
  if (cVar21 == '\0') goto LAB_1400f7658;
  lVar22 = 0;
  local_d0 = 0;
  sVar7 = *(short *)((longlong)local_80 + lVar11);
  sVar9 = *(short *)((longlong)local_80 + lVar13);
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400f6eb6:
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
      if (sVar8 == -1) goto LAB_1400f6eb6;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400f6f02:
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
      if (sVar8 == -1) goto LAB_1400f6f02;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1400f72fe;
  }
  else if (*param_4 != 0) goto LAB_1400f72fe;
  cVar21 = (char)param_3[1];
  if (cVar21 == '\0') {
    if (lVar11 == 0) {
LAB_1400f6f6c:
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
      if (sVar8 == -1) goto LAB_1400f6f6c;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar21 = '\x01';
  }
  sVar8 = *(short *)((longlong)param_3 + 10);
  if (sVar8 != sVar7) {
    if (cVar21 == '\0') {
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_1400f6fc0:
        *param_3 = 0;
        sVar8 = *(short *)((longlong)param_3 + 10);
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_1400f6fc0;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != sVar9) {
LAB_1400f72fe:
      lVar11 = 0x44c;
      if (cVar24 != '\0') {
        lVar11 = 0x1068;
      }
      uVar3 = 0x44c;
      if (cVar24 != '\0') {
        uVar3 = 0x41a;
      }
      uVar12 = (ulonglong)uVar3;
      lVar13 = local_d8;
LAB_1400f7324:
      lVar19 = lVar11;
      if ((((-1 < lVar22) && (-1 < lVar13)) && ((lVar11 <= lVar22 || ((longlong)uVar12 <= lVar13))))
         || (((lVar22 < 1 && (lVar13 < 1)) &&
             ((lVar19 = -lVar11, lVar22 <= lVar19 || (lVar13 <= (longlong)-uVar12))))))
      goto LAB_1400f75a1;
      lVar19 = -lVar22;
      if (-lVar22 < 0) {
        lVar19 = lVar22;
      }
      if (lVar19 <= lVar11) {
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar12) goto LAB_1400f757b;
      }
      if (cVar24 != '\0') {
        lVar20 = lVar19 + -1;
        if (lVar20 < 0) {
          lVar20 = lVar19 + 2;
        }
        lVar19 = (lVar20 >> 2) + 1;
      }
      lVar20 = -local_d8;
      if (-local_d8 < 0) {
        lVar20 = local_d8;
      }
      if (lVar20 < lVar19) {
        lVar19 = lVar20;
      }
      if (lVar22 < 0) {
        lVar20 = lVar19 * 4;
        if (cVar24 == '\0') {
          lVar20 = lVar19;
        }
        lVar22 = lVar22 + lVar20;
        lVar13 = lVar13 - lVar19;
      }
      else {
        lVar20 = lVar19 * 4;
        if (cVar24 == '\0') {
          lVar20 = lVar19;
        }
        lVar22 = lVar22 - lVar20;
        lVar13 = lVar13 + lVar19;
      }
      goto LAB_1400f7324;
    }
  }
  bVar4 = false;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1400f7062:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f700e:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1400f700e;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_1400f7062;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar11 = *param_3;
    if (lVar11 == 0) goto LAB_1400f7062;
    if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar11 + 0x50) < 1)) {
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
    }
    if (sVar7 == -1) goto LAB_1400f7062;
    *(short *)((longlong)param_3 + 10) = sVar7;
  }
  bVar5 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400f70b1:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f70b1;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  sVar7 = local_f4;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1400f71f0;
  }
  else if (*param_4 != 0) goto LAB_1400f71f0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1400f7119:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1400f7119;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_e4) {
    sVar7 = local_f4;
    if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_1400f71f0;
    bVar4 = true;
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f71c1:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar28 = **(int **)(lVar11 + 0x50);
        if (iVar28 < 1) goto LAB_1400f71c1;
        **(int **)(lVar11 + 0x50) = iVar28 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_1400f71f0;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
    goto LAB_1400f71f0;
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f715d:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1400f715d;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      sVar7 = local_f4;
      goto LAB_1400f71f0;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  sVar7 = local_f4;
LAB_1400f71f0:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1400f7230:
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
      if (sVar9 == -1) goto LAB_1400f7230;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1400f727d:
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
      if (sVar9 == -1) goto LAB_1400f727d;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  cVar24 = local_f6;
  lVar22 = local_d0;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1400f72b5;
  }
  else if (*param_4 != 0) goto LAB_1400f72b5;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1400f741b:
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
      if (sVar9 == -1) goto LAB_1400f741b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar22 = local_d0;
  cVar24 = local_f6;
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1400f72b5;
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1400f7489:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f7467:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1400f7467;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1400f7489;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400f71f0;
LAB_1400f72b5:
  if ((char)param_3[1] == '\0') {
    FUN_1400e3870(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400e3870(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1400f72e8;
  }
  else if (*param_4 != 0) goto LAB_1400f72e8;
  if ((char)param_3[1] == '\0') {
    FUN_1400e3870(param_3);
  }
  lVar11 = thunk_FUN_1400dabb0(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar12 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar12) goto LAB_1400f72e8;
  if ((lVar22 < 0xccccccccccccccc) || ((lVar22 == 0xccccccccccccccc && ((longlong)uVar12 < 8)))) {
    lVar22 = uVar12 + lVar22 * 10;
  }
  else {
    lVar22 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1400f7553:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1400f7533:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_1400f7533;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_1400f7553;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1400f72b5;
LAB_1400f72e8:
  if (bVar4) {
    lVar22 = -lVar22;
  }
  pcVar29 = local_f0;
  if (!bVar5) goto LAB_1400f7658;
  goto LAB_1400f72fe;
LAB_1400f757b:
  if (cVar24 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar22;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_1400f75a1:
  if (lVar19 != 0) {
    cVar21 = 'e';
    if (cVar24 != '\0') {
      cVar21 = 'p';
    }
    *pcVar29 = cVar21;
    pcVar27 = pcVar29 + 1;
    if (lVar19 < 0) {
      *pcVar27 = '-';
      pcVar27 = pcVar29 + 2;
    }
    lVar11 = -lVar19;
    pcVar29 = pcVar27;
    if (-lVar19 < 0) {
      lVar11 = lVar19;
    }
    while (lVar11 != 0) {
      *pcVar29 = (char)lVar11 + (char)(lVar11 / 10) * -10 + '0';
      lVar11 = lVar11 / 10;
      pcVar29 = pcVar29 + 1;
    }
    thunk_FUN_1400da9a0(pcVar27,pcVar29);
  }
  *pcVar29 = '\0';
  goto LAB_1400f7658;
}

