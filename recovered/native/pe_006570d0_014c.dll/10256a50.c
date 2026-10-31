/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10256a50 */

void FUN_10256a50(undefined4 *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
                 int param_6,uint *param_7,undefined4 param_8,char *param_9)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  int *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a0fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_1c = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar2)();
  local_8 = 0;
  local_14 = (int *)FUN_1001c23e(local_20);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar6 = (undefined4 *)(*pcVar2)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar6;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
    }
  }
  cVar5 = *param_9;
  while (cVar5 != '\0') {
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
    }
    if ((char)param_5 == '\0') {
      FUN_100e1fa2();
    }
    piVar1 = local_14;
    if (param_2 == (int *)0x0) {
      if (param_4 != 0) goto LAB_10256b29;
LAB_10256b18:
      *param_7 = *param_7 | 2;
      break;
    }
    if (param_4 != 0) goto LAB_10256b18;
LAB_10256b29:
    if (*param_9 == '%') {
      param_9 = param_9 + 1;
      pcVar2 = *(code **)(*local_18 + 0x24);
      (*(code *)PTR_guard_check_icall_1035d810)
                (local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*param_9,0);
      puVar6 = (undefined4 *)(*pcVar2)();
      param_2 = (int *)*puVar6;
      param_3 = puVar6[1];
    }
    else {
      if (*param_9 == ' ') {
LAB_10256b80:
        if ((char)param_3 == '\0') {
          FUN_100e1fa2();
        }
        if ((char)param_5 == '\0') {
          FUN_100e1fa2();
        }
        if (param_2 == (int *)0x0) {
          if (param_4 == 0) goto LAB_10256ceb;
        }
        else if (param_4 != 0) goto LAB_10256ceb;
        if ((char)param_3 == '\0') {
          FUN_100e1fa2();
        }
        if ((*(byte *)(piVar1[3] + (param_3 >> 8 & 0xff) * 2) & 0x48) == 0) goto LAB_10256ceb;
        if (param_2 == (int *)0x0) {
LAB_10256c1a:
          param_2 = (int *)0x0;
          param_3 = CONCAT31(param_3._1_3_,1);
        }
        else {
          if (*(int *)param_2[7] == 0) {
LAB_10256bfb:
            pcVar2 = *(code **)(*param_2 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar7 = (*pcVar2)();
          }
          else {
            iVar3 = *(int *)param_2[0xb];
            if (iVar3 < 1) goto LAB_10256bfb;
            *(int *)param_2[0xb] = iVar3 + -1;
            pbVar4 = *(byte **)param_2[7];
            *(byte **)param_2[7] = pbVar4 + 1;
            uVar7 = (uint)*pbVar4;
          }
          if (uVar7 == 0xffffffff) goto LAB_10256c1a;
          param_3 = param_3 & 0xffffff00;
        }
        goto LAB_10256b80;
      }
      if ((char)param_3 == '\0') {
        if (param_2 == (int *)0x0) {
LAB_10256c68:
          param_2 = (int *)0x0;
        }
        else {
          if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
            pcVar2 = *(code **)(*param_2 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar7 = (*pcVar2)();
          }
          else {
            uVar7 = (uint)**(byte **)param_2[7];
          }
          if (uVar7 == 0xffffffff) goto LAB_10256c68;
          param_3._2_2_ = (undefined2)(param_3 >> 0x10);
          param_3 = (uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8;
        }
        param_3 = CONCAT31(param_3._1_3_,1);
      }
      local_1c = (int *)CONCAT31(local_1c._1_3_,param_3._1_1_);
      pcVar2 = *(code **)(*local_14 + 0x28);
      (*(code *)PTR_guard_check_icall_1035d810)(local_1c,0);
      cVar5 = (*pcVar2)();
      if (cVar5 != *param_9) goto LAB_10256b18;
      if (param_2 != (int *)0x0) {
        if (*(int *)param_2[7] == 0) {
LAB_10256cc4:
          pcVar2 = *(code **)(*param_2 + 0x1c);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar7 = (*pcVar2)();
        }
        else {
          iVar3 = *(int *)param_2[0xb];
          if (iVar3 < 1) goto LAB_10256cc4;
          *(int *)param_2[0xb] = iVar3 + -1;
          pbVar4 = *(byte **)param_2[7];
          *(byte **)param_2[7] = pbVar4 + 1;
          uVar7 = (uint)*pbVar4;
        }
        if (uVar7 != 0xffffffff) {
          param_3 = param_3 & 0xffffff00;
          goto LAB_10256ceb;
        }
      }
      param_2 = (int *)0x0;
      param_3 = CONCAT31(param_3._1_3_,1);
    }
LAB_10256ceb:
    param_9 = param_9 + 1;
    cVar5 = *param_9;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10256d39:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar2 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar2)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10256d39;
      param_3 = (uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8;
    }
    param_3 = CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) goto LAB_10256d69;
  }
  else if (param_4 == 0) goto LAB_10256d69;
  *param_7 = *param_7 | 1;
LAB_10256d69:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

