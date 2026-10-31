/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025f390 */

/* WARNING: Removing unreachable block (ram,0x000180260253) */

void FUN_18025f390(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_128;
  local_e0 = param_2;
  uVar10 = FUN_1802530d0(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)
            (uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_180327c75,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_1802565b0(param_5);
  local_d0 = lVar11;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11,local_a0);
  uVar26 = (uint7)((ulonglong)unaff_R12 >> 8);
  if (local_90 == 0) {
    sVar7 = 0;
    cVar21 = '\0';
  }
  else {
    sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11);
    cVar24 = '\0';
    local_f8 = '\0';
    cVar21 = local_f8;
    if (local_90 != 0) {
      lVar11 = *param_3;
LAB_18025f478:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_18025f4b6:
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
          if (sVar9 == -1) goto LAB_18025f4b6;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_18025f500:
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
          if (sVar9 == -1) goto LAB_18025f500;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      cVar21 = cVar24;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_18025f523;
      }
      else if (*param_4 != 0) goto LAB_18025f523;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_18025f5a1:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18025f5a1;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_18025f523;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_18025f608:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar24 = '\x01';
        uVar26 = 0;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18025f5e5:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar28 = **(int **)(lVar11 + 0x50);
          if (iVar28 < 1) goto LAB_18025f5e5;
          **(int **)(lVar11 + 0x50) = iVar28 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_18025f608;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar24 = '\x01';
      }
      goto LAB_18025f478;
    }
  }
LAB_18025f523:
  local_f8 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_18025f63e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f63e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_18025f68c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f68c;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_18025f6b3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_18025f6f5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18025f6f5;
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
LAB_18025f741:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar13 + 0x50);
            if (iVar28 < 1) goto LAB_18025f741;
            **(int **)(lVar13 + 0x50) = iVar28 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_18025f77f;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else if (*(short *)((longlong)param_3 + 10) == local_e2) {
        *param_1 = 0x2d;
        param_1 = param_1 + 1;
        FUN_18024d290(param_3);
      }
    }
  }
  else if (*param_4 == 0) goto LAB_18025f6b3;
LAB_18025f77f:
  *param_1 = 0x30;
  pcVar29 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar29;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_18025f7dd:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f7dd;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_18025f82e:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f82e;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_18025faa2;
  }
  else if (*param_4 != 0) goto LAB_18025faa2;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_18025f89b:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f89b;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_18025faa2;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_18025f946:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_18025f8ec:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_18025f8ec;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_18025f946;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_18025f946;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_18025f946;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_18025f997:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18025f997;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_18025f9b3:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_18025fa10:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar9 == -1) goto LAB_18025fa10;
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
LAB_18025fa6a:
            *param_3 = 0;
            sVar9 = *(short *)((longlong)param_3 + 10);
          }
          else {
            if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
               (**(int **)(lVar13 + 0x50) < 1)) {
              sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
            }
            else {
              sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
            }
            if (sVar9 == -1) goto LAB_18025fa6a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_18025faa2;
        }
      }
      local_f6 = '\x01';
      FUN_18024d290(param_3);
      *pcVar29 = 'x';
      local_f0 = param_1 + 2;
LAB_18025faa2:
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
LAB_18025fcb8:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_18025fcf9:
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
            if (sVar9 == -1) goto LAB_18025fcf9;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_18025fd42:
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
            if (sVar9 == -1) goto LAB_18025fd42;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_18025fd5a;
        }
        else if (*param_4 != 0) goto LAB_18025fd5a;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_18025fdfe:
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
            if (sVar9 == -1) goto LAB_18025fdfe;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_18025fd5a;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_18025fe63:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_18025fe41:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_18025fe41;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_18025fe63;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = '\x01';
        }
        goto LAB_18025fcb8;
      }
LAB_18025fad4:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_18025fb19:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_18025fb19;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_18025fb6b:
          *param_4 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_18025fb6b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_18026032c;
      }
      else if (*param_4 != 0) goto LAB_18026032c;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_18025fbd8:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_18025fbd8;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_18026032c;
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
LAB_18025fca2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_18025fc82:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_18025fc82;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_18025fca2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_18025fad4;
    }
  }
  else if (*param_4 == 0) goto LAB_18025f9b3;
  *pcVar29 = '\0';
LAB_1802610f8:
  FUN_180001ef2(local_a0);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_128);
LAB_18025fd5a:
  FUN_18023f000(local_c0,1,uVar10);
  uVar12 = local_c8;
  lVar13 = 0;
  uVar25 = (ulonglong)local_e8;
LAB_18025fd80:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18025fe91:
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
      if (sVar9 == -1) goto LAB_18025fe91;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_18025fee3:
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
      if (sVar9 == -1) goto LAB_18025fee3;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_18025feff;
  }
  else if (*param_4 != 0) goto LAB_18025feff;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_18025ff78:
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
      if (sVar9 == -1) goto LAB_18025ff78;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
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
LAB_18026005d:
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
        if (sVar9 == -1) goto LAB_18026005d;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_18025feff;
    ppppppcVar15 = local_c0;
    if (0xf < local_a8) {
      ppppppcVar15 = (char ******)local_c0[0];
    }
    if (*(char *)((longlong)ppppppcVar15 + lVar13) == '\0') {
      local_f8 = '\x01';
    }
    else {
      FUN_180003bf2(local_c0);
      lVar13 = lVar13 + 1;
    }
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1802600ee:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1802600ce:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1802600ce;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_1802600ee;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_18025fd80;
LAB_18025feff:
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
LAB_180260110:
  if ((char)param_3[1] == '\0') {
    lVar22 = *param_3;
    if (lVar22 == 0) {
LAB_180260151:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_180260151;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar22 = *param_4;
    if (lVar22 == 0) {
LAB_18026019f:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18026019f;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar22 = *param_3;
  if (lVar22 == 0) {
    if (*param_4 == 0) goto LAB_1802601c3;
  }
  else if (*param_4 != 0) goto LAB_1802601c3;
  if ((char)param_3[1] == '\0') {
    if (lVar22 == 0) {
LAB_18026029f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar22 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar22 + 0x50) < 1)) {
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar9 = *(short *)**(undefined8 **)(lVar22 + 0x38);
      }
      if (sVar9 == -1) goto LAB_18026029f;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1802601c3;
  lVar22 = *param_3;
  if (lVar22 == 0) {
LAB_180260309:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = '\x01';
  }
  else {
    if (**(longlong **)(lVar22 + 0x38) == 0) {
LAB_1802602e7:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar22 + 0x50);
      if (iVar1 < 1) goto LAB_1802602e7;
      **(int **)(lVar22 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar22 + 0x38);
      **(longlong **)(lVar22 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_180260309;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = '\x01';
  }
  goto LAB_180260110;
LAB_1802601c3:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar23 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  uVar25 = (ulonglong)local_e8;
  if (local_f8 == '\0') {
LAB_1802601f5:
    do {
      do {
        if (lVar13 == 0) goto LAB_180260323;
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
        if (lVar13 != 0) goto LAB_1802601f5;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = '\x01';
  }
LAB_180260323:
  FUN_180001ef2(local_c0);
LAB_18026032c:
  if (((local_f6 != '\0') && (local_f7 != '\0')) && (iVar28 == 0)) {
    *local_f0 = '0';
    local_f0 = local_f0 + 1;
  }
  puVar17 = (undefined8 *)FUN_180287560();
  cVar21 = *(char *)*puVar17;
  local_f5 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1802603a4:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1802603a4;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1802603f6:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar13 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1802603f6;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar29 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_180260473:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1802604b5:
          *param_3 = 0;
        }
        else {
          if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar13 + 0x50) < 1)) {
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar7 = *(short *)**(undefined8 **)(lVar13 + 0x38);
          }
          if (sVar7 == -1) goto LAB_1802604b5;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      sVar7 = *(short *)((longlong)param_3 + 10);
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar11);
      pcVar29 = local_f0;
      if (sVar7 == sVar9) {
        *local_f0 = cVar21;
        pcVar29 = local_f0 + 1;
        lVar11 = *param_3;
        local_f0 = pcVar29;
        if (lVar11 != 0) {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260522:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_180260522;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_180260419;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_180260473;
LAB_180260419:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar28 == 0) {
LAB_180260433:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_180260569:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_180260569;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1802605b3:
        *param_4 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_1802605b3;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1802605cb;
    }
    else if (*param_4 != 0) goto LAB_1802605cb;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_180260661:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar13 + 0x50) < 1)) {
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
        }
        if (sVar9 == -1) goto LAB_180260661;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1802605cb;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_1802606d1:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1802606ae:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_1802606ae;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_1802606d1;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_180260433;
  }
LAB_1802605e3:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_1802606fa:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_1802606fa;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_18026074c:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_18026074c;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180260770;
  }
  else if (*param_4 != 0) goto LAB_180260770;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180260875:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_180260875;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_180260770;
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
LAB_180260929:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260909:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_180260909;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180260929;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1802605e3;
LAB_1802605cb:
  uVar25 = (ulonglong)local_e8;
  pcVar29 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_1802605e3;
LAB_180260770:
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
      if (cVar18 != cVar6) goto LAB_1802607b3;
    }
    *pcVar27 = cVar18 + '\x01';
  }
LAB_1802607b3:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar29;
  if (cVar21 == '\0') goto LAB_1802610f8;
  lVar22 = 0;
  local_d0 = 0;
  sVar7 = *(short *)((longlong)local_80 + lVar11);
  sVar9 = *(short *)((longlong)local_80 + lVar13);
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_180260956:
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
      if (sVar8 == -1) goto LAB_180260956;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1802609a2:
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
      if (sVar8 == -1) goto LAB_1802609a2;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180260d9e;
  }
  else if (*param_4 != 0) goto LAB_180260d9e;
  cVar21 = (char)param_3[1];
  if (cVar21 == '\0') {
    if (lVar11 == 0) {
LAB_180260a0c:
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
      if (sVar8 == -1) goto LAB_180260a0c;
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
LAB_180260a60:
        *param_3 = 0;
        sVar8 = *(short *)((longlong)param_3 + 10);
      }
      else {
        if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          sVar8 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar8 = *(short *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (sVar8 == -1) goto LAB_180260a60;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != sVar9) {
LAB_180260d9e:
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
LAB_180260dc4:
      lVar19 = lVar11;
      if ((((-1 < lVar22) && (-1 < lVar13)) && ((lVar11 <= lVar22 || ((longlong)uVar12 <= lVar13))))
         || (((lVar22 < 1 && (lVar13 < 1)) &&
             ((lVar19 = -lVar11, lVar22 <= lVar19 || (lVar13 <= (longlong)-uVar12))))))
      goto LAB_180261041;
      lVar19 = -lVar22;
      if (-lVar22 < 0) {
        lVar19 = lVar22;
      }
      if (lVar19 <= lVar11) {
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar12) goto LAB_18026101b;
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
      goto LAB_180260dc4;
    }
  }
  bVar4 = false;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180260b02:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260aae:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180260aae;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180260b02;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar11 = *param_3;
    if (lVar11 == 0) goto LAB_180260b02;
    if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar11 + 0x50) < 1)) {
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
    }
    if (sVar7 == -1) goto LAB_180260b02;
    *(short *)((longlong)param_3 + 10) = sVar7;
  }
  bVar5 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_180260b51:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_180260b51;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  sVar7 = local_f4;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180260c90;
  }
  else if (*param_4 != 0) goto LAB_180260c90;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180260bb9:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (sVar7 == -1) goto LAB_180260bb9;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_e4) {
    sVar7 = local_f4;
    if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_180260c90;
    bVar4 = true;
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260c61:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar28 = **(int **)(lVar11 + 0x50);
        if (iVar28 < 1) goto LAB_180260c61;
        **(int **)(lVar11 + 0x50) = iVar28 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_180260c90;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
    goto LAB_180260c90;
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260bfd:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180260bfd;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      sVar7 = local_f4;
      goto LAB_180260c90;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  sVar7 = local_f4;
LAB_180260c90:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_180260cd0:
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
      if (sVar9 == -1) goto LAB_180260cd0;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_180260d1d:
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
      if (sVar9 == -1) goto LAB_180260d1d;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  cVar24 = local_f6;
  lVar22 = local_d0;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180260d55;
  }
  else if (*param_4 != 0) goto LAB_180260d55;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180260ebb:
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
      if (sVar9 == -1) goto LAB_180260ebb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar22 = local_d0;
  cVar24 = local_f6;
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_180260d55;
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180260f29:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260f07:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180260f07;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_180260f29;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180260c90;
LAB_180260d55:
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_180260d88;
  }
  else if (*param_4 != 0) goto LAB_180260d88;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  lVar11 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar12 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar12) goto LAB_180260d88;
  if ((lVar22 < 0xccccccccccccccc) || ((lVar22 == 0xccccccccccccccc && ((longlong)uVar12 < 8)))) {
    lVar22 = uVar12 + lVar22 * 10;
  }
  else {
    lVar22 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180260ff3:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180260fd3:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180260fd3;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180260ff3;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180260d55;
LAB_180260d88:
  if (bVar4) {
    lVar22 = -lVar22;
  }
  pcVar29 = local_f0;
  if (!bVar5) goto LAB_1802610f8;
  goto LAB_180260d9e;
LAB_18026101b:
  if (cVar24 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar22;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_180261041:
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
    thunk_FUN_18023adf0(pcVar27,pcVar29);
  }
  *pcVar29 = '\0';
  goto LAB_1802610f8;
}

