/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023f440 */

void FUN_1023f440(undefined4 *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                 int param_6,uint *param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289e9d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar10 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piVar10 + 4);
  local_20 = piVar10;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  local_8 = 0;
  piVar6 = (int *)FUN_10091ec2(&local_24);
  local_8 = 0xffffffff;
  if (piVar10 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar10 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(*local_18 + 0xc);
  (*(code *)PTR_guard_check_icall_1035d810)();
  local_14 = (*pcVar1)();
  if (local_14 == 0) {
    local_14 = 2;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f539:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f539;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023f6b0;
  }
  else if (param_4 != 0) goto LAB_1023f6b0;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f5b5:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f5b5;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(4,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') {
    pcVar1 = *(code **)(*local_18 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)
              (&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    (*pcVar1)();
    param_2 = local_24;
    param_3 = local_20;
    local_14 = 2;
  }
  else if (local_14 == 2) {
    piVar10 = (int *)(param_8 + 0x10);
    uVar8 = FUN_10249cf0(&param_2,&param_4,1,0xc,piVar10,&local_20,piVar6);
    *param_7 = *param_7 | uVar8;
    *piVar10 = *piVar10 + -1;
  }
  else if (local_14 == 1) {
    uVar8 = FUN_10249cf0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar6);
    *param_7 = *param_7 | uVar8;
  }
  else {
    puVar7 = (undefined4 *)
             FUN_1023f120(&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = (int *)*puVar7;
    param_3 = (int *)puVar7[1];
  }
LAB_1023f6b0:
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023f6d8;
  }
  else if (param_4 != 0) goto LAB_1023f6d8;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') goto LAB_1023f6d8;
  if (param_2 == (int *)0x0) {
LAB_1023f78f:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_1023f768:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar5 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_1023f768;
      *(int *)param_2[0xb] = iVar2 + -1;
      psVar3 = *(short **)param_2[7];
      *(short **)param_2[7] = psVar3 + 1;
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_1023f78f;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_1023f6b0;
LAB_1023f6d8:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f7c3:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f7c3;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023f8c7;
  }
  else if (param_4 != 0) goto LAB_1023f8c7;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f83f:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f83f;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)((uint)param_3 >> 0x10,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_1023f8c7;
  do {
    if (param_2 == (int *)0x0) {
LAB_1023f8bc:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_1023f898:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_1023f898;
        *(int *)param_2[0xb] = iVar2 + -1;
        psVar3 = *(short **)param_2[7];
        *(short **)param_2[7] = psVar3 + 1;
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_1023f8bc;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_1023f8c7:
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    if ((char)param_5 == '\0') {
      FUN_1023b0c0();
    }
    if (param_2 == (int *)0x0) {
      if (param_4 == 0) break;
    }
    else if (param_4 != 0) break;
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f96c:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f96c;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023fac1;
  }
  else if (param_4 != 0) goto LAB_1023fac1;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023f9e8:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023f9e8;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(4,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  iVar2 = local_14;
  if (cVar4 == '\0') {
    if (local_14 == 2) {
      *param_7 = *param_7 | 2;
    }
    else {
      pcVar1 = *(code **)(*local_18 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)
                (&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      (*pcVar1)();
      param_2 = local_24;
      param_3 = local_20;
      if (iVar2 == 4) {
        local_14 = 3;
      }
    }
  }
  else if ((local_14 == 1) || (local_14 == 3)) {
    piVar10 = (int *)(param_8 + 0x10);
    uVar8 = FUN_10249cf0(&param_2,&param_4,1,0xc,piVar10,&local_20,piVar6);
    *param_7 = *param_7 | uVar8;
    *piVar10 = *piVar10 + -1;
  }
  else {
    uVar8 = FUN_10249cf0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar6);
    *param_7 = *param_7 | uVar8;
  }
LAB_1023fac1:
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023fae9;
  }
  else if (param_4 != 0) goto LAB_1023fae9;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') goto LAB_1023fae9;
  if (param_2 == (int *)0x0) {
LAB_1023fba0:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_1023fb79:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar5 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_1023fb79;
      *(int *)param_2[0xb] = iVar2 + -1;
      psVar3 = *(short **)param_2[7];
      *(short **)param_2[7] = psVar3 + 1;
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_1023fba0;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_1023fac1;
LAB_1023fae9:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023fbd4:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023fbd4;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023fcd8;
  }
  else if (param_4 != 0) goto LAB_1023fcd8;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023fc50:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023fc50;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)((uint)param_3 >> 0x10,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_1023fcd8;
  do {
    if (param_2 == (int *)0x0) {
LAB_1023fccd:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_1023fca9:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_1023fca9;
        *(int *)param_2[0xb] = iVar2 + -1;
        psVar3 = *(short **)param_2[7];
        *(short **)param_2[7] = psVar3 + 1;
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_1023fccd;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_1023fcd8:
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    if ((char)param_5 == '\0') {
      FUN_1023b0c0();
    }
    if (param_2 == (int *)0x0) {
      if (param_4 == 0) break;
    }
    else if (param_4 != 0) break;
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023fd7d:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023fd7d;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_1023fdcb;
LAB_1023fda2:
    if ((char)param_3 == '\0') {
      if (param_2 == (int *)0x0) {
LAB_1023fdfa:
        param_2 = (int *)0x0;
      }
      else {
        if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
          pcVar1 = *(code **)(*param_2 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar5 = (*pcVar1)();
        }
        else {
          sVar5 = **(short **)param_2[7];
        }
        if (sVar5 == -1) goto LAB_1023fdfa;
        param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
      }
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)(4,(uint)param_3 >> 0x10);
    cVar4 = (*pcVar1)();
    puVar9 = param_7;
    if (cVar4 == '\0') {
      if (local_14 == 4) {
        pcVar1 = *(code **)(*local_18 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)
                  (&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        (*pcVar1)();
        param_2 = local_24;
        param_3 = local_20;
      }
      else {
        *param_7 = *param_7 | 2;
      }
    }
    else if (local_14 == 4) {
      piVar10 = (int *)(param_8 + 0x10);
      uVar8 = FUN_10249cf0(&param_2,&param_4,1,0xc,piVar10,&local_20,piVar6);
      *param_7 = *param_7 | uVar8;
      *piVar10 = *piVar10 + -1;
      puVar9 = param_7;
    }
    else if (local_14 == 3) {
      uVar8 = FUN_10249cf0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar6);
      *param_7 = *param_7 | uVar8;
      puVar9 = param_7;
    }
    else {
      pcVar1 = *(code **)(*local_18 + 0x20);
      (*(code *)PTR_guard_check_icall_1035d810)
                (&local_1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      (*pcVar1)();
      param_2 = local_1c;
      param_3 = local_18;
    }
  }
  else {
    if (param_4 == 0) goto LAB_1023fda2;
LAB_1023fdcb:
    *param_7 = *param_7 | 2;
    puVar9 = param_7;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1023ff46:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        sVar5 = **(short **)param_2[7];
      }
      if (sVar5 == -1) goto LAB_1023ff46;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) goto LAB_1023ff76;
  }
  else if (param_4 == 0) goto LAB_1023ff76;
  *puVar9 = *puVar9 | 1;
LAB_1023ff76:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

