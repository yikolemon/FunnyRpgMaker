/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025e540 */

void FUN_18025e540(char *param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  short *psVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  char ****ppppcVar8;
  longlong lVar9;
  ulonglong uVar10;
  char ****ppppcVar11;
  char cVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  char *pcVar17;
  char ****ppppcVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auStack_108 [48];
  byte local_d8;
  char local_d7;
  char local_d6;
  char local_d5;
  uint local_d4;
  char *local_d0;
  longlong local_c8;
  char *local_c0;
  char ***local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  char ***local_98 [2];
  longlong local_88;
  ulonglong local_80;
  short local_78 [22];
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  uVar7 = FUN_1802565b0(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7,local_98);
  if (local_88 == 0) {
    uVar16 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar7);
    uVar16 = (uint)uVar4;
  }
  local_d4 = uVar16;
  uVar7 = FUN_1802530d0(param_5);
  (*(code *)PTR__guard_dispatch_icall_18038bc80)
            (uVar7,"0123456789ABCDEFabcdef-+Xx",&DAT_180327c53,local_78);
  local_d7 = '\0';
  sVar6 = (short)uVar16;
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_18025e605:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_18025e642:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025e642;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_18025e68e:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025e68e;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_18025e6a9;
    }
    else if (*param_3 != 0) goto LAB_18025e6a9;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_18025e72c:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025e72c;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_18025e6a9;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025e793:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025e770:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_18025e770;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_18025e793;
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_18025e605;
  }
LAB_18025e6a9:
  cVar15 = (char)param_2[1];
  local_d0 = param_1;
  if (cVar15 == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025e7be:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_18025e7be;
      *(short *)((longlong)param_2 + 10) = sVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar15 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_18025e80f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar5 == -1) goto LAB_18025e80f;
      *(short *)((longlong)param_3 + 10) = sVar5;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar15 = (char)param_2[1];
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 != 0) {
LAB_18025e835:
      if (cVar15 == '\0') {
        if (lVar21 != 0) {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar5 != -1) {
            *(short *)((longlong)param_2 + 10) = sVar5;
            *(undefined1 *)(param_2 + 1) = 1;
            cVar15 = '\x01';
            goto LAB_18025e891;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
LAB_18025e891:
      if (*(short *)((longlong)param_2 + 10) == local_4a) {
        *param_1 = '+';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025e8da:
            sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_18025e8da;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            cVar15 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_18025e965;
          }
        }
        *param_2 = 0;
        cVar15 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (*(short *)((longlong)param_2 + 10) != local_4c) goto LAB_18025e965;
        *param_1 = '-';
        local_d0 = param_1 + 1;
        lVar21 = *param_2;
        if (lVar21 != 0) {
          if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025e942:
            sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            iVar2 = **(int **)(lVar21 + 0x50);
            if (iVar2 < 1) goto LAB_18025e942;
            **(int **)(lVar21 + 0x50) = iVar2 + -1;
            psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
            **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
            sVar5 = *psVar3;
          }
          if (sVar5 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar15 = '\0';
            goto LAB_18025e965;
          }
        }
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
        cVar15 = '\x01';
      }
    }
  }
  else if (*param_3 == 0) goto LAB_18025e835;
LAB_18025e965:
  if (sVar6 != 0) {
    lVar21 = *param_2;
LAB_18025e971:
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_18025e9ac:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025e9ac;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_18025e9f8:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025e9f8;
        *(short *)((longlong)param_3 + 10) = sVar5;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 == 0) {
      if (*param_3 == 0) goto LAB_18025ea13;
    }
    else if (*param_3 != 0) goto LAB_18025ea13;
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_18025ea70:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025ea70;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_18025ea13;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025ead3:
      *param_2 = 0;
      cVar15 = '\x01';
      *(undefined1 *)(param_2 + 1) = 1;
      local_d7 = '\x01';
      lVar21 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025eab0:
        sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_18025eab0;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_18025ead3;
      cVar15 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      local_d7 = '\x01';
      lVar21 = *param_2;
    }
    goto LAB_18025e971;
  }
LAB_18025ea13:
  if ((param_4 & 0xe00) == 0x400) {
    bVar14 = 8;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar14 = 0x10;
  }
  else {
    bVar14 = -((param_4 & 0xe00) != 0) & 10;
  }
  local_d5 = '\0';
  local_d8 = bVar14;
  if ((char)param_2[1] == '\0') {
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025eb43:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025eb43;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar21 = *param_3;
    if (lVar21 == 0) {
LAB_18025eb8f:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025eb8f;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar21 = *param_2;
  if (lVar21 == 0) {
    if (*param_3 == 0) goto LAB_18025ebaa;
LAB_18025ebdd:
    if ((char)param_2[1] == '\0') {
      if (lVar21 == 0) {
LAB_18025ec1a:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_18025ec1a;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((longlong)param_2 + 10) != local_78[0]) goto LAB_18025ebaa;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025ecb2:
      *param_2 = 0;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025ec62:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_18025ec62;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_18025ecb2;
      *(undefined1 *)(param_2 + 1) = 0;
      lVar21 = *param_2;
      if (lVar21 == 0) goto LAB_18025ecb2;
      if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar21 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025ecb2;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    if ((char)param_3[1] == '\0') {
      lVar21 = *param_3;
      if (lVar21 == 0) {
LAB_18025ecfe:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_18025ecfe;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    lVar21 = *param_2;
    if (lVar21 != 0) {
      if (*param_3 == 0) goto LAB_18025ed38;
LAB_18025ed19:
      bVar22 = 1;
      local_d6 = '\x01';
      if (bVar14 == 0) {
        bVar14 = 8;
        local_d8 = 8;
        goto LAB_18025ebc2;
      }
      goto LAB_18025ebb9;
    }
    if (*param_3 == 0) goto LAB_18025ed19;
LAB_18025ed38:
    cVar15 = (char)param_2[1];
    if (cVar15 == '\0') {
      if (lVar21 == 0) {
LAB_18025ed77:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar21 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
        }
        if (sVar6 == -1) goto LAB_18025ed77;
        *(short *)((longlong)param_2 + 10) = sVar6;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    sVar6 = *(short *)((longlong)param_2 + 10);
    if (sVar6 != local_46) {
      if (cVar15 == '\0') {
        lVar21 = *param_2;
        if (lVar21 == 0) {
LAB_18025edc8:
          *param_2 = 0;
          sVar6 = *(short *)((longlong)param_2 + 10);
        }
        else {
          if (((short *)**(undefined8 **)(lVar21 + 0x38) == (short *)0x0) ||
             (**(int **)(lVar21 + 0x50) < 1)) {
            sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
          }
          else {
            sVar6 = *(short *)**(undefined8 **)(lVar21 + 0x38);
          }
          if (sVar6 == -1) goto LAB_18025edc8;
          *(short *)((longlong)param_2 + 10) = sVar6;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar6 != local_48) goto LAB_18025ed19;
    }
    if ((bVar14 & 0xef) != 0) goto LAB_18025ed19;
    bVar14 = 0x10;
    local_d8 = 0x10;
    bVar22 = 0;
    local_d6 = '\0';
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025ee42:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025ee26:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_18025ee26;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_18025ee42;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_18025ebc2:
    uVar20 = 0x16;
    if (bVar14 == 8) {
      uVar20 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_18025ebdd;
LAB_18025ebaa:
    bVar22 = 0;
    local_d6 = '\0';
    if (bVar14 != 0) {
LAB_18025ebb9:
      if (bVar14 != 10) goto LAB_18025ebc2;
    }
    uVar20 = 10;
  }
  cVar15 = local_d5;
  uStack_b0 = 0;
  local_a8 = 1;
  local_a0 = 0xf;
  local_b8 = (char ***)(ulonglong)bVar22;
  lVar21 = 0;
  pcVar17 = local_c0 + 0x1f;
  local_c0 = pcVar17;
LAB_18025ee90:
  if ((char)param_2[1] == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
LAB_18025eed5:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025eed5;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    lVar9 = *param_3;
    if (lVar9 == 0) {
LAB_18025ef26:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025ef26;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar9 = *param_2;
  uVar16 = local_d4;
  if (lVar9 == 0) {
    if (*param_3 == 0) goto LAB_18025ef4d;
  }
  else if (*param_3 != 0) goto LAB_18025ef4d;
  if ((char)param_2[1] == '\0') {
    if (lVar9 == 0) {
LAB_18025f085:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar9 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar9 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025f085;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar9 = thunk_FUN_18023b000(local_78,local_44,*(undefined2 *)((longlong)param_2 + 10));
  uVar16 = local_d4;
  uVar10 = lVar9 - (longlong)local_78 >> 1;
  if (uVar10 < uVar20) {
    cVar12 = "0123456789ABCDEFabcdef-+Xx"[uVar10];
    *local_d0 = cVar12;
    if (((local_d5 != '\0') || (cVar12 != '0')) && (local_d0 < pcVar17)) {
      local_d0 = local_d0 + 1;
      local_d5 = '\x01';
    }
    local_d6 = '\x01';
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) != '\x7f') {
      ppppcVar11 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar11 = (char ****)local_b8;
      }
      *(char *)((longlong)ppppcVar11 + lVar21) = *(char *)((longlong)ppppcVar11 + lVar21) + '\x01';
    }
  }
  else {
    sVar6 = (short)local_d4;
    if (sVar6 == 0) goto LAB_18025ef4d;
    if ((char)param_2[1] == '\0') {
      lVar9 = *param_2;
      if (lVar9 == 0) {
LAB_18025f164:
        *param_2 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar9 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar9 + 0x50) < 1)) {
          sVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
        }
        else {
          sVar5 = *(short *)**(undefined8 **)(lVar9 + 0x38);
        }
        if (sVar5 == -1) goto LAB_18025f164;
        *(short *)((longlong)param_2 + 10) = sVar5;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar10 = local_a8;
    if (*(short *)((longlong)param_2 + 10) != sVar6) goto LAB_18025ef4d;
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) == '\0') {
      local_d7 = '\x01';
    }
    else {
      if (local_a8 < local_a0) {
        uVar1 = local_a8 + 1;
        if (((local_a8 != uVar1) && (0xf < local_a0)) && (DAT_18034e408 != '\0')) {
          pcVar19 = (char *)((longlong)local_b8 + local_a8 + 1);
          pcVar13 = (char *)((ulonglong)((longlong)local_b8 + local_a0 + 8) & 0xfffffffffffffff8);
          pcVar17 = pcVar13;
          if (pcVar19 <= pcVar13) {
            pcVar17 = pcVar19;
          }
          _guard_check_icall(local_b8,pcVar13,pcVar17);
        }
        local_a8 = uVar1;
        ppppcVar11 = &local_b8;
        if (0xf < local_a0) {
          ppppcVar11 = (char ****)local_b8;
        }
        ((char *)((longlong)ppppcVar11 + uVar10))[0] = '\0';
        ((char *)((longlong)ppppcVar11 + uVar10))[1] = '\0';
      }
      else {
        FUN_1802442b0(&local_b8,1,cVar15,0);
      }
      lVar21 = lVar21 + 1;
      pcVar17 = local_c0;
    }
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_18025f27e:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar9 + 0x38) == 0) {
LAB_18025f25b:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar2 = **(int **)(lVar9 + 0x50);
      if (iVar2 < 1) goto LAB_18025f25b;
      **(int **)(lVar9 + 0x50) = iVar2 + -1;
      psVar3 = (short *)**(longlong **)(lVar9 + 0x38);
      **(longlong **)(lVar9 + 0x38) = (longlong)(psVar3 + 1);
      sVar6 = *psVar3;
    }
    if (sVar6 == -1) goto LAB_18025f27e;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_18025ee90;
LAB_18025f31c:
  pcVar17 = local_d0;
  if (local_d5 == '\0') {
    *local_d0 = '0';
    pcVar17 = local_d0 + 1;
  }
  *pcVar17 = '\0';
  goto LAB_18025f34a;
LAB_18025ef4d:
  cVar15 = local_d7;
  local_c8 = lVar21;
  if (lVar21 != 0) {
    ppppcVar11 = &local_b8;
    if (0xf < local_a0) {
      ppppcVar11 = (char ****)local_b8;
    }
    if (*(char *)((longlong)ppppcVar11 + lVar21) < '\x01') {
      cVar15 = '\x01';
    }
    else {
      local_c8 = lVar21 + 1;
    }
  }
  if ((short)uVar16 != 0) {
LAB_18025ef86:
    if ((char)param_2[1] == '\0') {
      FUN_18024d310(param_2);
    }
    if ((char)param_3[1] == '\0') {
      FUN_18024d310(param_3);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_18025efbf;
    }
    else if (*param_3 != 0) goto LAB_18025efbf;
    if ((char)param_2[1] == '\0') {
      FUN_18024d310(param_2);
    }
    if (*(short *)((longlong)param_2 + 10) != (short)uVar16) goto LAB_18025efbf;
    lVar21 = *param_2;
    if (lVar21 == 0) {
LAB_18025f308:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      cVar15 = '\x01';
    }
    else {
      if (**(longlong **)(lVar21 + 0x38) == 0) {
LAB_18025f2e9:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar21 + 0x50);
        if (iVar2 < 1) goto LAB_18025f2e9;
        **(int **)(lVar21 + 0x50) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar21 + 0x38);
        **(longlong **)(lVar21 + 0x38) = (longlong)(psVar3 + 1);
        sVar6 = *psVar3;
      }
      if (sVar6 == -1) goto LAB_18025f308;
      *(undefined1 *)(param_2 + 1) = 0;
      cVar15 = '\x01';
    }
    goto LAB_18025ef86;
  }
LAB_18025efbf:
  ppppcVar11 = local_98;
  if (0xf < local_80) {
    ppppcVar11 = (char ****)local_98[0];
  }
  ppppcVar18 = (char ****)((longlong)ppppcVar11 + local_88);
  cVar12 = '\0';
  lVar21 = local_c8;
  if (local_d6 != '\0') {
LAB_18025efe0:
    do {
      if ((cVar15 != '\0') || (lVar21 == 0)) goto LAB_18025f31c;
      if (ppppcVar11 != ppppcVar18) {
        cVar12 = *(char *)ppppcVar11;
        ppppcVar11 = (char ****)((longlong)ppppcVar11 + 1);
      }
      lVar21 = lVar21 + -1;
    } while (0x7d < (byte)(cVar12 - 1U));
    if (lVar21 == 0) {
LAB_18025f024:
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)ppppcVar8 <= cVar12) goto LAB_18025efe0;
    }
    else {
      ppppcVar8 = &local_b8;
      if (0xf < local_a0) {
        ppppcVar8 = (char ****)local_b8;
      }
      if (*(char *)((longlong)ppppcVar8 + lVar21) == cVar12) {
        if (lVar21 == 0) goto LAB_18025f024;
        goto LAB_18025efe0;
      }
    }
    cVar15 = '\x01';
    goto LAB_18025efe0;
  }
LAB_18025f34a:
  FUN_180001ef2(&local_b8);
  FUN_180001ef2(local_98);
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_108);
}

