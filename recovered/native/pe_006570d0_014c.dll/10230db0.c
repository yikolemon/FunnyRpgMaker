/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10230db0 */

/* WARNING: Removing unreachable block (ram,0x10231a96) */

void FUN_10230db0(undefined1 *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  code *pcVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  lconv *plVar17;
  int iVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  char cVar22;
  char ****ppppcVar23;
  uint uVar24;
  int *piVar25;
  uint local_a0;
  int *local_98;
  uint local_90;
  int local_8c;
  int local_80;
  char *local_70;
  int *local_6c;
  char local_65;
  char ***local_64 [4];
  int local_54;
  uint local_50;
  char ***local_4c [5];
  uint local_38;
  char local_34 [14];
  char acStack_26 [14];
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288925;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_98 = param_3;
  local_70 = param_1;
  piVar10 = (int *)FUN_1001c23e(param_5,local_14);
  pcVar1 = *(code **)(*piVar10 + 0x1c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789ABCDEFabcdef-+XxPp",&DAT_102b7b5d,local_34);
  (*pcVar1)();
  piVar10 = (int *)FUN_1000c417(param_5);
  pcVar1 = *(code **)(*piVar10 + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_64);
  (*pcVar1)();
  local_8 = 0;
  if (local_54 == 0) {
    local_65 = '\0';
  }
  else {
    pcVar1 = *(code **)(*piVar10 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)();
    local_65 = (*pcVar1)();
    bVar4 = false;
    if (local_54 != 0) {
      piVar25 = (int *)*param_3;
LAB_10230ed0:
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_10230f0b:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)piVar25[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_10230f0b;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_100e1fa2();
      }
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_10230e70;
      }
      else if (*param_4 != 0) goto LAB_10230e70;
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_10230f7a:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)piVar25[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_10230f7a;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) != local_65) goto LAB_10230e70;
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_10230fdf:
        *param_3 = 0;
        piVar25 = (int *)0x0;
        *(undefined1 *)(param_3 + 1) = 1;
        bVar4 = true;
      }
      else {
        if (*(int *)piVar25[7] == 0) {
LAB_10230fb9:
          pcVar1 = *(code **)(*piVar25 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar25[0xb];
          if (iVar14 < 1) goto LAB_10230fb9;
          *(int *)piVar25[0xb] = iVar14 + -1;
          pbVar2 = *(byte **)piVar25[7];
          *(byte **)piVar25[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 == 0xffffffff) goto LAB_10230fdf;
        piVar25 = (int *)*param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        bVar4 = true;
      }
      goto LAB_10230ed0;
    }
  }
  bVar4 = false;
LAB_10230e70:
  cVar19 = (char)param_3[1];
  if (cVar19 == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_10231012:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*pcVar1)();
      }
      else {
        uVar11 = (uint)**(byte **)piVar25[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_10231012;
      *(char *)((int)param_3 + 5) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar19 = '\x01';
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
    cVar19 = (char)param_3[1];
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 != 0) {
LAB_1023104c:
      if (cVar19 == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1023108a:
          *param_3 = 0;
          piVar25 = (int *)0x0;
        }
        else {
          if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)piVar25[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_1023108a;
          piVar25 = (int *)*param_3;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar19 = '\x01';
      }
      cVar8 = *(char *)((int)param_3 + 5);
      if (cVar8 == acStack_26[9]) {
        *param_1 = 0x2b;
        local_70 = param_1 + 1;
        piVar25 = (int *)*param_3;
        if (piVar25 != (int *)0x0) {
          if (*(int *)piVar25[7] == 0) {
LAB_102310d2:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_102310d2;
            *(int *)piVar25[0xb] = iVar14 + -1;
            pbVar2 = *(byte **)piVar25[7];
            *(byte **)piVar25[7] = pbVar2 + 1;
            uVar11 = (uint)*pbVar2;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_102311aa;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (cVar19 == '\0') {
          if (piVar25 == (int *)0x0) {
LAB_1023113f:
            uVar11 = (uint)*(byte *)((int)param_3 + 5);
            *param_3 = 0;
          }
          else {
            if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar25 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*pcVar1)();
            }
            else {
              uVar11 = (uint)**(byte **)piVar25[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_1023113f;
            *(char *)((int)param_3 + 5) = (char)uVar11;
          }
          cVar8 = (char)uVar11;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (cVar8 != acStack_26[8]) goto LAB_102311aa;
        *param_1 = 0x2d;
        local_70 = param_1 + 1;
        piVar25 = (int *)*param_3;
        if (piVar25 != (int *)0x0) {
          if (*(int *)piVar25[7] == 0) {
LAB_10231183:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_10231183;
            *(int *)piVar25[0xb] = iVar14 + -1;
            pbVar2 = *(byte **)piVar25[7];
            *(byte **)piVar25[7] = pbVar2 + 1;
            uVar11 = (uint)*pbVar2;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_102311aa;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1023104c;
LAB_102311aa:
  bVar3 = false;
  *local_70 = 0x30;
  pcVar12 = local_70 + 1;
  bVar5 = false;
  local_80 = 0;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_102311fe:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*pcVar1)();
      }
      else {
        uVar11 = (uint)**(byte **)piVar25[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_102311fe;
      *(char *)((int)param_3 + 5) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_10231457;
  }
  else if (*param_4 != 0) goto LAB_10231457;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_10231271:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*pcVar1)();
      }
      else {
        uVar11 = (uint)**(byte **)piVar25[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_10231271;
      *(char *)((int)param_3 + 5) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((int)param_3 + 5) != local_34[0]) goto LAB_10231457;
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
LAB_10231305:
    *param_3 = 0;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_102312af:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar11 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_102312af;
      *(int *)piVar25[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar25[7];
      *(byte **)piVar25[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_10231305;
    piVar25 = (int *)*param_3;
    *(undefined1 *)(param_3 + 1) = 0;
    if (piVar25 == (int *)0x0) goto LAB_10231305;
    if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
      pcVar1 = *(code **)(*piVar25 + 0x18);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar11 = (*pcVar1)();
    }
    else {
      uVar11 = (uint)**(byte **)piVar25[7];
    }
    if (uVar11 == 0xffffffff) goto LAB_10231305;
    *(char *)((int)param_3 + 5) = (char)uVar11;
  }
  *(char *)(param_3 + 1) = '\x01';
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) {
LAB_10231354:
      *pcVar12 = '\0';
      goto LAB_102326e7;
    }
  }
  else if (*param_4 != 0) goto LAB_10231354;
  cVar19 = (char)param_3[1];
  if (cVar19 == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1023138b:
      *param_3 = 0;
      piVar25 = (int *)0x0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar11 = (*pcVar1)();
      }
      else {
        uVar11 = (uint)**(byte **)piVar25[7];
      }
      if (uVar11 == 0xffffffff) goto LAB_1023138b;
      piVar25 = (int *)*param_3;
      *(char *)((int)param_3 + 5) = (char)uVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar19 = '\x01';
  }
  cVar8 = *(char *)((int)param_3 + 5);
  if (cVar8 != acStack_26[0xb]) {
    if (cVar19 == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_102313de:
        uVar11 = (uint)*(byte *)((int)param_3 + 5);
        piVar25 = (int *)0x0;
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
          piVar25 = (int *)*param_3;
        }
        else {
          uVar11 = (uint)**(byte **)piVar25[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_102313de;
        *(char *)((int)param_3 + 5) = (char)uVar11;
      }
      cVar8 = (char)uVar11;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (cVar8 != acStack_26[10]) {
      bVar5 = true;
      local_80 = 1;
      goto LAB_10231457;
    }
  }
  bVar3 = true;
  if (piVar25 == (int *)0x0) {
LAB_10231443:
    *param_3 = 0;
    uVar7 = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_10231426:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar11 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_10231426;
      *(int *)piVar25[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar25[7];
      *(byte **)piVar25[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_10231443;
    uVar7 = 0;
  }
  *(undefined1 *)(param_3 + 1) = uVar7;
  *pcVar12 = 'x';
  pcVar12 = local_70 + 2;
LAB_10231457:
  local_70 = pcVar12;
  bVar6 = false;
  local_8c = 0;
  uVar11 = 10;
  if (bVar3) {
    uVar11 = 0x16;
  }
  local_90 = 0;
  if (local_54 != 0) {
LAB_10231617:
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_10231654:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar25[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231654;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_1023167a;
    }
    else if (*param_4 != 0) goto LAB_1023167a;
    if ((char)param_3[1] == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_10231706:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar25[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231706;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != local_65) goto LAB_1023167a;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_10231769:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      bVar4 = true;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_10231745:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_10231745;
        *(int *)piVar25[0xb] = iVar14 + -1;
        pbVar2 = *(byte **)piVar25[7];
        *(byte **)piVar25[7] = pbVar2 + 1;
        uVar13 = (uint)*pbVar2;
      }
      if (uVar13 == 0xffffffff) goto LAB_10231769;
      bVar4 = true;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_10231617;
  }
LAB_10231494:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_102314d3:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar25[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_102314d3;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_10231b5d;
  }
  else if (*param_4 != 0) goto LAB_10231b5d;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_10231546:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar25[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231546;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  local_98 = (int *)CONCAT31(local_98._1_3_,*(undefined1 *)((int)param_3 + 5));
  iVar14 = FUN_102298a0(local_34,local_18,local_98);
  uVar13 = iVar14 - (int)local_34;
  if (uVar11 <= uVar13) goto LAB_10231b5d;
  if (local_8c < param_2) {
    if ((uVar13 != 0) || (local_8c != 0)) {
      *local_70 = "0123456789ABCDEFabcdef-+XxPp"[uVar13];
      local_70 = local_70 + 1;
      local_8c = local_8c + 1;
    }
  }
  else {
    local_90 = local_90 + 1;
    if (uVar13 != 0) {
      bVar6 = true;
    }
  }
  piVar25 = (int *)*param_3;
  bVar5 = true;
  if (piVar25 == (int *)0x0) {
LAB_10231608:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_102315e6:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar13 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_102315e6;
      *(int *)piVar25[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar25[7];
      *(byte **)piVar25[7] = pbVar2 + 1;
      uVar13 = (uint)*pbVar2;
    }
    if (uVar13 == 0xffffffff) goto LAB_10231608;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_10231494;
LAB_1023167a:
  FUN_1022dbf0(1,local_80);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_80 = 0;
LAB_10231692:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_10231797:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar25[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231797;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_102317bd;
  }
  else if (*param_4 != 0) goto LAB_102317bd;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_10231825:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar25[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231825;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102298a0(local_34,local_18,*(undefined1 *)((int)param_3 + 5));
  uVar13 = iVar14 - (int)local_34;
  if (uVar13 < uVar11) {
    bVar5 = true;
    if (local_8c < param_2) {
      if ((uVar13 != 0) || (local_8c != 0)) {
        *local_70 = "0123456789ABCDEFabcdef-+XxPp"[uVar13];
        local_70 = local_70 + 1;
        local_8c = local_8c + 1;
      }
    }
    else {
      local_90 = local_90 + 1;
      if (uVar13 != 0) {
        bVar6 = true;
      }
    }
    ppppcVar15 = local_4c;
    if (0xf < local_38) {
      ppppcVar15 = (char ****)local_4c[0];
    }
    if (*(char *)((int)ppppcVar15 + local_80) != '\x7f') {
      ppppcVar15 = local_4c;
      if (0xf < local_38) {
        ppppcVar15 = (char ****)local_4c[0];
      }
      *(char *)((int)ppppcVar15 + local_80) = *(char *)((int)ppppcVar15 + local_80) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_10231900:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar25[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231900;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != local_65) goto LAB_102317bd;
    ppppcVar15 = local_4c;
    if (0xf < local_38) {
      ppppcVar15 = (char ****)local_4c[0];
    }
    if (*(char *)((int)ppppcVar15 + local_80) == '\0') {
      bVar4 = true;
    }
    else {
      FUN_10003d9a(0);
      local_80 = local_80 + 1;
    }
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
LAB_10231986:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_10231967:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar13 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_10231967;
      *(int *)piVar25[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar25[7];
      *(byte **)piVar25[7] = pbVar2 + 1;
      uVar13 = (uint)*pbVar2;
    }
    if (uVar13 == 0xffffffff) goto LAB_10231986;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_10231692;
LAB_102317bd:
  if (local_80 != 0) {
    ppppcVar15 = local_4c;
    if (0xf < local_38) {
      ppppcVar15 = (char ****)local_4c[0];
    }
    if (*(char *)((int)ppppcVar15 + local_80) < '\x01') goto LAB_10231995;
    local_80 = local_80 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_102319dd:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar25[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_102319dd;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
      if (*param_4 == 0) break;
    }
    else if (*param_4 != 0) break;
    if ((char)param_3[1] == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_10231ade:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar25[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231ade;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != local_65) break;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_10231b3d:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_10231b1d:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_10231b1d;
        *(int *)piVar25[0xb] = iVar14 + -1;
        pbVar2 = *(byte **)piVar25[7];
        *(byte **)piVar25[7] = pbVar2 + 1;
        uVar13 = (uint)*pbVar2;
      }
      if (uVar13 == 0xffffffff) goto LAB_10231b3d;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_10231995:
    bVar4 = true;
  } while( true );
  ppppcVar15 = local_64;
  if (0xf < local_50) {
    ppppcVar15 = (char ****)local_64[0];
  }
  ppppcVar23 = (char ****)((int)ppppcVar15 + local_54);
  if (!bVar4) {
    cVar19 = '\0';
LAB_10231a30:
    do {
      do {
        if (local_80 == 0) goto LAB_10231b51;
        if (ppppcVar15 != ppppcVar23) {
          cVar19 = *(char *)ppppcVar15;
          ppppcVar15 = (char ****)((int)ppppcVar15 + 1);
        }
        local_80 = local_80 + -1;
      } while ((cVar19 < '\x01') || (cVar19 == '\x7f'));
      if (local_80 != 0) {
        ppppcVar16 = local_4c;
        if (0xf < local_38) {
          ppppcVar16 = (char ****)local_4c[0];
        }
        if (*(char *)((int)ppppcVar16 + local_80) != cVar19) break;
        if (local_80 != 0) goto LAB_10231a30;
      }
      ppppcVar16 = local_4c;
      if (0xf < local_38) {
        ppppcVar16 = (char ****)local_4c[0];
      }
    } while (*(char *)ppppcVar16 <= cVar19);
  }
LAB_10231b51:
  local_8 = local_8 & 0xffffff00;
  FUN_10004e60();
LAB_10231b5d:
  if (((bVar3) && (bVar5)) && (local_8c == 0)) {
    *local_70 = '0';
    local_70 = local_70 + 1;
  }
  plVar17 = _localeconv();
  cVar19 = *plVar17->decimal_point;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_10231bc5:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar25[7] == (byte *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar25[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231bc5;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_10231cbb;
  }
  else if (*param_4 != 0) goto LAB_10231cbb;
  pcVar1 = *(code **)(*piVar10 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  cVar8 = (*pcVar1)();
  if ((char)param_3[1] == '\0') {
    piVar10 = (int *)*param_3;
    if (piVar10 == (int *)0x0) {
LAB_10231c51:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar10 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar10[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231c51;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(char *)((int)param_3 + 5) != cVar8) goto LAB_10231cbb;
  *local_70 = cVar19;
  local_70 = local_70 + 1;
  piVar10 = (int *)*param_3;
  if (piVar10 != (int *)0x0) {
    if (*(int *)piVar10[7] == 0) {
LAB_10231c95:
      pcVar1 = *(code **)(*piVar10 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar13 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar10[0xb];
      if (iVar14 < 1) goto LAB_10231c95;
      *(int *)piVar10[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar10[7];
      *(byte **)piVar10[7] = pbVar2 + 1;
      uVar13 = (uint)*pbVar2;
    }
    if (uVar13 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_10231cbb;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_10231cbb:
  if (local_8c == 0) {
LAB_10231cc4:
    if ((char)param_3[1] == '\0') {
      piVar10 = (int *)*param_3;
      if (piVar10 == (int *)0x0) {
LAB_10231d01:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar10 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar10[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231d01;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar10 = (int *)*param_3;
    if (piVar10 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_10231d30;
    }
    else if (*param_4 != 0) goto LAB_10231d30;
    if ((char)param_3[1] == '\0') {
      if (piVar10 == (int *)0x0) {
LAB_10231da4:
        *param_3 = 0;
      }
      else {
        if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar10 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar13 = (*pcVar1)();
        }
        else {
          uVar13 = (uint)**(byte **)piVar10[7];
        }
        if (uVar13 == 0xffffffff) goto LAB_10231da4;
        *(char *)((int)param_3 + 5) = (char)uVar13;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(char *)((int)param_3 + 5) != local_34[0]) goto LAB_10231d30;
    local_90 = local_90 - 1;
    piVar10 = (int *)*param_3;
    bVar5 = true;
    if (piVar10 == (int *)0x0) {
LAB_10231e0c:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar10[7] == 0) {
LAB_10231ded:
        pcVar1 = *(code **)(*piVar10 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar10[0xb];
        if (iVar14 < 1) goto LAB_10231ded;
        *(int *)piVar10[0xb] = iVar14 + -1;
        pbVar2 = *(byte **)piVar10[7];
        *(byte **)piVar10[7] = pbVar2 + 1;
        uVar13 = (uint)*pbVar2;
      }
      if (uVar13 == 0xffffffff) goto LAB_10231e0c;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_10231cc4;
  }
LAB_10231d30:
  if ((char)param_3[1] == '\0') {
    piVar10 = (int *)*param_3;
    if (piVar10 == (int *)0x0) {
LAB_10231e36:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar10 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar10[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231e36;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar10 = (int *)*param_3;
  if (piVar10 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_10231e64;
  }
  else if (*param_4 != 0) goto LAB_10231e64;
  if ((char)param_3[1] == '\0') {
    if (piVar10 == (int *)0x0) {
LAB_10231f5f:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar10 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar10[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10231f5f;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102298a0(local_34,local_18,*(undefined1 *)((int)param_3 + 5));
  uVar13 = iVar14 - (int)local_34;
  if (uVar11 <= uVar13) goto LAB_10231e64;
  if (local_8c < param_2) {
    *local_70 = "0123456789ABCDEFabcdef-+XxPp"[uVar13];
    local_70 = local_70 + 1;
    local_8c = local_8c + 1;
  }
  else if (uVar13 != 0) {
    bVar6 = true;
  }
  piVar10 = (int *)*param_3;
  bVar5 = true;
  if (piVar10 == (int *)0x0) {
LAB_10232018:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar10[7] == 0) {
LAB_10231ff9:
      pcVar1 = *(code **)(*piVar10 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar13 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar10[0xb];
      if (iVar14 < 1) goto LAB_10231ff9;
      *(int *)piVar10[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar10[7];
      *(byte **)piVar10[7] = pbVar2 + 1;
      uVar13 = (uint)*pbVar2;
    }
    if (uVar13 == 0xffffffff) goto LAB_10232018;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_10231d30;
LAB_10231e64:
  if (bVar6) {
    cVar8 = local_70[-1];
    pcVar12 = local_70 + -1;
    if (cVar8 == cVar19) {
      cVar8 = local_70[-2];
      pcVar12 = local_70 + -2;
    }
    if (cVar8 != '0') {
      cVar19 = '5';
      if (bVar3) {
        cVar19 = '8';
      }
      if (cVar8 != cVar19) goto LAB_10231e9f;
    }
    *pcVar12 = cVar8 + '\x01';
  }
LAB_10231e9f:
  bVar4 = false;
  iVar14 = 0x14;
  if (bVar3) {
    iVar14 = 0x1b;
  }
  cVar19 = local_34[iVar14];
  iVar14 = 0xe;
  if (bVar3) {
    iVar14 = 0x1a;
  }
  uVar11 = 0;
  local_a0 = 0;
  cVar8 = local_34[iVar14];
  if (!bVar5) goto LAB_102326e7;
  if ((char)param_3[1] == '\0') {
    piVar10 = (int *)*param_3;
    if (piVar10 == (int *)0x0) {
LAB_10232043:
      *param_3 = 0;
    }
    else {
      if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar10 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar13 = (*pcVar1)();
      }
      else {
        uVar13 = (uint)**(byte **)piVar10[7];
      }
      if (uVar13 == 0xffffffff) goto LAB_10232043;
      *(char *)((int)param_3 + 5) = (char)uVar13;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar10 = (int *)*param_3;
  if (piVar10 == (int *)0x0) {
    if (*param_4 != 0) {
LAB_10232076:
      cVar22 = (char)param_3[1];
      if (cVar22 == '\0') {
        if (piVar10 == (int *)0x0) {
LAB_102320b2:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar10 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar13 = (*pcVar1)();
          }
          else {
            uVar13 = (uint)**(byte **)piVar10[7];
          }
          if (uVar13 == 0xffffffff) goto LAB_102320b2;
          *(char *)((int)param_3 + 5) = (char)uVar13;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar22 = '\x01';
      }
      cVar9 = *(char *)((int)param_3 + 5);
      if (cVar9 != cVar19) {
        if (cVar22 == '\0') {
          piVar10 = (int *)*param_3;
          if (piVar10 == (int *)0x0) {
LAB_10232100:
            uVar13 = (uint)*(byte *)((int)param_3 + 5);
            *param_3 = 0;
          }
          else {
            if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar10 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar13 = (*pcVar1)();
            }
            else {
              uVar13 = (uint)**(byte **)piVar10[7];
            }
            if (uVar13 == 0xffffffff) goto LAB_10232100;
            *(char *)((int)param_3 + 5) = (char)uVar13;
          }
          cVar9 = (char)uVar13;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (cVar9 != cVar8) goto LAB_102323d2;
      }
      piVar10 = (int *)*param_3;
      if (piVar10 == (int *)0x0) {
LAB_1023219f:
        *param_3 = 0;
      }
      else {
        if (*(int *)piVar10[7] == 0) {
LAB_10232140:
          pcVar1 = *(code **)(*piVar10 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar10[0xb];
          if (iVar14 < 1) goto LAB_10232140;
          *(int *)piVar10[0xb] = iVar14 + -1;
          pbVar2 = *(byte **)piVar10[7];
          *(byte **)piVar10[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 == 0xffffffff) goto LAB_1023219f;
        *(undefined1 *)(param_3 + 1) = 0;
        piVar10 = (int *)*param_3;
        if (piVar10 == (int *)0x0) goto LAB_1023219f;
        if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar10 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
        }
        else {
          uVar11 = (uint)**(byte **)piVar10[7];
        }
        if (uVar11 == 0xffffffff) goto LAB_1023219f;
        *(char *)((int)param_3 + 5) = (char)uVar11;
      }
      bVar5 = false;
      *(undefined1 *)(param_3 + 1) = 1;
      if ((char)param_4[1] == '\0') {
        FUN_100e1fa2();
      }
      piVar10 = (int *)*param_3;
      if (piVar10 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_10232318;
      }
      else if (*param_4 != 0) goto LAB_10232318;
      cVar19 = (char)param_3[1];
      if (cVar19 == '\0') {
        if (piVar10 == (int *)0x0) {
LAB_1023220f:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar10 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)piVar10[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_1023220f;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar19 = '\x01';
      }
      cVar8 = *(char *)((int)param_3 + 5);
      if (cVar8 != acStack_26[9]) {
        if (cVar19 == '\0') {
          piVar10 = (int *)*param_3;
          if (piVar10 == (int *)0x0) {
LAB_102322b5:
            uVar11 = (uint)*(byte *)((int)param_3 + 5);
            *param_3 = 0;
          }
          else {
            if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar10 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar11 = (*pcVar1)();
            }
            else {
              uVar11 = (uint)**(byte **)piVar10[7];
            }
            if (uVar11 == 0xffffffff) goto LAB_102322b5;
            *(char *)((int)param_3 + 5) = (char)uVar11;
          }
          cVar8 = (char)uVar11;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (cVar8 != acStack_26[8]) goto LAB_10232318;
        piVar10 = (int *)*param_3;
        bVar4 = true;
        if (piVar10 != (int *)0x0) {
          if (*(int *)piVar10[7] == 0) {
LAB_102322f2:
            pcVar1 = *(code **)(*piVar10 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar10[0xb];
            if (iVar14 < 1) goto LAB_102322f2;
            *(int *)piVar10[0xb] = iVar14 + -1;
            pbVar2 = *(byte **)piVar10[7];
            *(byte **)piVar10[7] = pbVar2 + 1;
            uVar11 = (uint)*pbVar2;
          }
          if (uVar11 != 0xffffffff) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_10232318;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        goto LAB_10232318;
      }
      piVar10 = (int *)*param_3;
      if (piVar10 != (int *)0x0) {
        if (*(int *)piVar10[7] == 0) {
LAB_1023224a:
          pcVar1 = *(code **)(*piVar10 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar10[0xb];
          if (iVar14 < 1) goto LAB_1023224a;
          *(int *)piVar10[0xb] = iVar14 + -1;
          pbVar2 = *(byte **)piVar10[7];
          *(byte **)piVar10[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 != 0xffffffff) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_10232318;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
LAB_10232318:
      if ((char)param_3[1] == '\0') {
        piVar10 = (int *)*param_3;
        if (piVar10 == (int *)0x0) {
LAB_10232359:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)piVar10[7] == (byte *)0x0) || (*(int *)piVar10[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar10 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)piVar10[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_10232359;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_100e1fa2();
      }
      local_6c = (int *)*param_3;
      if (local_6c == (int *)0x0) {
        if (*param_4 == 0) goto LAB_10232390;
      }
      else if (*param_4 != 0) goto LAB_10232390;
      if ((char)param_3[1] == '\0') {
        if (local_6c == (int *)0x0) {
LAB_102324e4:
          *param_3 = 0;
        }
        else {
          if ((*(byte **)local_6c[7] == (byte *)0x0) || (*(int *)local_6c[0xb] < 1)) {
            pcVar1 = *(code **)(*local_6c + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar11 = (*pcVar1)();
          }
          else {
            uVar11 = (uint)**(byte **)local_6c[7];
          }
          if (uVar11 == 0xffffffff) goto LAB_102324e4;
          *(char *)((int)param_3 + 5) = (char)uVar11;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(char *)((int)param_3 + 5) != local_34[0]) goto LAB_10232390;
      piVar10 = (int *)*param_3;
      bVar5 = true;
      if (piVar10 == (int *)0x0) {
LAB_1023254a:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (*(int *)piVar10[7] == 0) {
LAB_1023252a:
          pcVar1 = *(code **)(*piVar10 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar11 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar10[0xb];
          if (iVar14 < 1) goto LAB_1023252a;
          *(int *)piVar10[0xb] = iVar14 + -1;
          pbVar2 = *(byte **)piVar10[7];
          *(byte **)piVar10[7] = pbVar2 + 1;
          uVar11 = (uint)*pbVar2;
        }
        if (uVar11 == 0xffffffff) goto LAB_1023254a;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_10232318;
    }
  }
  else if (*param_4 == 0) goto LAB_10232076;
  goto LAB_102323d2;
LAB_10232390:
  if ((char)param_3[1] == '\0') {
    FUN_100e1fa2();
  }
  if ((char)param_4[1] == '\0') {
    FUN_100e1fa2();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_102323c0;
  }
  else if (*param_4 != 0) goto LAB_102323c0;
  if ((char)param_3[1] == '\0') {
    FUN_100e1fa2();
  }
  local_6c = (int *)CONCAT31(local_6c._1_3_,*(undefined1 *)((int)param_3 + 5));
  iVar14 = FUN_102298a0(local_34,local_18,local_6c);
  uVar11 = iVar14 - (int)local_34;
  if (9 < uVar11) goto LAB_102323c0;
  if (((int)local_a0 < 0xccccccc) || ((local_a0 == 0xccccccc && ((int)uVar11 < 8)))) {
    local_a0 = uVar11 + local_a0 * 10;
  }
  else {
    local_a0 = 0x7fffffff;
  }
  piVar10 = (int *)*param_3;
  bVar5 = true;
  if (piVar10 == (int *)0x0) {
LAB_10232606:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar10[7] == 0) {
LAB_102325e3:
      pcVar1 = *(code **)(*piVar10 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar11 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar10[0xb];
      if (iVar14 < 1) goto LAB_102325e3;
      *(int *)piVar10[0xb] = iVar14 + -1;
      pbVar2 = *(byte **)piVar10[7];
      *(byte **)piVar10[7] = pbVar2 + 1;
      uVar11 = (uint)*pbVar2;
    }
    if (uVar11 == 0xffffffff) goto LAB_10232606;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_10232390;
LAB_102323c0:
  if (bVar4) {
    local_a0 = -local_a0;
  }
  uVar11 = local_a0;
  if (!bVar5) goto LAB_102326e7;
LAB_102323d2:
  iVar14 = 0x44c;
  uVar13 = 0x44c;
  uVar24 = local_90;
  if (bVar3) {
    uVar13 = 0x1068;
    iVar14 = 0x41a;
  }
  while( true ) {
    uVar20 = uVar13;
    if ((((-1 < (int)uVar11) && (-1 < (int)uVar24)) &&
        (((int)uVar13 <= (int)uVar11 || (iVar14 <= (int)uVar24)))) ||
       ((((int)uVar11 < 1 && ((int)uVar24 < 1)) &&
        ((uVar20 = -uVar13, (int)uVar11 <= (int)uVar20 || ((int)uVar24 <= -iVar14))))))
    goto LAB_1023264e;
    iVar21 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
    if ((iVar21 <= (int)uVar13) &&
       ((int)((uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f)) <= iVar14)) break;
    if (bVar3) {
      iVar21 = ((int)((iVar21 + -1 >> 0x1f & 3U) + iVar21 + -1) >> 2) + 1;
    }
    iVar18 = (local_90 ^ (int)local_90 >> 0x1f) - ((int)local_90 >> 0x1f);
    if (iVar18 < iVar21) {
      iVar21 = iVar18;
    }
    if ((int)uVar11 < 0) {
      iVar18 = iVar21 * 4;
      if (!bVar3) {
        iVar18 = iVar21;
      }
      uVar11 = uVar11 + iVar18;
      uVar24 = uVar24 - iVar21;
    }
    else {
      iVar18 = iVar21 * 4;
      if (!bVar3) {
        iVar18 = iVar21;
      }
      uVar11 = uVar11 - iVar18;
      uVar24 = uVar24 + iVar21;
    }
  }
  if (bVar3) {
    uVar24 = uVar24 << 2;
  }
  uVar11 = uVar11 + uVar24;
  uVar20 = uVar13;
  if (((int)uVar11 <= (int)uVar13) && (uVar20 = uVar11, (int)uVar11 < (int)-uVar13)) {
    uVar20 = -uVar13;
  }
LAB_1023264e:
  if (uVar20 != 0) {
    cVar19 = 'e';
    if (bVar3) {
      cVar19 = 'p';
    }
    *local_70 = cVar19;
    pcVar12 = local_70 + 1;
    if ((int)uVar20 < 0) {
      *pcVar12 = '-';
      pcVar12 = local_70 + 2;
    }
    iVar14 = (uVar20 ^ (int)uVar20 >> 0x1f) - ((int)uVar20 >> 0x1f);
    local_70 = pcVar12;
    while (iVar14 != 0) {
      *local_70 = (char)iVar14 + (char)(iVar14 / 10) * -10 + '0';
      local_70 = local_70 + 1;
      iVar14 = iVar14 / 10;
    }
    thunk_FUN_102297d0(pcVar12,local_70);
  }
  *local_70 = '\0';
LAB_102326e7:
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

