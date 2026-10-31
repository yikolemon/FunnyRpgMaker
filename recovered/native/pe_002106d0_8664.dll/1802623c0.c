/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802623c0 */

/* WARNING: Removing unreachable block (ram,0x000180263283) */

void FUN_1802623c0(undefined1 *param_1,int param_2,longlong *param_3,longlong *param_4,
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
  uVar10 = FUN_180093388(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)
            (uVar10,"0123456789ABCDEFabcdef-+XxPp",&DAT_180327cb5,local_80);
  local_e4 = local_52;
  local_e2 = local_54;
  local_f4 = local_80[0];
  lVar11 = FUN_180047447(param_5);
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
LAB_1802624a8:
      if ((char)param_3[1] == '\0') {
        if (lVar11 == 0) {
LAB_1802624e6:
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
          if (sVar9 == -1) goto LAB_1802624e6;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar11 = *param_4;
        if (lVar11 == 0) {
LAB_180262530:
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
          if (sVar9 == -1) goto LAB_180262530;
          *(short *)((longlong)param_4 + 10) = sVar9;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      lVar11 = local_d0;
      cVar21 = cVar24;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_180262553;
      }
      else if (*param_4 != 0) goto LAB_180262553;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1802625d1:
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
          if (sVar9 == -1) goto LAB_1802625d1;
          *(short *)((longlong)param_3 + 10) = sVar9;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar11 = local_d0;
      if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_180262553;
      lVar11 = *param_3;
      if (lVar11 == 0) {
LAB_180262638:
        *param_3 = 0;
        lVar11 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        cVar24 = '\x01';
        uVar26 = 0;
      }
      else {
        if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180262615:
          sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar28 = **(int **)(lVar11 + 0x50);
          if (iVar28 < 1) goto LAB_180262615;
          **(int **)(lVar11 + 0x50) = iVar28 + -1;
          psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
          **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
          sVar9 = *psVar2;
        }
        if (sVar9 == -1) goto LAB_180262638;
        lVar11 = *param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        cVar24 = '\x01';
      }
      goto LAB_1802624a8;
    }
  }
LAB_180262553:
  local_f8 = cVar21;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_18026266e:
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
      if (sVar9 == -1) goto LAB_18026266e;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1802626bc:
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
      if (sVar9 == -1) goto LAB_1802626bc;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1802626e3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_180262725:
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
          if (sVar9 == -1) goto LAB_180262725;
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
LAB_180262771:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar28 = **(int **)(lVar13 + 0x50);
            if (iVar28 < 1) goto LAB_180262771;
            **(int **)(lVar13 + 0x50) = iVar28 + -1;
            psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
            **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1802627af;
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
  else if (*param_4 == 0) goto LAB_1802626e3;
LAB_1802627af:
  *param_1 = 0x30;
  pcVar29 = param_1 + 1;
  local_f6 = '\0';
  uVar10 = 0;
  local_f7 = '\0';
  local_f0 = pcVar29;
  if ((char)param_3[1] == '\0') {
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_18026280d:
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
      if (sVar9 == -1) goto LAB_18026280d;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_18026285e:
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
      if (sVar9 == -1) goto LAB_18026285e;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 == 0) goto LAB_180262ad2;
  }
  else if (*param_4 != 0) goto LAB_180262ad2;
  if ((char)param_3[1] == '\0') {
    if (lVar13 == 0) {
LAB_1802628cb:
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
      if (sVar9 == -1) goto LAB_1802628cb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_f4) goto LAB_180262ad2;
  lVar13 = *param_3;
  if (lVar13 == 0) {
LAB_180262976:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_18026291c:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar13 + 0x50);
      if (iVar28 < 1) goto LAB_18026291c;
      **(int **)(lVar13 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
      **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_180262976;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar13 = *param_3;
    if (lVar13 == 0) goto LAB_180262976;
    if (((short *)**(undefined8 **)(lVar13 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar13 + 0x50) < 1)) {
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      sVar9 = *(short *)**(undefined8 **)(lVar13 + 0x38);
    }
    if (sVar9 == -1) goto LAB_180262976;
    *(short *)((longlong)param_3 + 10) = sVar9;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_1802629c7:
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
      if (sVar9 == -1) goto LAB_1802629c7;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1802629e3:
      cVar21 = (char)param_3[1];
      if (cVar21 == '\0') {
        if (lVar13 == 0) {
LAB_180262a40:
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
          if (sVar9 == -1) goto LAB_180262a40;
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
LAB_180262a9a:
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
            if (sVar9 == -1) goto LAB_180262a9a;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar9 != local_50) {
          uVar10 = 1;
          local_f7 = '\x01';
          goto LAB_180262ad2;
        }
      }
      local_f6 = '\x01';
      FUN_18024d290(param_3);
      *pcVar29 = 'x';
      local_f0 = param_1 + 2;
LAB_180262ad2:
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
LAB_180262ce8:
        if ((char)param_3[1] == '\0') {
          lVar11 = *param_3;
          if (lVar11 == 0) {
LAB_180262d29:
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
            if (sVar9 == -1) goto LAB_180262d29;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if ((char)param_4[1] == '\0') {
          lVar11 = *param_4;
          if (lVar11 == 0) {
LAB_180262d72:
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
            if (sVar9 == -1) goto LAB_180262d72;
            *(short *)((longlong)param_4 + 10) = sVar9;
          }
          *(undefined1 *)(param_4 + 1) = 1;
        }
        lVar11 = *param_3;
        if (lVar11 == 0) {
          if (*param_4 == 0) goto LAB_180262d8a;
        }
        else if (*param_4 != 0) goto LAB_180262d8a;
        if ((char)param_3[1] == '\0') {
          if (lVar11 == 0) {
LAB_180262e2e:
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
            if (sVar9 == -1) goto LAB_180262e2e;
            *(short *)((longlong)param_3 + 10) = sVar9;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_180262d8a;
        lVar11 = *param_3;
        if (lVar11 == 0) {
LAB_180262e93:
          *param_3 = 0;
          *(undefined1 *)(param_3 + 1) = 1;
          local_f8 = '\x01';
        }
        else {
          if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180262e71:
            sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_180262e71;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar9 = *psVar2;
          }
          if (sVar9 == -1) goto LAB_180262e93;
          *(undefined1 *)(param_3 + 1) = 0;
          local_f8 = '\x01';
        }
        goto LAB_180262ce8;
      }
LAB_180262b04:
      if ((char)param_3[1] == '\0') {
        lVar13 = *param_3;
        if (lVar13 == 0) {
LAB_180262b49:
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
          if (sVar7 == -1) goto LAB_180262b49;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        lVar13 = *param_4;
        if (lVar13 == 0) {
LAB_180262b9b:
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
          if (sVar7 == -1) goto LAB_180262b9b;
          *(short *)((longlong)param_4 + 10) = sVar7;
        }
        *(undefined1 *)(param_4 + 1) = 1;
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        if (*param_4 == 0) goto LAB_18026335c;
      }
      else if (*param_4 != 0) goto LAB_18026335c;
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_180262c08:
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
          if (sVar7 == -1) goto LAB_180262c08;
          *(short *)((longlong)param_3 + 10) = sVar7;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      lVar13 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
      uVar14 = lVar13 - (longlong)local_80 >> 1;
      if (uVar12 <= uVar14) goto LAB_18026335c;
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
LAB_180262cd2:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_180262cb2:
          sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          iVar1 = **(int **)(lVar13 + 0x50);
          if (iVar1 < 1) goto LAB_180262cb2;
          **(int **)(lVar13 + 0x50) = iVar1 + -1;
          psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
          **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
          sVar7 = *psVar2;
        }
        if (sVar7 == -1) goto LAB_180262cd2;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_180262b04;
    }
  }
  else if (*param_4 == 0) goto LAB_1802629e3;
  *pcVar29 = '\0';
LAB_180264128:
  FUN_180001ef2(local_a0);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_128);
LAB_180262d8a:
  FUN_18023f000(local_c0,1,uVar10);
  uVar12 = local_c8;
  lVar13 = 0;
  uVar25 = (ulonglong)local_e8;
LAB_180262db0:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_180262ec1:
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
      if (sVar9 == -1) goto LAB_180262ec1;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_180262f13:
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
      if (sVar9 == -1) goto LAB_180262f13;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180262f2f;
  }
  else if (*param_4 != 0) goto LAB_180262f2f;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180262fa8:
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
      if (sVar9 == -1) goto LAB_180262fa8;
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
LAB_18026308d:
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
        if (sVar9 == -1) goto LAB_18026308d;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_180262f2f;
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
LAB_18026311e:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1802630fe:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1802630fe;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_18026311e;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180262db0;
LAB_180262f2f:
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
LAB_180263140:
  if ((char)param_3[1] == '\0') {
    lVar22 = *param_3;
    if (lVar22 == 0) {
LAB_180263181:
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
      if (sVar9 == -1) goto LAB_180263181;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar22 = *param_4;
    if (lVar22 == 0) {
LAB_1802631cf:
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
      if (sVar9 == -1) goto LAB_1802631cf;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar22 = *param_3;
  if (lVar22 == 0) {
    if (*param_4 == 0) goto LAB_1802631f3;
  }
  else if (*param_4 != 0) goto LAB_1802631f3;
  if ((char)param_3[1] == '\0') {
    if (lVar22 == 0) {
LAB_1802632cf:
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
      if (sVar9 == -1) goto LAB_1802632cf;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1802631f3;
  lVar22 = *param_3;
  if (lVar22 == 0) {
LAB_180263339:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    local_f8 = '\x01';
  }
  else {
    if (**(longlong **)(lVar22 + 0x38) == 0) {
LAB_180263317:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar22 + 0x50);
      if (iVar1 < 1) goto LAB_180263317;
      **(int **)(lVar22 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar22 + 0x38);
      **(longlong **)(lVar22 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_180263339;
    *(undefined1 *)(param_3 + 1) = 0;
    local_f8 = '\x01';
  }
  goto LAB_180263140;
LAB_1802631f3:
  ppppppcVar15 = local_a0;
  if (0xf < local_88) {
    ppppppcVar15 = (char ******)local_a0[0];
  }
  ppppppcVar23 = (char ******)((longlong)ppppppcVar15 + local_90);
  cVar21 = '\0';
  uVar25 = (ulonglong)local_e8;
  if (local_f8 == '\0') {
LAB_180263225:
    do {
      do {
        if (lVar13 == 0) goto LAB_180263353;
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
        if (lVar13 != 0) goto LAB_180263225;
      }
      ppppppcVar16 = local_c0;
      if (0xf < local_a8) {
        ppppppcVar16 = (char ******)local_c0[0];
      }
    } while (*(char *)ppppppcVar16 <= cVar21);
    local_f8 = '\x01';
  }
LAB_180263353:
  FUN_180001ef2(local_c0);
LAB_18026335c:
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
LAB_1802633d4:
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
      if (sVar7 == -1) goto LAB_1802633d4;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar13 = *param_4;
    if (lVar13 == 0) {
LAB_180263426:
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
      if (sVar7 == -1) goto LAB_180263426;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar13 = *param_3;
  pcVar29 = local_f0;
  if (lVar13 == 0) {
    if (*param_4 != 0) {
LAB_1802634a3:
      if ((char)param_3[1] == '\0') {
        if (lVar13 == 0) {
LAB_1802634e5:
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
          if (sVar7 == -1) goto LAB_1802634e5;
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
LAB_180263552:
            sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar1 = **(int **)(lVar11 + 0x50);
            if (iVar1 < 1) goto LAB_180263552;
            **(int **)(lVar11 + 0x50) = iVar1 + -1;
            psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
            **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
            sVar7 = *psVar2;
          }
          if (sVar7 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_180263449;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1802634a3;
LAB_180263449:
  sVar7 = local_f4;
  lVar11 = local_d8;
  cVar21 = local_f7;
  uVar12 = local_c8;
  if (iVar28 == 0) {
LAB_180263463:
    if ((char)param_3[1] == '\0') {
      lVar13 = *param_3;
      if (lVar13 == 0) {
LAB_180263599:
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
        if (sVar9 == -1) goto LAB_180263599;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      lVar13 = *param_4;
      if (lVar13 == 0) {
LAB_1802635e3:
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
        if (sVar9 == -1) goto LAB_1802635e3;
        *(short *)((longlong)param_4 + 10) = sVar9;
      }
      *(undefined1 *)(param_4 + 1) = 1;
    }
    lVar13 = *param_3;
    if (lVar13 == 0) {
      if (*param_4 == 0) goto LAB_1802635fb;
    }
    else if (*param_4 != 0) goto LAB_1802635fb;
    if ((char)param_3[1] == '\0') {
      if (lVar13 == 0) {
LAB_180263691:
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
        if (sVar9 == -1) goto LAB_180263691;
        *(short *)((longlong)param_3 + 10) = sVar9;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_1802635fb;
    local_f7 = '\x01';
    lVar13 = *param_3;
    if (lVar13 == 0) {
LAB_180263701:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      lVar11 = lVar11 + -1;
    }
    else {
      if (**(longlong **)(lVar13 + 0x38) == 0) {
LAB_1802636de:
        sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar1 = **(int **)(lVar13 + 0x50);
        if (iVar1 < 1) goto LAB_1802636de;
        **(int **)(lVar13 + 0x50) = iVar1 + -1;
        psVar2 = (short *)**(longlong **)(lVar13 + 0x38);
        **(longlong **)(lVar13 + 0x38) = (longlong)(psVar2 + 1);
        sVar9 = *psVar2;
      }
      if (sVar9 == -1) goto LAB_180263701;
      *(undefined1 *)(param_3 + 1) = 0;
      lVar11 = lVar11 + -1;
    }
    goto LAB_180263463;
  }
LAB_180263613:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_18026372a:
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
      if (sVar7 == -1) goto LAB_18026372a;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_18026377c:
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
      if (sVar7 == -1) goto LAB_18026377c;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1802637a0;
  }
  else if (*param_4 != 0) goto LAB_1802637a0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1802638a5:
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
      if (sVar7 == -1) goto LAB_1802638a5;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar11 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar14 = lVar11 - (longlong)local_80 >> 1;
  if (uVar12 <= uVar14) goto LAB_1802637a0;
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
LAB_180263959:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180263939:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_180263939;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180263959;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180263613;
LAB_1802635fb:
  uVar25 = (ulonglong)local_e8;
  pcVar29 = local_f0;
  cVar21 = local_f7;
  local_d8 = lVar11;
  uVar12 = local_c8;
  goto LAB_180263613;
LAB_1802637a0:
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
      if (cVar18 != cVar6) goto LAB_1802637e3;
    }
    *pcVar27 = cVar18 + '\x01';
  }
LAB_1802637e3:
  lVar11 = 0x28;
  if (local_f6 != '\0') {
    lVar11 = 0x36;
  }
  lVar13 = 0x1c;
  if (local_f6 != '\0') {
    lVar13 = 0x34;
  }
  local_f0 = pcVar29;
  if (cVar21 == '\0') goto LAB_180264128;
  lVar22 = 0;
  local_d0 = 0;
  sVar7 = *(short *)((longlong)local_80 + lVar11);
  sVar9 = *(short *)((longlong)local_80 + lVar13);
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_180263986:
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
      if (sVar8 == -1) goto LAB_180263986;
      *(short *)((longlong)param_3 + 10) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_1802639d2:
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
      if (sVar8 == -1) goto LAB_1802639d2;
      *(short *)((longlong)param_4 + 10) = sVar8;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180263dce;
  }
  else if (*param_4 != 0) goto LAB_180263dce;
  cVar21 = (char)param_3[1];
  if (cVar21 == '\0') {
    if (lVar11 == 0) {
LAB_180263a3c:
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
      if (sVar8 == -1) goto LAB_180263a3c;
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
LAB_180263a90:
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
        if (sVar8 == -1) goto LAB_180263a90;
        *(short *)((longlong)param_3 + 10) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != sVar9) {
LAB_180263dce:
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
LAB_180263df4:
      lVar19 = lVar11;
      if ((((-1 < lVar22) && (-1 < lVar13)) && ((lVar11 <= lVar22 || ((longlong)uVar12 <= lVar13))))
         || (((lVar22 < 1 && (lVar13 < 1)) &&
             ((lVar19 = -lVar11, lVar22 <= lVar19 || (lVar13 <= (longlong)-uVar12))))))
      goto LAB_180264071;
      lVar19 = -lVar22;
      if (-lVar22 < 0) {
        lVar19 = lVar22;
      }
      if (lVar19 <= lVar11) {
        lVar20 = -lVar13;
        if (-lVar13 < 0) {
          lVar20 = lVar13;
        }
        if (lVar20 <= (longlong)uVar12) goto LAB_18026404b;
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
      goto LAB_180263df4;
    }
  }
  bVar4 = false;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180263b32:
    *param_3 = 0;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180263ade:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180263ade;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180263b32;
    *(undefined1 *)(param_3 + 1) = 0;
    lVar11 = *param_3;
    if (lVar11 == 0) goto LAB_180263b32;
    if (((short *)**(undefined8 **)(lVar11 + 0x38) == (short *)0x0) ||
       (**(int **)(lVar11 + 0x50) < 1)) {
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      sVar7 = *(short *)**(undefined8 **)(lVar11 + 0x38);
    }
    if (sVar7 == -1) goto LAB_180263b32;
    *(short *)((longlong)param_3 + 10) = sVar7;
  }
  bVar5 = false;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_180263b81:
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
      if (sVar7 == -1) goto LAB_180263b81;
      *(short *)((longlong)param_4 + 10) = sVar7;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  sVar7 = local_f4;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180263cc0;
  }
  else if (*param_4 != 0) goto LAB_180263cc0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180263be9:
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
      if (sVar7 == -1) goto LAB_180263be9;
      *(short *)((longlong)param_3 + 10) = sVar7;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((longlong)param_3 + 10) != local_e4) {
    sVar7 = local_f4;
    if (*(short *)((longlong)param_3 + 10) != local_e2) goto LAB_180263cc0;
    bVar4 = true;
    lVar11 = *param_3;
    if (lVar11 != 0) {
      if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180263c91:
        sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar28 = **(int **)(lVar11 + 0x50);
        if (iVar28 < 1) goto LAB_180263c91;
        **(int **)(lVar11 + 0x50) = iVar28 + -1;
        psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
        **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
        sVar7 = *psVar2;
      }
      if (sVar7 != -1) {
        *(undefined1 *)(param_3 + 1) = 0;
        sVar7 = local_f4;
        goto LAB_180263cc0;
      }
    }
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
    sVar7 = local_f4;
    goto LAB_180263cc0;
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180263c2d:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180263c2d;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      sVar7 = local_f4;
      goto LAB_180263cc0;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
  sVar7 = local_f4;
LAB_180263cc0:
  if ((char)param_3[1] == '\0') {
    lVar11 = *param_3;
    if (lVar11 == 0) {
LAB_180263d00:
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
      if (sVar9 == -1) goto LAB_180263d00;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar11 = *param_4;
    if (lVar11 == 0) {
LAB_180263d4d:
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
      if (sVar9 == -1) goto LAB_180263d4d;
      *(short *)((longlong)param_4 + 10) = sVar9;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar11 = *param_3;
  cVar24 = local_f6;
  lVar22 = local_d0;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_180263d85;
  }
  else if (*param_4 != 0) goto LAB_180263d85;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_180263eeb:
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
      if (sVar9 == -1) goto LAB_180263eeb;
      *(short *)((longlong)param_3 + 10) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar22 = local_d0;
  cVar24 = local_f6;
  if (*(short *)((longlong)param_3 + 10) != sVar7) goto LAB_180263d85;
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180263f59:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180263f37:
      sVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180263f37;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar9 = *psVar2;
    }
    if (sVar9 == -1) goto LAB_180263f59;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180263cc0;
LAB_180263d85:
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_180263db8;
  }
  else if (*param_4 != 0) goto LAB_180263db8;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  lVar11 = thunk_FUN_18023b000(local_80,local_48,*(undefined2 *)((longlong)param_3 + 10));
  uVar12 = lVar11 - (longlong)local_80 >> 1;
  if (9 < uVar12) goto LAB_180263db8;
  if ((lVar22 < 0xccccccccccccccc) || ((lVar22 == 0xccccccccccccccc && ((longlong)uVar12 < 8)))) {
    lVar22 = uVar12 + lVar22 * 10;
  }
  else {
    lVar22 = 0x7fffffffffffffff;
  }
  bVar5 = true;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_180264023:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_180264003:
      sVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar28 = **(int **)(lVar11 + 0x50);
      if (iVar28 < 1) goto LAB_180264003;
      **(int **)(lVar11 + 0x50) = iVar28 + -1;
      psVar2 = (short *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(psVar2 + 1);
      sVar7 = *psVar2;
    }
    if (sVar7 == -1) goto LAB_180264023;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180263d85;
LAB_180263db8:
  if (bVar4) {
    lVar22 = -lVar22;
  }
  pcVar29 = local_f0;
  if (!bVar5) goto LAB_180264128;
  goto LAB_180263dce;
LAB_18026404b:
  if (cVar24 != '\0') {
    lVar13 = lVar13 * 4;
  }
  lVar13 = lVar13 + lVar22;
  lVar19 = lVar11;
  if ((lVar13 <= lVar11) && (lVar19 = lVar13, lVar13 < -lVar11)) {
    lVar19 = -lVar11;
  }
LAB_180264071:
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
  goto LAB_180264128;
}

