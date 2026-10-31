/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102558e0 */

void FUN_102558e0(undefined4 *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                 int param_6,uint *param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
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
  piVar9 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*piVar9 + 4);
  local_20 = piVar9;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar1)();
  local_8 = 0;
  piVar5 = (int *)FUN_1001c23e(&local_24);
  local_8 = 0xffffffff;
  if (piVar9 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar9 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar6 = (undefined4 *)(*pcVar1)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar6;
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
LAB_102559d0:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_102559d0;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10255b30;
  }
  else if (param_4 != 0) goto LAB_10255b30;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255a43:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255a43;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if (((uint)(int)*(short *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) >> 2 & 1) == 0) {
    pcVar1 = *(code **)(*local_18 + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)
              (&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    (*pcVar1)();
    param_2 = local_24;
    param_3 = local_20;
    local_14 = 2;
  }
  else if (local_14 == 2) {
    piVar9 = (int *)(param_8 + 0x10);
    uVar7 = FUN_102572c0(&param_2,&param_4,1,0xc,piVar9,&local_20,piVar5);
    *param_7 = *param_7 | uVar7;
    *piVar9 = *piVar9 + -1;
  }
  else if (local_14 == 1) {
    uVar7 = FUN_102572c0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar5);
    *param_7 = *param_7 | uVar7;
  }
  else {
    puVar6 = (undefined4 *)
             FUN_1023f120(&local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = (int *)*puVar6;
    param_3 = (int *)puVar6[1];
  }
LAB_10255b30:
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10255b58;
  }
  else if (param_4 != 0) goto LAB_10255b58;
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if ((*(byte *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) & 0x48) == 0) goto LAB_10255b58;
  if (param_2 == (int *)0x0) {
LAB_10255bf8:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_10255bd9:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar7 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_10255bd9;
      *(int *)param_2[0xb] = iVar2 + -1;
      pbVar3 = *(byte **)param_2[7];
      *(byte **)param_2[7] = pbVar3 + 1;
      uVar7 = (uint)*pbVar3;
    }
    if (uVar7 == 0xffffffff) goto LAB_10255bf8;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_10255b30;
LAB_10255b58:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255c23:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255c23;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10255d20;
  }
  else if (param_4 != 0) goto LAB_10255d20;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255c96:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255c96;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  local_20 = (int *)CONCAT31(local_20._1_3_,param_3._1_1_);
  pcVar1 = *(code **)(*piVar5 + 0x28);
  (*(code *)PTR_guard_check_icall_1035d810)(local_20,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_10255d20;
  do {
    if (param_2 == (int *)0x0) {
LAB_10255d0f:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_10255cf3:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_10255cf3;
        *(int *)param_2[0xb] = iVar2 + -1;
        pbVar3 = *(byte **)param_2[7];
        *(byte **)param_2[7] = pbVar3 + 1;
        uVar7 = (uint)*pbVar3;
      }
      if (uVar7 == 0xffffffff) goto LAB_10255d0f;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_10255d20:
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
    }
    if ((char)param_5 == '\0') {
      FUN_100e1fa2();
    }
    if (param_2 == (int *)0x0) {
      if (param_4 == 0) break;
    }
    else if (param_4 != 0) break;
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
    }
  } while ((*(byte *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) & 0x48) != 0);
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255dad:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255dad;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10255ef0;
  }
  else if (param_4 != 0) goto LAB_10255ef0;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255e20:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255e20;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  iVar2 = local_14;
  if (((uint)(int)*(short *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) >> 2 & 1) == 0) {
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
    piVar9 = (int *)(param_8 + 0x10);
    uVar7 = FUN_102572c0(&param_2,&param_4,1,0xc,piVar9,&local_20,piVar5);
    *param_7 = *param_7 | uVar7;
    *piVar9 = *piVar9 + -1;
  }
  else {
    uVar7 = FUN_102572c0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar5);
    *param_7 = *param_7 | uVar7;
  }
LAB_10255ef0:
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_10255f18;
  }
  else if (param_4 != 0) goto LAB_10255f18;
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if ((*(byte *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) & 0x48) == 0) goto LAB_10255f18;
  if (param_2 == (int *)0x0) {
LAB_10255fb8:
    param_2 = (int *)0x0;
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  else {
    if (*(int *)param_2[7] == 0) {
LAB_10255f99:
      pcVar1 = *(code **)(*param_2 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar7 = (*pcVar1)();
    }
    else {
      iVar2 = *(int *)param_2[0xb];
      if (iVar2 < 1) goto LAB_10255f99;
      *(int *)param_2[0xb] = iVar2 + -1;
      pbVar3 = *(byte **)param_2[7];
      *(byte **)param_2[7] = pbVar3 + 1;
      uVar7 = (uint)*pbVar3;
    }
    if (uVar7 == 0xffffffff) goto LAB_10255fb8;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
  }
  goto LAB_10255ef0;
LAB_10255f18:
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10255fe3:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10255fe3;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102560e0;
  }
  else if (param_4 != 0) goto LAB_102560e0;
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_10256056:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_10256056;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  local_20 = (int *)CONCAT31(local_20._1_3_,param_3._1_1_);
  pcVar1 = *(code **)(*piVar5 + 0x28);
  (*(code *)PTR_guard_check_icall_1035d810)(local_20,0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_102560e0;
  do {
    if (param_2 == (int *)0x0) {
LAB_102560cf:
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
      param_2 = (int *)0x0;
    }
    else {
      if (*(int *)param_2[7] == 0) {
LAB_102560b3:
        pcVar1 = *(code **)(*param_2 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        iVar2 = *(int *)param_2[0xb];
        if (iVar2 < 1) goto LAB_102560b3;
        *(int *)param_2[0xb] = iVar2 + -1;
        pbVar3 = *(byte **)param_2[7];
        *(byte **)param_2[7] = pbVar3 + 1;
        uVar7 = (uint)*pbVar3;
      }
      if (uVar7 == 0xffffffff) goto LAB_102560cf;
      param_3 = (int *)((uint)param_3 & 0xffffff00);
    }
LAB_102560e0:
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
    }
    if ((char)param_5 == '\0') {
      FUN_100e1fa2();
    }
    if (param_2 == (int *)0x0) {
      if (param_4 == 0) break;
    }
    else if (param_4 != 0) break;
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
    }
  } while ((*(byte *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) & 0x48) != 0);
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1025616d:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_1025616d;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 == 0) goto LAB_102561bb;
LAB_10256192:
    if ((char)param_3 == '\0') {
      if (param_2 == (int *)0x0) {
LAB_102561e1:
        param_2 = (int *)0x0;
      }
      else {
        if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
          pcVar1 = *(code **)(*param_2 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar7 = (*pcVar1)();
        }
        else {
          uVar7 = (uint)**(byte **)param_2[7];
        }
        if (uVar7 == 0xffffffff) goto LAB_102561e1;
        param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
      }
      param_3 = (int *)CONCAT31(param_3._1_3_,1);
    }
    puVar8 = param_7;
    if (((uint)(int)*(short *)(piVar5[3] + ((uint)param_3 >> 8 & 0xff) * 2) >> 2 & 1) == 0) {
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
      piVar9 = (int *)(param_8 + 0x10);
      uVar7 = FUN_102572c0(&param_2,&param_4,1,0xc,piVar9,&local_20,piVar5);
      *param_7 = *param_7 | uVar7;
      *piVar9 = *piVar9 + -1;
      puVar8 = param_7;
    }
    else if (local_14 == 3) {
      uVar7 = FUN_102572c0(&param_2,&param_4,1,0x1f,param_8 + 0xc,&local_20,piVar5);
      *param_7 = *param_7 | uVar7;
      puVar8 = param_7;
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
    if (param_4 == 0) goto LAB_10256192;
LAB_102561bb:
    *param_7 = *param_7 | 2;
    puVar8 = param_7;
  }
  if ((char)param_3 == '\0') {
    if (param_2 == (int *)0x0) {
LAB_1025631a:
      param_2 = (int *)0x0;
    }
    else {
      if ((*(byte **)param_2[7] == (byte *)0x0) || (*(int *)param_2[0xb] < 1)) {
        pcVar1 = *(code **)(*param_2 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar7 = (*pcVar1)();
      }
      else {
        uVar7 = (uint)**(byte **)param_2[7];
      }
      if (uVar7 == 0xffffffff) goto LAB_1025631a;
      param_3 = (int *)((uint)CONCAT21(param_3._2_2_,(char)uVar7) << 8);
    }
    param_3 = (int *)CONCAT31(param_3._1_3_,1);
  }
  if ((char)param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == (int *)0x0) {
    if (param_4 != 0) goto LAB_1025634a;
  }
  else if (param_4 == 0) goto LAB_1025634a;
  *puVar8 = *puVar8 | 1;
LAB_1025634a:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

