/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10248130 */

void FUN_10248130(undefined4 *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
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
  piVar6 = (int *)FUN_10240a50(&local_24);
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
LAB_10248229:
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
      if (sVar5 == -1) goto LAB_10248229;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102483a0;
  }
  else if (param_4 != 0) goto LAB_102483a0;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_102482a5:
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
      if (sVar5 == -1) goto LAB_102482a5;
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
LAB_102483a0:
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102483c8;
  }
  else if (param_4 != 0) goto LAB_102483c8;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') goto LAB_102483c8;
  if (param_2 == (int *)0x0) {
LAB_1024847f:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_10248458:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar5 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_10248458;
      *(int *)param_2[0xb] = iVar2 + -1;
      psVar3 = *(short **)param_2[7];
      *(short **)param_2[7] = psVar3 + 1;
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_1024847f;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_102483a0;
LAB_102483c8:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_102484b3:
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
      if (sVar5 == -1) goto LAB_102484b3;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102485b7;
  }
  else if (param_4 != 0) goto LAB_102485b7;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1024852f:
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
      if (sVar5 == -1) goto LAB_1024852f;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)((uint)param_3 >> 0x10,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_102485b7;
  do {
    if (param_2 == (int *)0x0) {
LAB_102485ac:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_10248588:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_10248588;
        *(int *)param_2[0xb] = iVar2 + -1;
        psVar3 = *(short **)param_2[7];
        *(short **)param_2[7] = psVar3 + 1;
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_102485ac;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_102485b7:
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
LAB_1024865c:
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
      if (sVar5 == -1) goto LAB_1024865c;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102487b1;
  }
  else if (param_4 != 0) goto LAB_102487b1;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_102486d8:
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
      if (sVar5 == -1) goto LAB_102486d8;
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
LAB_102487b1:
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102487d9;
  }
  else if (param_4 != 0) goto LAB_102487d9;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  pcVar1 = *(code **)(*piVar6 + 0x10);
  (*(code *)PTR_guard_check_icall_1035d810)(0x48,(uint)param_3 >> 0x10);
  cVar4 = (*pcVar1)();
  if (cVar4 == '\0') goto LAB_102487d9;
  if (param_2 == (int *)0x0) {
LAB_10248890:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_10248869:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      sVar5 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_10248869;
      *(int *)param_2[0xb] = iVar2 + -1;
      psVar3 = *(short **)param_2[7];
      *(short **)param_2[7] = psVar3 + 1;
      sVar5 = *psVar3;
    }
    if (sVar5 == -1) goto LAB_10248890;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_102487b1;
LAB_102487d9:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_102488c4:
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
      if (sVar5 == -1) goto LAB_102488c4;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102489c8;
  }
  else if (param_4 != 0) goto LAB_102489c8;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10248940:
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
      if (sVar5 == -1) goto LAB_10248940;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  (*(code *)PTR_guard_check_icall_1035d810)((uint)param_3 >> 0x10,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_102489c8;
  do {
    if (param_2 == (int *)0x0) {
LAB_102489bd:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_10248999:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar5 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_10248999;
        *(int *)param_2[0xb] = iVar2 + -1;
        psVar3 = *(short **)param_2[7];
        *(short **)param_2[7] = psVar3 + 1;
        sVar5 = *psVar3;
      }
      if (sVar5 == -1) goto LAB_102489bd;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_102489c8:
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
LAB_10248a6d:
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
      if (sVar5 == -1) goto LAB_10248a6d;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10248abb;
LAB_10248a92:
    if ((char)param_3 == '\0') {
      if (param_2 == (int *)0x0) {
LAB_10248aea:
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
        if (sVar5 == -1) goto LAB_10248aea;
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
    if (param_4 == 0) goto LAB_10248a92;
LAB_10248abb:
    *param_7 = *param_7 | 2;
    puVar9 = param_7;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10248c36:
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
      if (sVar5 == -1) goto LAB_10248c36;
      param_3 = (int *)CONCAT22(sVar5,param_3._0_2_);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) goto LAB_10248c66;
  }
  else if (param_4 == 0) goto LAB_10248c66;
  *puVar9 = *puVar9 | 1;
LAB_10248c66:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

