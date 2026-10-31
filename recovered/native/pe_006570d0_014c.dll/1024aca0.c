/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1024aca0 */

void FUN_1024aca0(char *param_1,int *param_2,int *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  code *pcVar2;
  short *psVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char ****ppppcVar13;
  char *pcVar14;
  char *pcVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  char *pcVar18;
  int *local_a4;
  short local_9c;
  char *local_94;
  int local_8c;
  byte local_85;
  uint local_84;
  char ***local_7c [4];
  int local_6c;
  uint local_68;
  char ***local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  uint local_50;
  short local_4c [22];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined1 local_18 [4];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289375;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar9 = (int *)FUN_10243830(param_5,local_14);
  pcVar2 = *(code **)(*piVar9 + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_7c);
  (*pcVar2)();
  local_8 = 0;
  if (local_6c == 0) {
    local_9c = 0;
  }
  else {
    pcVar2 = *(code **)(*piVar9 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)();
    local_9c = (*pcVar2)();
  }
  piVar9 = (int *)FUN_10240a50(param_5);
  pcVar2 = *(code **)(*piVar9 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789ABCDEFabcdef-+Xx",&DAT_103018cb,local_4c);
  (*pcVar2)();
  bVar5 = false;
  if (local_9c != 0) {
    piVar9 = (int *)*param_2;
LAB_1024ad8c:
    if ((char)param_2[1] == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024adda:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024adda;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
      if (*param_3 == 0) goto LAB_1024ae06;
    }
    else if (*param_3 != 0) goto LAB_1024ae06;
    if ((char)param_2[1] == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024ae97:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024ae97;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((int)param_2 + 6) != local_9c) goto LAB_1024ae06;
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024af0c:
      *param_2 = 0;
      piVar9 = (int *)0x0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar9[7] == 0) {
LAB_1024aedd:
        pcVar2 = *(code **)(*piVar9 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar9[0xb];
        if (iVar10 < 1) goto LAB_1024aedd;
        *(int *)piVar9[0xb] = iVar10 + -1;
        psVar3 = *(short **)piVar9[7];
        *(short **)piVar9[7] = psVar3 + 1;
        sVar8 = *psVar3;
      }
      if (sVar8 == -1) goto LAB_1024af0c;
      piVar9 = (int *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar5 = true;
    }
    goto LAB_1024ad8c;
  }
LAB_1024ae06:
  cVar7 = (char)param_2[1];
  local_94 = param_1;
  if (cVar7 == '\0') {
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024af49:
      *param_2 = 0;
    }
    else {
      if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar9 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        sVar8 = **(short **)piVar9[7];
      }
      if (sVar8 == -1) goto LAB_1024af49;
      *(short *)((int)param_2 + 6) = sVar8;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar7 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
    cVar7 = (char)param_2[1];
  }
  piVar9 = (int *)*param_2;
  if (piVar9 == (int *)0x0) {
    if (*param_3 != 0) {
LAB_1024af8d:
      if (cVar7 == '\0') {
        if (piVar9 == (int *)0x0) {
LAB_1024afd8:
          *param_2 = 0;
          piVar9 = (int *)0x0;
        }
        else {
          if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
            pcVar2 = *(code **)(*piVar9 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar2)();
          }
          else {
            sVar8 = **(short **)piVar9[7];
          }
          if (sVar8 == -1) goto LAB_1024afd8;
          piVar9 = (int *)*param_2;
          *(short *)((int)param_2 + 6) = sVar8;
        }
        cVar7 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      sVar8 = *(short *)((int)param_2 + 6);
      if (sVar8 == local_1e) {
        local_94 = param_1 + 1;
        *param_1 = '+';
        piVar9 = (int *)*param_2;
        if (piVar9 != (int *)0x0) {
          if (*(int *)piVar9[7] == 0) {
LAB_1024b033:
            pcVar2 = *(code **)(*piVar9 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar2)();
          }
          else {
            iVar10 = *(int *)piVar9[0xb];
            if (iVar10 < 1) goto LAB_1024b033;
            *(int *)piVar9[0xb] = iVar10 + -1;
            psVar3 = *(short **)piVar9[7];
            *(short **)piVar9[7] = psVar3 + 1;
            sVar8 = *psVar3;
          }
          if (sVar8 != -1) {
            cVar7 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_1024b143;
          }
        }
        cVar7 = '\x01';
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (cVar7 == '\0') {
          if (piVar9 == (int *)0x0) {
LAB_1024b0b9:
            sVar8 = *(short *)((int)param_2 + 6);
            *param_2 = 0;
          }
          else {
            if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
              pcVar2 = *(code **)(*piVar9 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              sVar8 = (*pcVar2)();
            }
            else {
              sVar8 = **(short **)piVar9[7];
            }
            if (sVar8 == -1) goto LAB_1024b0b9;
            *(short *)((int)param_2 + 6) = sVar8;
          }
          cVar7 = '\x01';
          *(undefined1 *)(param_2 + 1) = 1;
        }
        if (sVar8 != local_20) goto LAB_1024b143;
        local_94 = param_1 + 1;
        *param_1 = '-';
        piVar9 = (int *)*param_2;
        if (piVar9 != (int *)0x0) {
          if (*(int *)piVar9[7] == 0) {
LAB_1024b10f:
            pcVar2 = *(code **)(*piVar9 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar2)();
          }
          else {
            iVar10 = *(int *)piVar9[0xb];
            if (iVar10 < 1) goto LAB_1024b10f;
            *(int *)piVar9[0xb] = iVar10 + -1;
            psVar3 = *(short **)piVar9[7];
            *(short **)piVar9[7] = psVar3 + 1;
            sVar8 = *psVar3;
          }
          if (sVar8 != -1) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar7 = '\0';
            goto LAB_1024b143;
          }
        }
        *param_2 = 0;
        cVar7 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
  }
  else if (*param_3 == 0) goto LAB_1024af8d;
LAB_1024b143:
  if (local_9c != 0) {
    piVar9 = (int *)*param_2;
LAB_1024b153:
    if (cVar7 == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024b1a2:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024b1a2;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
      if (*param_3 == 0) goto LAB_1024b1d3;
    }
    else if (*param_3 != 0) goto LAB_1024b1d3;
    if ((char)param_2[1] == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024b23a:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024b23a;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((int)param_2 + 6) != local_9c) goto LAB_1024b1d3;
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024b2ac:
      cVar7 = '\x01';
      *param_2 = 0;
      piVar9 = (int *)0x0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar9[7] == 0) {
LAB_1024b27b:
        pcVar2 = *(code **)(*piVar9 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar9[0xb];
        if (iVar10 < 1) goto LAB_1024b27b;
        *(int *)piVar9[0xb] = iVar10 + -1;
        psVar3 = *(short **)piVar9[7];
        *(short **)piVar9[7] = psVar3 + 1;
        sVar8 = *psVar3;
      }
      if (sVar8 == -1) goto LAB_1024b2ac;
      piVar9 = (int *)*param_2;
      cVar7 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      bVar5 = true;
    }
    goto LAB_1024b153;
  }
LAB_1024b1d3:
  param_4 = param_4 & 0xe00;
  if (param_4 == 0x400) {
    param_4._0_1_ = 8;
  }
  else if (param_4 == 0x800) {
    param_4._0_1_ = 0x10;
  }
  else {
    param_4._0_1_ = -(param_4 != 0) & 10;
  }
  local_85 = 0;
  bVar4 = false;
  if ((char)param_2[1] == '\0') {
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024b333:
      *param_2 = 0;
    }
    else {
      if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar9 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        sVar8 = **(short **)piVar9[7];
      }
      if (sVar8 == -1) goto LAB_1024b333;
      *(short *)((int)param_2 + 6) = sVar8;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar9 = (int *)*param_2;
  if (piVar9 == (int *)0x0) {
    if (*param_3 == 0) goto LAB_1024b364;
LAB_1024b392:
    if ((char)param_2[1] == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024b3d9:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024b3d9;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(short *)((int)param_2 + 6) != local_4c[0]) goto LAB_1024b364;
    piVar9 = (int *)*param_2;
    local_85 = 1;
    if (piVar9 == (int *)0x0) {
LAB_1024b493:
      *param_2 = 0;
    }
    else {
      if (*(int *)piVar9[7] == 0) {
LAB_1024b427:
        pcVar2 = *(code **)(*piVar9 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar9[0xb];
        if (iVar10 < 1) goto LAB_1024b427;
        *(int *)piVar9[0xb] = iVar10 + -1;
        psVar3 = *(short **)piVar9[7];
        *(short **)piVar9[7] = psVar3 + 1;
        sVar8 = *psVar3;
      }
      if (sVar8 == -1) goto LAB_1024b493;
      piVar9 = (int *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      if (piVar9 == (int *)0x0) goto LAB_1024b493;
      if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar9 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        sVar8 = **(short **)piVar9[7];
      }
      if (sVar8 == -1) goto LAB_1024b493;
      *(short *)((int)param_2 + 6) = sVar8;
    }
    *(char *)(param_2 + 1) = '\x01';
    if ((char)param_3[1] == '\0') {
      FUN_1023b0c0();
    }
    piVar9 = (int *)*param_2;
    if (piVar9 != (int *)0x0) {
      if (*param_3 == 0) goto LAB_1024b4e0;
LAB_1024b4c7:
      if ((byte)param_4 == 0) {
        param_4._0_1_ = 8;
        goto LAB_1024b377;
      }
      goto LAB_1024b36f;
    }
    if (*param_3 == 0) goto LAB_1024b4c7;
LAB_1024b4e0:
    cVar7 = (char)param_2[1];
    if (cVar7 == '\0') {
      if (piVar9 == (int *)0x0) {
LAB_1024b528:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024b528;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar7 = '\x01';
    }
    sVar8 = *(short *)((int)param_2 + 6);
    if (sVar8 != local_1a) {
      if (cVar7 == '\0') {
        piVar9 = (int *)*param_2;
        if (piVar9 == (int *)0x0) {
LAB_1024b588:
          sVar8 = *(short *)((int)param_2 + 6);
          *param_2 = 0;
        }
        else {
          if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
            pcVar2 = *(code **)(*piVar9 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar8 = (*pcVar2)();
          }
          else {
            sVar8 = **(short **)piVar9[7];
          }
          if (sVar8 == -1) goto LAB_1024b588;
          *(short *)((int)param_2 + 6) = sVar8;
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (sVar8 != local_1c) goto LAB_1024b4c7;
    }
    if (((byte)param_4 != 0) && ((byte)param_4 != 0x10)) goto LAB_1024b36f;
    piVar9 = (int *)*param_2;
    param_4._0_1_ = 0x10;
    local_85 = 0;
    if (piVar9 == (int *)0x0) {
LAB_1024b615:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      param_4._0_1_ = 0x10;
    }
    else {
      if (*(int *)piVar9[7] == 0) {
LAB_1024b5e9:
        pcVar2 = *(code **)(*piVar9 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar9[0xb];
        if (iVar10 < 1) goto LAB_1024b5e9;
        *(int *)piVar9[0xb] = iVar10 + -1;
        psVar3 = *(short **)piVar9[7];
        *(short **)piVar9[7] = psVar3 + 1;
        sVar8 = *psVar3;
      }
      if (sVar8 == -1) goto LAB_1024b615;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_1024b377:
    local_84 = 0x16;
    if ((byte)param_4 == 8) {
      local_84 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_1024b392;
LAB_1024b364:
    if ((byte)param_4 != 0) {
LAB_1024b36f:
      if ((byte)param_4 != 10) goto LAB_1024b377;
    }
    local_84 = 10;
  }
  local_54 = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  local_50 = 0xf;
  local_64 = (char ***)(uint)local_85;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_8c = 0;
LAB_1024b670:
  if ((char)param_2[1] == '\0') {
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024b6c0:
      *param_2 = 0;
    }
    else {
      if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar9 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        sVar8 = **(short **)piVar9[7];
      }
      if (sVar8 == -1) goto LAB_1024b6c0;
      *(short *)((int)param_2 + 6) = sVar8;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar9 = (int *)*param_2;
  if (piVar9 == (int *)0x0) {
    if (*param_3 == 0) goto LAB_1024b6ef;
  }
  else if (*param_3 != 0) goto LAB_1024b6ef;
  if ((char)param_2[1] == '\0') {
    if (piVar9 == (int *)0x0) {
LAB_1024b76a:
      *param_2 = 0;
    }
    else {
      if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar9 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        sVar8 = **(short **)piVar9[7];
      }
      if (sVar8 == -1) goto LAB_1024b76a;
      *(short *)((int)param_2 + 6) = sVar8;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  iVar10 = FUN_102299a0(local_4c,local_18,*(undefined2 *)((int)param_2 + 6));
  uVar11 = iVar10 - (int)local_4c >> 1;
  if (uVar11 < local_84) {
    cVar7 = "0123456789ABCDEFabcdef-+Xx"[uVar11];
    *local_94 = cVar7;
    if (((bVar4) || (cVar7 != '0')) && (local_94 < param_1 + 0x1f)) {
      local_94 = local_94 + 1;
      bVar4 = true;
    }
    ppppcVar16 = &local_64;
    if (0xf < local_50) {
      ppppcVar16 = (char ****)local_64;
    }
    local_85 = 1;
    if (*(char *)((int)ppppcVar16 + local_8c) != '\x7f') {
      ppppcVar16 = &local_64;
      if (0xf < local_50) {
        ppppcVar16 = (char ****)local_64;
      }
      *(char *)((int)ppppcVar16 + local_8c) = *(char *)((int)ppppcVar16 + local_8c) + '\x01';
    }
  }
  else {
    if (local_9c == 0) goto LAB_1024b6ef;
    if ((char)param_2[1] == '\0') {
      piVar9 = (int *)*param_2;
      if (piVar9 == (int *)0x0) {
LAB_1024b864:
        *param_2 = 0;
      }
      else {
        if ((*(short **)piVar9[7] == (short *)0x0) || (*(int *)piVar9[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar9 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar8 = (*pcVar2)();
        }
        else {
          sVar8 = **(short **)piVar9[7];
        }
        if (sVar8 == -1) goto LAB_1024b864;
        *(short *)((int)param_2 + 6) = sVar8;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar11 = local_54;
    if (*(short *)((int)param_2 + 6) != local_9c) goto LAB_1024b6ef;
    ppppcVar16 = &local_64;
    if (0xf < local_50) {
      ppppcVar16 = (char ****)local_64;
    }
    if (*(char *)((int)ppppcVar16 + local_8c) == '\0') {
      bVar5 = true;
    }
    else {
      if (local_54 < local_50) {
        uVar1 = local_54 + 1;
        if (((local_54 != uVar1) && (0xf < local_50)) && (DAT_103235d4 != '\0')) {
          pcVar14 = (char *)((int)local_64 + local_54 + 1);
          pcVar18 = (char *)((int)local_64 + local_54 + 2);
          pcVar15 = (char *)((uint)((int)local_64 + local_50 + 8) & 0xfffffff8);
          pcVar12 = pcVar15;
          if (pcVar14 <= pcVar15) {
            pcVar12 = pcVar14;
          }
          if (pcVar15 < pcVar18) {
            pcVar18 = pcVar15;
          }
          guard_check_icall(local_64,pcVar15,pcVar12,pcVar18);
        }
        local_54 = uVar1;
        ppppcVar16 = &local_64;
        if (0xf < local_50) {
          ppppcVar16 = (char ****)local_64;
        }
        ((char *)((int)ppppcVar16 + uVar11))[0] = '\0';
        ((char *)((int)ppppcVar16 + uVar11))[1] = '\0';
      }
      else {
        FUN_10232b40(1,local_a4,0);
      }
      local_8c = local_8c + 1;
    }
  }
  local_a4 = (int *)*param_2;
  if (local_a4 == (int *)0x0) {
LAB_1024b98d:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (*(int *)local_a4[7] == 0) {
LAB_1024b962:
      pcVar2 = *(code **)(*local_a4 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar8 = (*pcVar2)();
    }
    else {
      iVar10 = *(int *)local_a4[0xb];
      if (iVar10 < 1) goto LAB_1024b962;
      *(int *)local_a4[0xb] = iVar10 + -1;
      psVar3 = *(short **)local_a4[7];
      *(short **)local_a4[7] = psVar3 + 1;
      sVar8 = *psVar3;
    }
    if (sVar8 == -1) goto LAB_1024b98d;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_1024b670;
LAB_1024bafc:
  if (!bVar4) {
    *local_94 = '0';
    local_94 = local_94 + 1;
  }
  *local_94 = '\0';
  goto LAB_1024bb2c;
LAB_1024b6ef:
  if (local_8c != 0) {
    ppppcVar16 = &local_64;
    if (0xf < local_50) {
      ppppcVar16 = (char ****)local_64;
    }
    if (*(char *)((int)ppppcVar16 + local_8c) < '\x01') {
      bVar5 = true;
    }
    else {
      local_8c = local_8c + 1;
    }
  }
  if (local_9c != 0) {
LAB_1024b9b0:
    if ((char)param_2[1] == '\0') {
      FUN_1023b0c0();
    }
    if ((char)param_3[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_1024b9e9;
    }
    else if (*param_3 != 0) goto LAB_1024b9e9;
    if ((char)param_2[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*(short *)((int)param_2 + 6) != local_9c) goto LAB_1024b9e9;
    piVar9 = (int *)*param_2;
    if (piVar9 == (int *)0x0) {
LAB_1024bae9:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar9[7] == 0) {
LAB_1024bab9:
        pcVar2 = *(code **)(*piVar9 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar8 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar9[0xb];
        if (iVar10 < 1) goto LAB_1024bab9;
        *(int *)piVar9[0xb] = iVar10 + -1;
        psVar3 = *(short **)piVar9[7];
        *(short **)piVar9[7] = psVar3 + 1;
        sVar8 = *psVar3;
      }
      if (sVar8 == -1) goto LAB_1024bae9;
      bVar5 = true;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_1024b9b0;
  }
LAB_1024b9e9:
  ppppcVar16 = local_7c;
  if (0xf < local_68) {
    ppppcVar16 = (char ****)local_7c[0];
  }
  cVar7 = '\0';
  ppppcVar17 = (char ****)((int)ppppcVar16 + local_6c);
  bVar6 = bVar5;
  if (local_85 != 0) {
LAB_1024ba10:
    do {
      if ((bVar5) || (local_8c == 0)) goto LAB_1024bafc;
      if (ppppcVar16 != ppppcVar17) {
        cVar7 = *(char *)ppppcVar16;
        ppppcVar16 = (char ****)((int)ppppcVar16 + 1);
      }
      local_8c = local_8c + -1;
    } while ((cVar7 < '\x01') || (cVar7 == '\x7f'));
    bVar5 = bVar6;
    if (local_8c == 0) {
LAB_1024ba4c:
      ppppcVar13 = &local_64;
      if (0xf < local_50) {
        ppppcVar13 = (char ****)local_64;
      }
      if (*(char *)ppppcVar13 <= cVar7) goto LAB_1024ba10;
    }
    else {
      ppppcVar13 = &local_64;
      if (0xf < local_50) {
        ppppcVar13 = (char ****)local_64;
      }
      if (*(char *)((int)ppppcVar13 + local_8c) == cVar7) {
        if (local_8c == 0) goto LAB_1024ba4c;
        goto LAB_1024ba10;
      }
    }
    bVar5 = true;
    bVar6 = true;
    goto LAB_1024ba10;
  }
LAB_1024bb2c:
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

