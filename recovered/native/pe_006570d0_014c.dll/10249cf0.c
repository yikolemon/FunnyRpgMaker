/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10249cf0 */

void FUN_10249cf0(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7)

{
  code *pcVar1;
  short *psVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  char *local_34;
  int *local_30;
  int *local_2c;
  char local_28;
  char local_27 [30];
  char local_9;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_38 = param_7;
  local_2c = param_2;
  local_30 = param_6;
  if (param_4 < 10) {
    local_3c = 1;
  }
  else if (param_4 < 100) {
    local_3c = 2;
  }
  else {
    local_3c = (999 < param_4) + 3;
  }
  local_34 = &local_28;
  *param_6 = 0;
LAB_10249d60:
  piVar7 = local_2c;
  piVar8 = local_30;
  if ((char)param_1[1] == '\0') {
    FUN_1023b0c0();
  }
  if ((char)piVar7[1] == '\0') {
    FUN_1023b0c0();
  }
  if (*param_1 == 0) {
    if (*piVar7 == 0) goto LAB_10249d85;
  }
  else if (*piVar7 != 0) goto LAB_10249d85;
  if (local_3c <= *piVar8) goto LAB_10249d85;
  if ((char)param_1[1] == '\0') {
    FUN_1023b0c0();
  }
  pcVar1 = *(code **)(*local_38 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(0x48,*(undefined2 *)((int)param_1 + 6));
  cVar3 = (*pcVar1)();
  if (cVar3 == '\0') goto LAB_10249d85;
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
LAB_10249e4b:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *local_30 = *local_30 + 1;
  }
  else {
    if (*(int *)piVar8[7] == 0) {
LAB_10249e1b:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar4 = (*pcVar1)();
    }
    else {
      iVar6 = *(int *)piVar8[0xb];
      if (iVar6 < 1) goto LAB_10249e1b;
      *(int *)piVar8[0xb] = iVar6 + -1;
      psVar2 = *(short **)piVar8[7];
      *(short **)piVar8[7] = psVar2 + 1;
      sVar4 = *psVar2;
    }
    if (sVar4 == -1) goto LAB_10249e4b;
    *(undefined1 *)(param_1 + 1) = 0;
    *local_30 = *local_30 + 1;
  }
  goto LAB_10249d60;
LAB_10249d85:
  if ((char)param_1[1] == '\0') {
    piVar8 = (int *)*param_1;
    if (piVar8 == (int *)0x0) {
LAB_10249e87:
      *param_1 = 0;
    }
    else {
      if ((*(short **)piVar8[7] == (short *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar4 = (*pcVar1)();
      }
      else {
        sVar4 = **(short **)piVar8[7];
      }
      if (sVar4 == -1) goto LAB_10249e87;
      *(short *)((int)param_1 + 6) = sVar4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    piVar7 = local_2c;
  }
  if ((char)piVar7[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    if (*local_2c == 0) goto LAB_1024a001;
  }
  else if (*local_2c != 0) goto LAB_1024a001;
  if (local_3c <= *local_30) goto LAB_1024a001;
  if ((char)param_1[1] == '\0') {
    if (piVar8 == (int *)0x0) {
LAB_10249f10:
      *param_1 = 0;
    }
    else {
      if ((*(short **)piVar8[7] == (short *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar4 = (*pcVar1)();
      }
      else {
        sVar4 = **(short **)piVar8[7];
      }
      if (sVar4 == -1) goto LAB_10249f10;
      *(short *)((int)param_1 + 6) = sVar4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  pcVar1 = *(code **)(*local_38 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)(*(undefined2 *)((int)param_1 + 6),0);
  cVar3 = (*pcVar1)();
  if (cVar3 != '+') {
    if (cVar3 == '-') {
      local_34 = local_27;
      local_28 = cVar3;
      goto LAB_10249faa;
    }
    goto LAB_1024a001;
  }
  piVar8 = (int *)*param_1;
  local_34 = local_27;
  local_28 = cVar3;
  if (piVar8 != (int *)0x0) {
    if (*(int *)piVar8[7] == 0) {
LAB_10249f6b:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar4 = (*pcVar1)();
    }
    else {
      iVar6 = *(int *)piVar8[0xb];
      if (iVar6 < 1) goto LAB_10249f6b;
      *(int *)piVar8[0xb] = iVar6 + -1;
      psVar2 = *(short **)piVar8[7];
      *(short **)piVar8[7] = psVar2 + 1;
      sVar4 = *psVar2;
    }
    if (sVar4 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1024a001;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1024a001:
  if ((char)param_1[1] == '\0') {
    piVar8 = (int *)*param_1;
    if (piVar8 == (int *)0x0) {
LAB_1024a047:
      *param_1 = 0;
    }
    else {
      if ((*(short **)piVar8[7] == (short *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar4 = (*pcVar1)();
      }
      else {
        sVar4 = **(short **)piVar8[7];
      }
      if (sVar4 == -1) goto LAB_1024a047;
      *(short *)((int)param_1 + 6) = sVar4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  piVar8 = local_2c;
  if ((char)local_2c[1] == '\0') {
    FUN_1023b0c0();
  }
  piVar7 = (int *)*param_1;
  if (piVar7 == (int *)0x0) {
    if (*piVar8 == 0) goto LAB_1024a0ff;
  }
  else if (*piVar8 != 0) goto LAB_1024a0ff;
  if (local_3c <= *local_30) goto LAB_1024a0ff;
  if ((char)param_1[1] == '\0') {
    if (piVar7 == (int *)0x0) {
LAB_1024a0c9:
      *param_1 = 0;
    }
    else {
      if ((*(short **)piVar7[7] == (short *)0x0) || (*(int *)piVar7[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar7 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar4 = (*pcVar1)();
      }
      else {
        sVar4 = **(short **)piVar7[7];
      }
      if (sVar4 == -1) goto LAB_1024a0c9;
      *(short *)((int)param_1 + 6) = sVar4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  pcVar1 = *(code **)(*local_38 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)(*(undefined2 *)((int)param_1 + 6),0);
  cVar3 = (*pcVar1)();
  piVar8 = local_2c;
  if (cVar3 != '0') goto LAB_1024a0ff;
  *local_30 = *local_30 + 1;
LAB_10249faa:
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
LAB_10249ff7:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (*(int *)piVar8[7] == 0) {
LAB_10249fd3:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar4 = (*pcVar1)();
    }
    else {
      iVar6 = *(int *)piVar8[0xb];
      if (iVar6 < 1) goto LAB_10249fd3;
      *(int *)piVar8[0xb] = iVar6 + -1;
      psVar2 = *(short **)piVar8[7];
      *(short **)piVar8[7] = psVar2 + 1;
      sVar4 = *psVar2;
    }
    if (sVar4 == -1) goto LAB_10249ff7;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_1024a001;
LAB_1024a0ff:
  if (0 < *local_30) {
    *local_34 = '0';
    local_34 = local_34 + 1;
  }
  do {
    piVar7 = local_30;
    if ((char)param_1[1] == '\0') {
      FUN_1023b0c0();
    }
    if ((char)piVar8[1] == '\0') {
      FUN_1023b0c0();
    }
    if (*param_1 == 0) {
      if (*piVar8 == 0) goto LAB_1024a13e;
    }
    else if (*piVar8 != 0) {
LAB_1024a13e:
      local_40 = 0;
      pcVar5 = &local_28;
      if (*piVar7 != 0) {
        pcVar5 = local_34;
      }
      *pcVar5 = '\0';
      iVar6 = FUN_10257a10(&local_28,&local_44,10,&local_40);
      if ((char)param_1[1] == '\0') {
        FUN_1023b0c0();
      }
      if ((char)local_2c[1] == '\0') {
        FUN_1023b0c0();
      }
      if ((((local_44 != &local_28) && (local_40 == 0)) && (param_3 <= iVar6)) && (iVar6 <= param_4)
         ) {
        *param_5 = iVar6;
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if ((char)param_1[1] == '\0') {
      FUN_1023b0c0();
    }
    pcVar1 = *(code **)(*local_38 + 0x38);
    (*(code *)PTR_guard_check_icall_1035d810)(*(undefined2 *)((int)param_1 + 6),0);
    cVar3 = (*pcVar1)();
    if ((9 < (byte)(cVar3 - 0x30U)) || (iVar6 = *piVar7, local_3c <= iVar6)) goto LAB_1024a13e;
    *local_34 = cVar3;
    if (local_34 < &local_9) {
      local_34 = local_34 + 1;
    }
    *piVar7 = iVar6 + 1;
    piVar8 = (int *)*param_1;
    if (piVar8 == (int *)0x0) {
LAB_1024a28d:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      piVar8 = local_2c;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_1024a260:
        pcVar1 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar4 = (*pcVar1)();
      }
      else {
        iVar6 = *(int *)piVar8[0xb];
        if (iVar6 < 1) goto LAB_1024a260;
        *(int *)piVar8[0xb] = iVar6 + -1;
        psVar2 = *(short **)piVar8[7];
        *(short **)piVar8[7] = psVar2 + 1;
        sVar4 = *psVar2;
      }
      if (sVar4 == -1) goto LAB_1024a28d;
      *(undefined1 *)(param_1 + 1) = 0;
      piVar8 = local_2c;
    }
  } while( true );
}

