/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1024bb60 */

/* WARNING: Removing unreachable block (ram,0x1024c988) */

void FUN_1024bb60(undefined1 *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  code *pcVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  lconv *plVar18;
  int iVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  char ****ppppcVar23;
  uint uVar24;
  int *piVar25;
  short local_b0;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  char *local_90;
  char ***local_80 [4];
  int local_70;
  uint local_6c;
  char ***local_68 [5];
  uint local_54;
  short local_50 [22];
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289335;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_90 = param_1;
  piVar11 = (int *)FUN_10240a50(param_5,local_14);
  pcVar1 = *(code **)(*piVar11 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789ABCDEFabcdef-+XxPp",&DAT_103018e9,local_50);
  (*pcVar1)();
  piVar11 = (int *)FUN_10243830(param_5);
  pcVar1 = *(code **)(*piVar11 + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_80);
  (*pcVar1)();
  local_8 = 0;
  if (local_70 == 0) {
    local_b0 = 0;
  }
  else {
    pcVar1 = *(code **)(*piVar11 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)();
    local_b0 = (*pcVar1)();
    bVar4 = false;
    if (local_70 != 0) {
      piVar25 = (int *)*param_3;
LAB_1024bca0:
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024bce4:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar25[7];
          }
          if (sVar8 == -1) goto LAB_1024bce4;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_1024bc3b;
      }
      else if (*param_4 != 0) goto LAB_1024bc3b;
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024bd5f:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar25[7];
          }
          if (sVar8 == -1) goto LAB_1024bd5f;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024bc3b;
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024bdd0:
        *param_3 = 0;
        piVar25 = (int *)0x0;
        *(undefined1 *)(param_3 + 1) = 1;
        bVar4 = true;
      }
      else {
        if (*(int *)piVar25[7] == 0) {
LAB_1024bda2:
          pcVar1 = *(code **)(*piVar25 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar25[0xb];
          if (iVar14 < 1) goto LAB_1024bda2;
          *(int *)piVar25[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar25[7];
          *(short **)piVar25[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_1024bdd0;
        piVar25 = (int *)*param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        bVar4 = true;
      }
      goto LAB_1024bca0;
    }
  }
  bVar4 = false;
LAB_1024bc3b:
  cVar7 = (char)param_3[1];
  if (cVar7 == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024be0c:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024be0c;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar7 = '\x01';
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
    cVar7 = (char)param_3[1];
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 != 0) {
LAB_1024be4a:
      if (cVar7 == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024be91:
          *param_3 = 0;
          piVar25 = (int *)0x0;
        }
        else {
          if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar25 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar25[7];
          }
          if (sVar8 == -1) goto LAB_1024be91;
          piVar25 = (int *)*param_3;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar7 = '\x01';
      }
      sVar8 = *(short *)((int)param_3 + 6);
      if (sVar8 == local_22) {
        *param_1 = 0x2b;
        local_90 = param_1 + 1;
        piVar25 = (int *)*param_3;
        if (piVar25 != (int *)0x0) {
          if (*(int *)piVar25[7] == 0) {
LAB_1024bee4:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_1024bee4;
            *(int *)piVar25[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar25[7];
            *(short **)piVar25[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1024bfe6;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (cVar7 == '\0') {
          if (piVar25 == (int *)0x0) {
LAB_1024bf65:
            sVar8 = *(short *)((int)param_3 + 6);
            *param_3 = 0;
          }
          else {
            if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar25 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar8 = (*pcVar1)();
            }
            else {
              sVar8 = **(short **)piVar25[7];
            }
            if (sVar8 == -1) goto LAB_1024bf65;
            *(short *)((int)param_3 + 6) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar8 != local_24) goto LAB_1024bfe6;
        *param_1 = 0x2d;
        local_90 = param_1 + 1;
        piVar25 = (int *)*param_3;
        if (piVar25 != (int *)0x0) {
          if (*(int *)piVar25[7] == 0) {
LAB_1024bfb7:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_1024bfb7;
            *(int *)piVar25[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar25[7];
            *(short **)piVar25[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1024bfe6;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1024be4a;
LAB_1024bfe6:
  bVar3 = false;
  *local_90 = 0x30;
  pcVar12 = local_90 + 1;
  bVar5 = false;
  local_98 = 0;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024c04c:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c04c;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024c2b0;
  }
  else if (*param_4 != 0) goto LAB_1024c2b0;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024c0ce:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c0ce;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_1024c2b0;
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
LAB_1024c17b:
    *param_3 = 0;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024c114:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024c114;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024c17b;
    piVar25 = (int *)*param_3;
    *(undefined1 *)(param_3 + 1) = 0;
    if (piVar25 == (int *)0x0) goto LAB_1024c17b;
    if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
      pcVar1 = *(code **)(*piVar25 + 0x18);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      sVar8 = **(short **)piVar25[7];
    }
    if (sVar8 == -1) goto LAB_1024c17b;
    *(short *)((int)param_3 + 6) = sVar8;
  }
  *(char *)(param_3 + 1) = '\x01';
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) {
LAB_1024c1d0:
      *pcVar12 = '\0';
      goto LAB_1024d755;
    }
  }
  else if (*param_4 != 0) goto LAB_1024c1d0;
  cVar7 = (char)param_3[1];
  if (cVar7 == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024c213:
      *param_3 = 0;
      piVar25 = (int *)0x0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c213;
      piVar25 = (int *)*param_3;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    cVar7 = '\x01';
  }
  sVar8 = *(short *)((int)param_3 + 6);
  if (sVar8 != local_1e) {
    if (cVar7 == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_1024c272:
        sVar8 = *(short *)((int)param_3 + 6);
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c272;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != local_20) {
      bVar5 = true;
      local_98 = 1;
      goto LAB_1024c2b0;
    }
  }
  bVar3 = true;
  FUN_1023b050();
  *pcVar12 = 'x';
  pcVar12 = local_90 + 2;
LAB_1024c2b0:
  local_90 = pcVar12;
  bVar6 = false;
  local_9c = 0;
  uVar13 = 10;
  if (bVar3) {
    uVar13 = 0x16;
  }
  local_a0 = 0;
  if (local_70 != 0) {
LAB_1024c491:
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024c4d7:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c4d7;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_1024c500;
    }
    else if (*param_4 != 0) goto LAB_1024c500;
    if ((char)param_3[1] == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_1024c59d:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c59d;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024c500;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024c60c:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      bVar4 = true;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_1024c5e0:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_1024c5e0;
        *(int *)piVar25[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar25[7];
        *(short **)piVar25[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024c60c;
      bVar4 = true;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1024c491;
  }
LAB_1024c2f0:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024c338:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c338;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024ca64;
  }
  else if (*param_4 != 0) goto LAB_1024ca64;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024c3ba:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c3ba;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar15 = iVar14 - (int)local_50 >> 1;
  if (uVar13 <= uVar15) goto LAB_1024ca64;
  if (local_9c < param_2) {
    if ((uVar15 != 0) || (local_9c != 0)) {
      *local_90 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
      local_90 = local_90 + 1;
      local_9c = local_9c + 1;
    }
  }
  else {
    local_a0 = local_a0 + 1;
    if (uVar15 != 0) {
      bVar6 = true;
    }
  }
  piVar25 = (int *)*param_3;
  bVar5 = true;
  if (piVar25 == (int *)0x0) {
LAB_1024c482:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024c458:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024c458;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024c482;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024c2f0;
LAB_1024c500:
  FUN_1022dbf0(1,local_98);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_98 = 0;
LAB_1024c520:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024c643:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c643;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024c66c;
  }
  else if (*param_4 != 0) goto LAB_1024c66c;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024c6e3:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024c6e3;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar15 = iVar14 - (int)local_50 >> 1;
  if (uVar15 < uVar13) {
    bVar5 = true;
    if (local_9c < param_2) {
      if ((uVar15 != 0) || (local_9c != 0)) {
        *local_90 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
        local_90 = local_90 + 1;
        local_9c = local_9c + 1;
      }
    }
    else {
      local_a0 = local_a0 + 1;
      if (uVar15 != 0) {
        bVar6 = true;
      }
    }
    ppppcVar16 = local_68;
    if (0xf < local_54) {
      ppppcVar16 = (char ****)local_68[0];
    }
    if (*(char *)((int)ppppcVar16 + local_98) != '\x7f') {
      ppppcVar16 = local_68;
      if (0xf < local_54) {
        ppppcVar16 = (char ****)local_68[0];
      }
      *(char *)((int)ppppcVar16 + local_98) = *(char *)((int)ppppcVar16 + local_98) + '\x01';
    }
  }
  else {
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024c7cb:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c7cb;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024c66c;
    ppppcVar16 = local_68;
    if (0xf < local_54) {
      ppppcVar16 = (char ****)local_68[0];
    }
    if (*(char *)((int)ppppcVar16 + local_98) == '\0') {
      bVar4 = true;
    }
    else {
      FUN_10003d9a(0);
      local_98 = local_98 + 1;
    }
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
LAB_1024c863:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024c83c:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024c83c;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024c863;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024c520;
LAB_1024c66c:
  if (local_98 != 0) {
    ppppcVar16 = local_68;
    if (0xf < local_54) {
      ppppcVar16 = (char ****)local_68[0];
    }
    if (*(char *)((int)ppppcVar16 + local_98) < '\x01') goto LAB_1024c872;
    local_98 = local_98 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024c8bc:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c8bc;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
      if (*param_4 == 0) break;
    }
    else if (*param_4 != 0) break;
    if ((char)param_3[1] == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_1024c9d9:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar25 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar25[7];
        }
        if (sVar8 == -1) goto LAB_1024c9d9;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) break;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024ca44:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_1024ca1c:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_1024ca1c;
        *(int *)piVar25[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar25[7];
        *(short **)piVar25[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024ca44;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_1024c872:
    bVar4 = true;
  } while( true );
  ppppcVar16 = local_80;
  if (0xf < local_6c) {
    ppppcVar16 = (char ****)local_80[0];
  }
  ppppcVar23 = (char ****)((int)ppppcVar16 + local_70);
  if (!bVar4) {
    cVar7 = '\0';
LAB_1024c913:
    do {
      do {
        if (local_98 == 0) goto LAB_1024ca58;
        if (ppppcVar16 != ppppcVar23) {
          cVar7 = *(char *)ppppcVar16;
          ppppcVar16 = (char ****)((int)ppppcVar16 + 1);
        }
        local_98 = local_98 + -1;
      } while ((cVar7 < '\x01') || (cVar7 == '\x7f'));
      if (local_98 != 0) {
        ppppcVar17 = local_68;
        if (0xf < local_54) {
          ppppcVar17 = (char ****)local_68[0];
        }
        if (*(char *)((int)ppppcVar17 + local_98) != cVar7) break;
        if (local_98 != 0) goto LAB_1024c913;
      }
      ppppcVar17 = local_68;
      if (0xf < local_54) {
        ppppcVar17 = (char ****)local_68[0];
      }
    } while (*(char *)ppppcVar17 <= cVar7);
  }
LAB_1024ca58:
  local_8 = local_8 & 0xffffff00;
  FUN_10001fee();
LAB_1024ca64:
  if (((bVar3) && (bVar5)) && (local_9c == 0)) {
    *local_90 = '0';
    local_90 = local_90 + 1;
  }
  plVar18 = _localeconv();
  cVar7 = *plVar18->decimal_point;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024cade:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar25 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar25[7];
      }
      if (sVar8 == -1) goto LAB_1024cade;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1024cbfc;
  }
  else if (*param_4 != 0) goto LAB_1024cbfc;
  pcVar1 = *(code **)(*piVar11 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  sVar8 = (*pcVar1)();
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024cb80:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar11 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar9 = (*pcVar1)();
      }
      else {
        sVar9 = **(short **)piVar11[7];
      }
      if (sVar9 == -1) goto LAB_1024cb80;
      *(short *)((int)param_3 + 6) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((int)param_3 + 6) != sVar8) goto LAB_1024cbfc;
  *local_90 = cVar7;
  local_90 = local_90 + 1;
  piVar11 = (int *)*param_3;
  if (piVar11 != (int *)0x0) {
    if (*(int *)piVar11[7] == 0) {
LAB_1024cbce:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_1024cbce;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1024cbfc;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1024cbfc:
  if (local_9c == 0) {
LAB_1024cc05:
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_1024cc4b:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar11 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar11[7];
        }
        if (sVar8 == -1) goto LAB_1024cc4b;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_1024cc74;
    }
    else if (*param_4 != 0) goto LAB_1024cc74;
    if ((char)param_3[1] == '\0') {
      if (piVar11 == (int *)0x0) {
LAB_1024ccf1:
        *param_3 = 0;
      }
      else {
        if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar11 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar11[7];
        }
        if (sVar8 == -1) goto LAB_1024ccf1;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_1024cc74;
    local_a0 = local_a0 - 1;
    piVar11 = (int *)*param_3;
    bVar5 = true;
    if (piVar11 == (int *)0x0) {
LAB_1024cd65:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar11[7] == 0) {
LAB_1024cd3e:
        pcVar1 = *(code **)(*piVar11 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar11[0xb];
        if (iVar14 < 1) goto LAB_1024cd3e;
        *(int *)piVar11[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar11[7];
        *(short **)piVar11[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024cd65;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1024cc05;
  }
LAB_1024cc74:
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024cd98:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar11 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar11[7];
      }
      if (sVar8 == -1) goto LAB_1024cd98;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar11 = (int *)*param_3;
  if (piVar11 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024cdc9;
  }
  else if (*param_4 != 0) goto LAB_1024cdc9;
  if ((char)param_3[1] == '\0') {
    if (piVar11 == (int *)0x0) {
LAB_1024cede:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar11 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        sVar8 = **(short **)piVar11[7];
      }
      if (sVar8 == -1) goto LAB_1024cede;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar15 = iVar14 - (int)local_50 >> 1;
  if (uVar13 <= uVar15) goto LAB_1024cdc9;
  if (local_9c < param_2) {
    *local_90 = "0123456789ABCDEFabcdef-+XxPp"[uVar15];
    local_90 = local_90 + 1;
    local_9c = local_9c + 1;
  }
  else if (uVar15 != 0) {
    bVar6 = true;
  }
  piVar11 = (int *)*param_3;
  bVar5 = true;
  if (piVar11 == (int *)0x0) {
LAB_1024cfa3:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar11[7] == 0) {
LAB_1024cf7c:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_1024cf7c;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024cfa3;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024cc74;
LAB_1024cdc9:
  if (bVar6) {
    cVar20 = local_90[-1];
    pcVar12 = local_90 + -1;
    if (cVar20 == cVar7) {
      cVar20 = local_90[-2];
      pcVar12 = local_90 + -2;
    }
    if (cVar20 != '0') {
      cVar7 = '5';
      if (bVar3) {
        cVar7 = '8';
      }
      if (cVar20 != cVar7) goto LAB_1024ce0a;
    }
    *pcVar12 = cVar20 + '\x01';
  }
LAB_1024ce0a:
  bVar4 = false;
  iVar14 = 0x28;
  if (bVar3) {
    iVar14 = 0x36;
  }
  sVar8 = *(short *)((int)local_50 + iVar14);
  iVar14 = 0x1c;
  if (bVar3) {
    iVar14 = 0x34;
  }
  uVar13 = 0;
  local_a4 = 0;
  sVar9 = *(short *)((int)local_50 + iVar14);
  if (!bVar5) goto LAB_1024d755;
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024cfda:
      *param_3 = 0;
    }
    else {
      if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar11 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar10 = (*pcVar1)();
      }
      else {
        sVar10 = **(short **)piVar11[7];
      }
      if (sVar10 == -1) goto LAB_1024cfda;
      *(short *)((int)param_3 + 6) = sVar10;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar11 = (int *)*param_3;
  if (piVar11 == (int *)0x0) {
    if (*param_4 != 0) {
LAB_1024d013:
      cVar7 = (char)param_3[1];
      if (cVar7 == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_1024d05b:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar11 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar10 = (*pcVar1)();
          }
          else {
            sVar10 = **(short **)piVar11[7];
          }
          if (sVar10 == -1) goto LAB_1024d05b;
          *(short *)((int)param_3 + 6) = sVar10;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar7 = '\x01';
      }
      sVar10 = *(short *)((int)param_3 + 6);
      if (sVar10 != sVar8) {
        if (cVar7 == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_1024d0c0:
            sVar10 = *(short *)((int)param_3 + 6);
            *param_3 = 0;
          }
          else {
            if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar11 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar10 = (*pcVar1)();
            }
            else {
              sVar10 = **(short **)piVar11[7];
            }
            if (sVar10 == -1) goto LAB_1024d0c0;
            *(short *)((int)param_3 + 6) = sVar10;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar10 != sVar9) goto LAB_1024d420;
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_1024d185:
        *param_3 = 0;
      }
      else {
        if (*(int *)piVar11[7] == 0) {
LAB_1024d10c:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_1024d10c;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_1024d185;
        *(undefined1 *)(param_3 + 1) = 0;
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) goto LAB_1024d185;
        if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar11 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar11[7];
        }
        if (sVar8 == -1) goto LAB_1024d185;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      bVar5 = false;
      *(undefined1 *)(param_3 + 1) = 1;
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_1024d351;
      }
      else if (*param_4 != 0) goto LAB_1024d351;
      cVar7 = (char)param_3[1];
      if (cVar7 == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_1024d207:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar11 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar11[7];
          }
          if (sVar8 == -1) goto LAB_1024d207;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
        cVar7 = '\x01';
      }
      sVar8 = *(short *)((int)param_3 + 6);
      if (sVar8 != local_22) {
        if (cVar7 == '\0') {
          piVar11 = (int *)*param_3;
          if (piVar11 == (int *)0x0) {
LAB_1024d2d2:
            sVar8 = *(short *)((int)param_3 + 6);
            *param_3 = 0;
          }
          else {
            if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
              pcVar1 = *(code **)(*piVar11 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar8 = (*pcVar1)();
            }
            else {
              sVar8 = **(short **)piVar11[7];
            }
            if (sVar8 == -1) goto LAB_1024d2d2;
            *(short *)((int)param_3 + 6) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar8 != local_24) goto LAB_1024d351;
        piVar11 = (int *)*param_3;
        bVar4 = true;
        if (piVar11 != (int *)0x0) {
          if (*(int *)piVar11[7] == 0) {
LAB_1024d31d:
            pcVar1 = *(code **)(*piVar11 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar11[0xb];
            if (iVar14 < 1) goto LAB_1024d31d;
            *(int *)piVar11[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar11[7];
            *(short **)piVar11[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1024d351;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        goto LAB_1024d351;
      }
      piVar11 = (int *)*param_3;
      if (piVar11 != (int *)0x0) {
        if (*(int *)piVar11[7] == 0) {
LAB_1024d24a:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_1024d24a;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_1024d351;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
LAB_1024d351:
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_1024d3a1:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar11 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar11[7];
          }
          if (sVar8 == -1) goto LAB_1024d3a1;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_1024d3d8;
      }
      else if (*param_4 != 0) goto LAB_1024d3d8;
      if ((char)param_3[1] == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_1024d538:
          *param_3 = 0;
        }
        else {
          if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
            pcVar1 = *(code **)(*piVar11 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            sVar8 = **(short **)piVar11[7];
          }
          if (sVar8 == -1) goto LAB_1024d538;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_1024d3d8;
      piVar11 = (int *)*param_3;
      bVar5 = true;
      if (piVar11 == (int *)0x0) {
LAB_1024d5b0:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (*(int *)piVar11[7] == 0) {
LAB_1024d585:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_1024d585;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_1024d5b0;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_1024d351;
    }
  }
  else if (*param_4 == 0) goto LAB_1024d013;
  goto LAB_1024d420;
LAB_1024d3d8:
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1024d40b;
  }
  else if (*param_4 != 0) goto LAB_1024d40b;
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar13 = iVar14 - (int)local_50 >> 1;
  if (9 < uVar13) goto LAB_1024d40b;
  if (((int)local_a4 < 0xccccccc) || ((local_a4 == 0xccccccc && ((int)uVar13 < 8)))) {
    local_a4 = uVar13 + local_a4 * 10;
  }
  else {
    local_a4 = 0x7fffffff;
  }
  piVar11 = (int *)*param_3;
  bVar5 = true;
  if (piVar11 == (int *)0x0) {
LAB_1024d672:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar11[7] == 0) {
LAB_1024d647:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_1024d647;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024d672;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024d3d8;
LAB_1024d40b:
  if (bVar4) {
    local_a4 = -local_a4;
  }
  uVar13 = local_a4;
  if (!bVar5) goto LAB_1024d755;
LAB_1024d420:
  iVar14 = 0x44c;
  uVar15 = 0x44c;
  uVar24 = local_a0;
  if (bVar3) {
    uVar15 = 0x1068;
    iVar14 = 0x41a;
  }
  while( true ) {
    uVar21 = uVar15;
    if ((((-1 < (int)uVar13) && (-1 < (int)uVar24)) &&
        (((int)uVar15 <= (int)uVar13 || (iVar14 <= (int)uVar24)))) ||
       ((((int)uVar13 < 1 && ((int)uVar24 < 1)) &&
        ((uVar21 = -uVar15, (int)uVar13 <= (int)uVar21 || ((int)uVar24 <= -iVar14))))))
    goto LAB_1024d6ba;
    iVar22 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
    if ((iVar22 <= (int)uVar15) &&
       ((int)((uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f)) <= iVar14)) break;
    if (bVar3) {
      iVar22 = ((int)((iVar22 + -1 >> 0x1f & 3U) + iVar22 + -1) >> 2) + 1;
    }
    iVar19 = (local_a0 ^ (int)local_a0 >> 0x1f) - ((int)local_a0 >> 0x1f);
    if (iVar19 < iVar22) {
      iVar22 = iVar19;
    }
    if ((int)uVar13 < 0) {
      iVar19 = iVar22 * 4;
      if (!bVar3) {
        iVar19 = iVar22;
      }
      uVar13 = uVar13 + iVar19;
      uVar24 = uVar24 - iVar22;
    }
    else {
      iVar19 = iVar22 * 4;
      if (!bVar3) {
        iVar19 = iVar22;
      }
      uVar13 = uVar13 - iVar19;
      uVar24 = uVar24 + iVar22;
    }
  }
  if (bVar3) {
    uVar24 = uVar24 << 2;
  }
  uVar13 = uVar13 + uVar24;
  uVar21 = uVar15;
  if (((int)uVar13 <= (int)uVar15) && (uVar21 = uVar13, (int)uVar13 < (int)-uVar15)) {
    uVar21 = -uVar15;
  }
LAB_1024d6ba:
  if (uVar21 != 0) {
    cVar7 = 'e';
    if (bVar3) {
      cVar7 = 'p';
    }
    *local_90 = cVar7;
    pcVar12 = local_90 + 1;
    if ((int)uVar21 < 0) {
      *pcVar12 = '-';
      pcVar12 = local_90 + 2;
    }
    iVar14 = (uVar21 ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f);
    local_90 = pcVar12;
    while (iVar14 != 0) {
      *local_90 = (char)iVar14 + (char)(iVar14 / 10) * -10 + '0';
      local_90 = local_90 + 1;
      iVar14 = iVar14 / 10;
    }
    thunk_FUN_102297d0(pcVar12,local_90);
  }
  *local_90 = '\0';
LAB_1024d755:
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

