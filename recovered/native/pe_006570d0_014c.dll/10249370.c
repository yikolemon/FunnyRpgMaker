/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10249370 */

void FUN_10249370(undefined4 *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
                 int param_6,uint *param_7,undefined4 param_8,char *param_9)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028969d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_18 = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar2)();
  local_8 = 0;
  piVar7 = (int *)FUN_10240a50(local_1c);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar8 = (undefined4 *)(*pcVar2)();
    if (puVar8 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar8;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
    }
  }
  cVar5 = *param_9;
  while (cVar5 != '\0') {
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    if ((char)param_5 == '\0') {
      FUN_1023b0c0();
    }
    if (param_2 != (int *)0x0) {
      if (param_4 == 0) goto LAB_10249449;
LAB_10249438:
      *param_7 = *param_7 | 2;
      break;
    }
    if (param_4 == 0) goto LAB_10249438;
LAB_10249449:
    if (*param_9 == '%') {
      param_9 = param_9 + 1;
      pcVar2 = *(code **)(*local_14 + 0x24);
      (*(code *)PTR_guard_check_icall_1035d810)
                (local_1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*param_9,0);
      puVar8 = (undefined4 *)(*pcVar2)();
      param_2 = (int *)*puVar8;
      param_3 = puVar8[1];
    }
    else {
      if (*param_9 == ' ') {
LAB_102494a0:
        if ((char)param_3 == '\0') {
          FUN_1023b0c0();
        }
        if ((char)param_5 == '\0') {
          FUN_1023b0c0();
        }
        if (param_2 == (int *)0x0) {
          if (param_4 == 0) goto LAB_10249638;
        }
        else if (param_4 != 0) goto LAB_10249638;
        if ((char)param_3 == '\0') {
          FUN_1023b0c0();
        }
        pcVar2 = *(code **)(*piVar7 + 0x10);
        (*(code *)PTR_guard_check_icall_1035d810)(0x48,param_3 >> 0x10);
        cVar5 = (*pcVar2)();
        if (cVar5 == '\0') goto LAB_10249638;
        if (param_2 == (int *)0x0) {
LAB_10249557:
          param_2 = (int *)0x0;
          param_3 = CONCAT31(param_3._1_3_,1);
        }
        else {
          if (*(int *)param_2[7] == 0) {
LAB_10249530:
            pcVar2 = *(code **)(*param_2 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar6 = (*pcVar2)();
          }
          else {
            iVar3 = *(int *)param_2[0xb];
            if (iVar3 < 1) goto LAB_10249530;
            *(int *)param_2[0xb] = iVar3 + -1;
            psVar4 = *(short **)param_2[7];
            *(short **)param_2[7] = psVar4 + 1;
            sVar6 = *psVar4;
          }
          if (sVar6 == -1) goto LAB_10249557;
          param_3 = param_3 & 0xffffff00;
        }
        goto LAB_102494a0;
      }
      if ((char)param_3 == '\0') {
        if (param_2 == (int *)0x0) {
LAB_102495ae:
          param_2 = (int *)0x0;
        }
        else {
          if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
            pcVar2 = *(code **)(*param_2 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            sVar6 = (*pcVar2)();
          }
          else {
            sVar6 = **(short **)param_2[7];
          }
          if (sVar6 == -1) goto LAB_102495ae;
          param_3 = CONCAT22(sVar6,(undefined2)param_3);
        }
        param_3 = CONCAT31(param_3._1_3_,1);
      }
      pcVar2 = *(code **)(*piVar7 + 0x38);
      (*(code *)PTR_guard_check_icall_1035d810)(param_3 >> 0x10,0);
      cVar5 = (*pcVar2)();
      if (cVar5 != *param_9) goto LAB_10249438;
      if (param_2 != (int *)0x0) {
        if (*(int *)param_2[7] == 0) {
LAB_10249606:
          pcVar2 = *(code **)(*param_2 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          sVar6 = (*pcVar2)();
        }
        else {
          iVar3 = *(int *)param_2[0xb];
          if (iVar3 < 1) goto LAB_10249606;
          *(int *)param_2[0xb] = iVar3 + -1;
          psVar4 = *(short **)param_2[7];
          *(short **)param_2[7] = psVar4 + 1;
          sVar6 = *psVar4;
        }
        if (sVar6 != -1) {
          param_3 = param_3 & 0xffffff00;
          goto LAB_10249638;
        }
      }
      param_2 = (int *)0x0;
      param_3 = CONCAT31(param_3._1_3_,1);
    }
LAB_10249638:
    param_9 = param_9 + 1;
    cVar5 = *param_9;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1024968f:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(short **)param_2[7] == (short *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar2 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        sVar6 = (*pcVar2)();
      }
      else {
        sVar6 = **(short **)param_2[7];
      }
      if (sVar6 == -1) goto LAB_1024968f;
      param_3 = CONCAT22(sVar6,(undefined2)param_3);
    }
    param_3 = CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) goto LAB_102496bf;
  }
  else if (param_4 == 0) goto LAB_102496bf;
  *param_7 = *param_7 | 1;
LAB_102496bf:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

