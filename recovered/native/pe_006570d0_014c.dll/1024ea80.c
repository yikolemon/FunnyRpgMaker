/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1024ea80 */

/* WARNING: Removing unreachable block (ram,0x1024f8a8) */

void FUN_1024ea80(undefined1 *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

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
  piVar11 = (int *)FUN_10091ec2(param_5,local_14);
  pcVar1 = *(code **)(*piVar11 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789ABCDEFabcdef-+XxPp",&DAT_10301925,local_50);
  (*pcVar1)();
  piVar11 = (int *)FUN_100470ba(param_5);
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
LAB_1024ebc0:
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024ec04:
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
          if (sVar8 == -1) goto LAB_1024ec04;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_1024eb5b;
      }
      else if (*param_4 != 0) goto LAB_1024eb5b;
      if ((char)param_3[1] == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024ec7f:
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
          if (sVar8 == -1) goto LAB_1024ec7f;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024eb5b;
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024ecf0:
        *param_3 = 0;
        piVar25 = (int *)0x0;
        *(undefined1 *)(param_3 + 1) = 1;
        bVar4 = true;
      }
      else {
        if (*(int *)piVar25[7] == 0) {
LAB_1024ecc2:
          pcVar1 = *(code **)(*piVar25 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar25[0xb];
          if (iVar14 < 1) goto LAB_1024ecc2;
          *(int *)piVar25[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar25[7];
          *(short **)piVar25[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_1024ecf0;
        piVar25 = (int *)*param_3;
        *(undefined1 *)(param_3 + 1) = 0;
        bVar4 = true;
      }
      goto LAB_1024ebc0;
    }
  }
  bVar4 = false;
LAB_1024eb5b:
  cVar7 = (char)param_3[1];
  if (cVar7 == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024ed2c:
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
      if (sVar8 == -1) goto LAB_1024ed2c;
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
LAB_1024ed6a:
      if (cVar7 == '\0') {
        if (piVar25 == (int *)0x0) {
LAB_1024edb1:
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
          if (sVar8 == -1) goto LAB_1024edb1;
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
LAB_1024ee04:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_1024ee04;
            *(int *)piVar25[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar25[7];
            *(short **)piVar25[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1024ef06;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (cVar7 == '\0') {
          if (piVar25 == (int *)0x0) {
LAB_1024ee85:
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
            if (sVar8 == -1) goto LAB_1024ee85;
            *(short *)((int)param_3 + 6) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar8 != local_24) goto LAB_1024ef06;
        *param_1 = 0x2d;
        local_90 = param_1 + 1;
        piVar25 = (int *)*param_3;
        if (piVar25 != (int *)0x0) {
          if (*(int *)piVar25[7] == 0) {
LAB_1024eed7:
            pcVar1 = *(code **)(*piVar25 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar25[0xb];
            if (iVar14 < 1) goto LAB_1024eed7;
            *(int *)piVar25[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar25[7];
            *(short **)piVar25[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_1024ef06;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
    }
  }
  else if (*param_4 == 0) goto LAB_1024ed6a;
LAB_1024ef06:
  bVar3 = false;
  *local_90 = 0x30;
  pcVar12 = local_90 + 1;
  bVar5 = false;
  local_98 = 0;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024ef6c:
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
      if (sVar8 == -1) goto LAB_1024ef6c;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024f1d0;
  }
  else if (*param_4 != 0) goto LAB_1024f1d0;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024efee:
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
      if (sVar8 == -1) goto LAB_1024efee;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_1024f1d0;
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
LAB_1024f09b:
    *param_3 = 0;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024f034:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024f034;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024f09b;
    piVar25 = (int *)*param_3;
    *(undefined1 *)(param_3 + 1) = 0;
    if (piVar25 == (int *)0x0) goto LAB_1024f09b;
    if ((*(short **)piVar25[7] == (short *)0x0) || (*(int *)piVar25[0xb] < 1)) {
      pcVar1 = *(code **)(*piVar25 + 0x18);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      sVar8 = **(short **)piVar25[7];
    }
    if (sVar8 == -1) goto LAB_1024f09b;
    *(short *)((int)param_3 + 6) = sVar8;
  }
  *(char *)(param_3 + 1) = '\x01';
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) {
LAB_1024f0f0:
      *pcVar12 = '\0';
      goto LAB_10250675;
    }
  }
  else if (*param_4 != 0) goto LAB_1024f0f0;
  cVar7 = (char)param_3[1];
  if (cVar7 == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024f133:
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
      if (sVar8 == -1) goto LAB_1024f133;
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
LAB_1024f192:
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
        if (sVar8 == -1) goto LAB_1024f192;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (sVar8 != local_20) {
      bVar5 = true;
      local_98 = 1;
      goto LAB_1024f1d0;
    }
  }
  bVar3 = true;
  FUN_1023b050();
  *pcVar12 = 'x';
  pcVar12 = local_90 + 2;
LAB_1024f1d0:
  local_90 = pcVar12;
  bVar6 = false;
  local_9c = 0;
  uVar13 = 10;
  if (bVar3) {
    uVar13 = 0x16;
  }
  local_a0 = 0;
  if (local_70 != 0) {
LAB_1024f3b1:
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024f3f7:
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
        if (sVar8 == -1) goto LAB_1024f3f7;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_1024f420;
    }
    else if (*param_4 != 0) goto LAB_1024f420;
    if ((char)param_3[1] == '\0') {
      if (piVar25 == (int *)0x0) {
LAB_1024f4bd:
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
        if (sVar8 == -1) goto LAB_1024f4bd;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024f420;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024f52c:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
      bVar4 = true;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_1024f500:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_1024f500;
        *(int *)piVar25[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar25[7];
        *(short **)piVar25[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024f52c;
      bVar4 = true;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1024f3b1;
  }
LAB_1024f210:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024f258:
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
      if (sVar8 == -1) goto LAB_1024f258;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024f984;
  }
  else if (*param_4 != 0) goto LAB_1024f984;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024f2da:
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
      if (sVar8 == -1) goto LAB_1024f2da;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar15 = iVar14 - (int)local_50 >> 1;
  if (uVar13 <= uVar15) goto LAB_1024f984;
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
LAB_1024f3a2:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024f378:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024f378;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024f3a2;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024f210;
LAB_1024f420:
  FUN_1022dbf0(1,local_98);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_98 = 0;
LAB_1024f440:
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024f563:
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
      if (sVar8 == -1) goto LAB_1024f563;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar25 = (int *)*param_3;
  if (piVar25 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024f58c;
  }
  else if (*param_4 != 0) goto LAB_1024f58c;
  if ((char)param_3[1] == '\0') {
    if (piVar25 == (int *)0x0) {
LAB_1024f603:
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
      if (sVar8 == -1) goto LAB_1024f603;
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
LAB_1024f6eb:
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
        if (sVar8 == -1) goto LAB_1024f6eb;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) goto LAB_1024f58c;
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
LAB_1024f783:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar25[7] == 0) {
LAB_1024f75c:
      pcVar1 = *(code **)(*piVar25 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar25[0xb];
      if (iVar14 < 1) goto LAB_1024f75c;
      *(int *)piVar25[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar25[7];
      *(short **)piVar25[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024f783;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024f440;
LAB_1024f58c:
  if (local_98 != 0) {
    ppppcVar16 = local_68;
    if (0xf < local_54) {
      ppppcVar16 = (char ****)local_68[0];
    }
    if (*(char *)((int)ppppcVar16 + local_98) < '\x01') goto LAB_1024f792;
    local_98 = local_98 + 1;
  }
  do {
    if ((char)param_3[1] == '\0') {
      piVar25 = (int *)*param_3;
      if (piVar25 == (int *)0x0) {
LAB_1024f7dc:
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
        if (sVar8 == -1) goto LAB_1024f7dc;
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
LAB_1024f8f9:
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
        if (sVar8 == -1) goto LAB_1024f8f9;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_b0) break;
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024f964:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar25[7] == 0) {
LAB_1024f93c:
        pcVar1 = *(code **)(*piVar25 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar25[0xb];
        if (iVar14 < 1) goto LAB_1024f93c;
        *(int *)piVar25[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar25[7];
        *(short **)piVar25[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024f964;
      *(undefined1 *)(param_3 + 1) = 0;
    }
LAB_1024f792:
    bVar4 = true;
  } while( true );
  ppppcVar16 = local_80;
  if (0xf < local_6c) {
    ppppcVar16 = (char ****)local_80[0];
  }
  ppppcVar23 = (char ****)((int)ppppcVar16 + local_70);
  if (!bVar4) {
    cVar7 = '\0';
LAB_1024f833:
    do {
      do {
        if (local_98 == 0) goto LAB_1024f978;
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
        if (local_98 != 0) goto LAB_1024f833;
      }
      ppppcVar17 = local_68;
      if (0xf < local_54) {
        ppppcVar17 = (char ****)local_68[0];
      }
    } while (*(char *)ppppcVar17 <= cVar7);
  }
LAB_1024f978:
  local_8 = local_8 & 0xffffff00;
  FUN_10001fee();
LAB_1024f984:
  if (((bVar3) && (bVar5)) && (local_9c == 0)) {
    *local_90 = '0';
    local_90 = local_90 + 1;
  }
  plVar18 = _localeconv();
  cVar7 = *plVar18->decimal_point;
  if ((char)param_3[1] == '\0') {
    piVar25 = (int *)*param_3;
    if (piVar25 == (int *)0x0) {
LAB_1024f9fe:
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
      if (sVar8 == -1) goto LAB_1024f9fe;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1024fb1c;
  }
  else if (*param_4 != 0) goto LAB_1024fb1c;
  pcVar1 = *(code **)(*piVar11 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  sVar8 = (*pcVar1)();
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024faa0:
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
      if (sVar9 == -1) goto LAB_1024faa0;
      *(short *)((int)param_3 + 6) = sVar9;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if (*(short *)((int)param_3 + 6) != sVar8) goto LAB_1024fb1c;
  *local_90 = cVar7;
  local_90 = local_90 + 1;
  piVar11 = (int *)*param_3;
  if (piVar11 != (int *)0x0) {
    if (*(int *)piVar11[7] == 0) {
LAB_1024faee:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_1024faee;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1024fb1c;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1024fb1c:
  if (local_9c == 0) {
LAB_1024fb25:
    if ((char)param_3[1] == '\0') {
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_1024fb6b:
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
        if (sVar8 == -1) goto LAB_1024fb6b;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((char)param_4[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
      if (*param_4 == 0) goto LAB_1024fb94;
    }
    else if (*param_4 != 0) goto LAB_1024fb94;
    if ((char)param_3[1] == '\0') {
      if (piVar11 == (int *)0x0) {
LAB_1024fc11:
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
        if (sVar8 == -1) goto LAB_1024fc11;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_1024fb94;
    local_a0 = local_a0 - 1;
    piVar11 = (int *)*param_3;
    bVar5 = true;
    if (piVar11 == (int *)0x0) {
LAB_1024fc85:
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      if (*(int *)piVar11[7] == 0) {
LAB_1024fc5e:
        pcVar1 = *(code **)(*piVar11 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar1)();
      }
      else {
        iVar14 = *(int *)piVar11[0xb];
        if (iVar14 < 1) goto LAB_1024fc5e;
        *(int *)piVar11[0xb] = iVar14 + -1;
        psVar2 = *(short **)piVar11[7];
        *(short **)piVar11[7] = psVar2 + 1;
        sVar8 = *psVar2;
      }
      if (sVar8 == -1) goto LAB_1024fc85;
      *(undefined1 *)(param_3 + 1) = 0;
    }
    goto LAB_1024fb25;
  }
LAB_1024fb94:
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024fcb8:
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
      if (sVar8 == -1) goto LAB_1024fcb8;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar11 = (int *)*param_3;
  if (piVar11 == (int *)0x0) {
    if (*param_4 == 0) goto LAB_1024fce9;
  }
  else if (*param_4 != 0) goto LAB_1024fce9;
  if ((char)param_3[1] == '\0') {
    if (piVar11 == (int *)0x0) {
LAB_1024fdfe:
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
      if (sVar8 == -1) goto LAB_1024fdfe;
      *(short *)((int)param_3 + 6) = sVar8;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar15 = iVar14 - (int)local_50 >> 1;
  if (uVar13 <= uVar15) goto LAB_1024fce9;
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
LAB_1024fec3:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar11[7] == 0) {
LAB_1024fe9c:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_1024fe9c;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_1024fec3;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1024fb94;
LAB_1024fce9:
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
      if (cVar20 != cVar7) goto LAB_1024fd2a;
    }
    *pcVar12 = cVar20 + '\x01';
  }
LAB_1024fd2a:
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
  if (!bVar5) goto LAB_10250675;
  if ((char)param_3[1] == '\0') {
    piVar11 = (int *)*param_3;
    if (piVar11 == (int *)0x0) {
LAB_1024fefa:
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
      if (sVar10 == -1) goto LAB_1024fefa;
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
LAB_1024ff33:
      cVar7 = (char)param_3[1];
      if (cVar7 == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_1024ff7b:
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
          if (sVar10 == -1) goto LAB_1024ff7b;
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
LAB_1024ffe0:
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
            if (sVar10 == -1) goto LAB_1024ffe0;
            *(short *)((int)param_3 + 6) = sVar10;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar10 != sVar9) goto LAB_10250340;
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
LAB_102500a5:
        *param_3 = 0;
      }
      else {
        if (*(int *)piVar11[7] == 0) {
LAB_1025002c:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_1025002c;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_102500a5;
        *(undefined1 *)(param_3 + 1) = 0;
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) goto LAB_102500a5;
        if ((*(short **)piVar11[7] == (short *)0x0) || (*(int *)piVar11[0xb] < 1)) {
          pcVar1 = *(code **)(*piVar11 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          sVar8 = **(short **)piVar11[7];
        }
        if (sVar8 == -1) goto LAB_102500a5;
        *(short *)((int)param_3 + 6) = sVar8;
      }
      bVar5 = false;
      *(undefined1 *)(param_3 + 1) = 1;
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_10250271;
      }
      else if (*param_4 != 0) goto LAB_10250271;
      cVar7 = (char)param_3[1];
      if (cVar7 == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_10250127:
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
          if (sVar8 == -1) goto LAB_10250127;
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
LAB_102501f2:
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
            if (sVar8 == -1) goto LAB_102501f2;
            *(short *)((int)param_3 + 6) = sVar8;
          }
          *(undefined1 *)(param_3 + 1) = 1;
        }
        if (sVar8 != local_24) goto LAB_10250271;
        piVar11 = (int *)*param_3;
        bVar4 = true;
        if (piVar11 != (int *)0x0) {
          if (*(int *)piVar11[7] == 0) {
LAB_1025023d:
            pcVar1 = *(code **)(*piVar11 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar1)();
          }
          else {
            iVar14 = *(int *)piVar11[0xb];
            if (iVar14 < 1) goto LAB_1025023d;
            *(int *)piVar11[0xb] = iVar14 + -1;
            psVar2 = *(short **)piVar11[7];
            *(short **)piVar11[7] = psVar2 + 1;
            sVar8 = *psVar2;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_3 + 1) = 0;
            goto LAB_10250271;
          }
        }
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
        goto LAB_10250271;
      }
      piVar11 = (int *)*param_3;
      if (piVar11 != (int *)0x0) {
        if (*(int *)piVar11[7] == 0) {
LAB_1025016a:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_1025016a;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 != -1) {
          *(undefined1 *)(param_3 + 1) = 0;
          goto LAB_10250271;
        }
      }
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 1;
LAB_10250271:
      if ((char)param_3[1] == '\0') {
        piVar11 = (int *)*param_3;
        if (piVar11 == (int *)0x0) {
LAB_102502c1:
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
          if (sVar8 == -1) goto LAB_102502c1;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if ((char)param_4[1] == '\0') {
        FUN_1023b0c0();
      }
      piVar11 = (int *)*param_3;
      if (piVar11 == (int *)0x0) {
        if (*param_4 == 0) goto LAB_102502f8;
      }
      else if (*param_4 != 0) goto LAB_102502f8;
      if ((char)param_3[1] == '\0') {
        if (piVar11 == (int *)0x0) {
LAB_10250458:
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
          if (sVar8 == -1) goto LAB_10250458;
          *(short *)((int)param_3 + 6) = sVar8;
        }
        *(undefined1 *)(param_3 + 1) = 1;
      }
      if (*(short *)((int)param_3 + 6) != local_50[0]) goto LAB_102502f8;
      piVar11 = (int *)*param_3;
      bVar5 = true;
      if (piVar11 == (int *)0x0) {
LAB_102504d0:
        *param_3 = 0;
        *(undefined1 *)(param_3 + 1) = 1;
      }
      else {
        if (*(int *)piVar11[7] == 0) {
LAB_102504a5:
          pcVar1 = *(code **)(*piVar11 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar1)();
        }
        else {
          iVar14 = *(int *)piVar11[0xb];
          if (iVar14 < 1) goto LAB_102504a5;
          *(int *)piVar11[0xb] = iVar14 + -1;
          psVar2 = *(short **)piVar11[7];
          *(short **)piVar11[7] = psVar2 + 1;
          sVar8 = *psVar2;
        }
        if (sVar8 == -1) goto LAB_102504d0;
        *(undefined1 *)(param_3 + 1) = 0;
      }
      goto LAB_10250271;
    }
  }
  else if (*param_4 == 0) goto LAB_1024ff33;
  goto LAB_10250340;
LAB_102502f8:
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_4[1] == '\0') {
    FUN_1023b0c0();
  }
  if (*param_3 == 0) {
    if (*param_4 == 0) goto LAB_1025032b;
  }
  else if (*param_4 != 0) goto LAB_1025032b;
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  iVar14 = FUN_102299a0(local_50,local_18,*(undefined2 *)((int)param_3 + 6));
  uVar13 = iVar14 - (int)local_50 >> 1;
  if (9 < uVar13) goto LAB_1025032b;
  if (((int)local_a4 < 0xccccccc) || ((local_a4 == 0xccccccc && ((int)uVar13 < 8)))) {
    local_a4 = uVar13 + local_a4 * 10;
  }
  else {
    local_a4 = 0x7fffffff;
  }
  piVar11 = (int *)*param_3;
  bVar5 = true;
  if (piVar11 == (int *)0x0) {
LAB_10250592:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (*(int *)piVar11[7] == 0) {
LAB_10250567:
      pcVar1 = *(code **)(*piVar11 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar1)();
    }
    else {
      iVar14 = *(int *)piVar11[0xb];
      if (iVar14 < 1) goto LAB_10250567;
      *(int *)piVar11[0xb] = iVar14 + -1;
      psVar2 = *(short **)piVar11[7];
      *(short **)piVar11[7] = psVar2 + 1;
      sVar8 = *psVar2;
    }
    if (sVar8 == -1) goto LAB_10250592;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_102502f8;
LAB_1025032b:
  if (bVar4) {
    local_a4 = -local_a4;
  }
  uVar13 = local_a4;
  if (!bVar5) goto LAB_10250675;
LAB_10250340:
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
    goto LAB_102505da;
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
LAB_102505da:
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
LAB_10250675:
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

