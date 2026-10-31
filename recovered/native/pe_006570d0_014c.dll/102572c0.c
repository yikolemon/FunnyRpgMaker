/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102572c0 */

void FUN_102572c0(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6,
                 int *param_7)

{
  code *pcVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  char *local_48;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  int local_38;
  char *local_34;
  int *local_30;
  int *local_2c;
  char local_28;
  char local_27 [30];
  char local_9;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_3c = param_7;
  local_2c = param_6;
  local_30 = param_2;
  if (param_4 < 10) {
    local_38 = 1;
  }
  else if (param_4 < 100) {
    local_38 = 2;
  }
  else {
    local_38 = (999 < param_4) + 3;
  }
  local_34 = &local_28;
  *param_6 = 0;
LAB_10257330:
  if ((char)param_1[1] == '\0') {
    FUN_100e1fa2();
  }
  if ((char)param_2[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    if (*param_2 == 0) goto LAB_10257354;
  }
  else if (*param_2 != 0) goto LAB_10257354;
  if (local_38 <= *local_2c) goto LAB_10257354;
  if ((char)param_1[1] == '\0') {
    FUN_100e1fa2();
    piVar8 = (int *)*param_1;
  }
  if ((*(byte *)(local_3c[3] + (uint)*(byte *)((int)param_1 + 5) * 2) & 0x48) == 0)
  goto LAB_10257354;
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
LAB_10257406:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *local_2c = *local_2c + 1;
  }
  else {
    if (*(int *)piVar8[7] == 0) {
LAB_102573de:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar5 = (*pcVar1)();
      param_2 = local_30;
    }
    else {
      iVar7 = *(int *)piVar8[0xb];
      if (iVar7 < 1) goto LAB_102573de;
      *(int *)piVar8[0xb] = iVar7 + -1;
      pbVar2 = *(byte **)piVar8[7];
      *(byte **)piVar8[7] = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_10257406;
    *(undefined1 *)(param_1 + 1) = 0;
    *local_2c = *local_2c + 1;
  }
  goto LAB_10257330;
LAB_10257354:
  if ((char)param_1[1] == '\0') {
    if (piVar8 == (int *)0x0) {
LAB_10257439:
      *param_1 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar1)();
        param_2 = local_30;
      }
      else {
        uVar5 = (uint)**(byte **)piVar8[7];
      }
      if (uVar5 == 0xffffffff) goto LAB_10257439;
      *(char *)((int)param_1 + 5) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
    if (*param_2 == 0) goto LAB_10257598;
  }
  else if (*param_2 != 0) goto LAB_10257598;
  if (local_38 <= *local_2c) goto LAB_10257598;
  if ((char)param_1[1] == '\0') {
    if (piVar8 == (int *)0x0) {
LAB_102574b3:
      *param_1 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar1)();
      }
      else {
        uVar5 = (uint)**(byte **)piVar8[7];
      }
      if (uVar5 == 0xffffffff) goto LAB_102574b3;
      *(char *)((int)param_1 + 5) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)((int)param_1 + 5));
  pcVar1 = *(code **)(*local_3c + 0x28);
  (*(code *)PTR_guard_check_icall_1035d810)(local_40,0);
  cVar4 = (*pcVar1)();
  if (cVar4 != '+') {
    if (cVar4 == '-') {
      local_34 = local_27;
      local_28 = cVar4;
      goto LAB_10257549;
    }
    goto LAB_10257598;
  }
  piVar8 = (int *)*param_1;
  local_34 = local_27;
  local_28 = cVar4;
  if (piVar8 != (int *)0x0) {
    if (*(int *)piVar8[7] == 0) {
LAB_10257512:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar5 = (*pcVar1)();
    }
    else {
      iVar7 = *(int *)piVar8[0xb];
      if (iVar7 < 1) goto LAB_10257512;
      *(int *)piVar8[0xb] = iVar7 + -1;
      pbVar2 = *(byte **)piVar8[7];
      *(byte **)piVar8[7] = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_10257598;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_10257598:
  if ((char)param_1[1] == '\0') {
    piVar8 = (int *)*param_1;
    if (piVar8 == (int *)0x0) {
LAB_102575d5:
      *param_1 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar1)();
      }
      else {
        uVar5 = (uint)**(byte **)piVar8[7];
      }
      if (uVar5 == 0xffffffff) goto LAB_102575d5;
      *(char *)((int)param_1 + 5) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  piVar8 = local_30;
  if ((char)local_30[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    if (*piVar8 == 0) goto LAB_10257684;
  }
  else if (*piVar8 != 0) goto LAB_10257684;
  if (local_38 <= *local_2c) goto LAB_10257684;
  if ((char)param_1[1] == '\0') {
    if (piVar3 == (int *)0x0) {
LAB_1025764a:
      *param_1 = 0;
    }
    else {
      if ((*(byte **)piVar3[7] == (byte *)0x0) || (*(int *)piVar3[0xb] < 1)) {
        pcVar1 = *(code **)(*piVar3 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar1)();
      }
      else {
        uVar5 = (uint)**(byte **)piVar3[7];
      }
      if (uVar5 == 0xffffffff) goto LAB_1025764a;
      *(char *)((int)param_1 + 5) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)((int)param_1 + 5));
  pcVar1 = *(code **)(*local_3c + 0x28);
  (*(code *)PTR_guard_check_icall_1035d810)(local_40,0);
  cVar4 = (*pcVar1)();
  piVar8 = local_30;
  if (cVar4 != '0') goto LAB_10257684;
  *local_2c = *local_2c + 1;
LAB_10257549:
  piVar8 = (int *)*param_1;
  if (piVar8 == (int *)0x0) {
LAB_1025758e:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (*(int *)piVar8[7] == 0) {
LAB_10257572:
      pcVar1 = *(code **)(*piVar8 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar5 = (*pcVar1)();
    }
    else {
      iVar7 = *(int *)piVar8[0xb];
      if (iVar7 < 1) goto LAB_10257572;
      *(int *)piVar8[0xb] = iVar7 + -1;
      pbVar2 = *(byte **)piVar8[7];
      *(byte **)piVar8[7] = pbVar2 + 1;
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_1025758e;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_10257598;
LAB_10257684:
  if (0 < *local_2c) {
    *local_34 = '0';
    local_34 = local_34 + 1;
  }
  do {
    piVar3 = local_2c;
    if ((char)param_1[1] == '\0') {
      FUN_100e1fa2();
    }
    if ((char)piVar8[1] == '\0') {
      FUN_100e1fa2();
    }
    if (*param_1 == 0) {
      if (*piVar8 == 0) {
LAB_10257780:
        local_44 = 0;
        pcVar6 = &local_28;
        if (*piVar3 != 0) {
          pcVar6 = local_34;
        }
        *pcVar6 = '\0';
        iVar7 = FUN_10257a10(&local_28,&local_48,10,&local_44);
        if ((char)param_1[1] == '\0') {
          FUN_100e1fa2();
        }
        if ((char)piVar8[1] == '\0') {
          FUN_100e1fa2();
        }
        if ((((local_48 != &local_28) && (local_44 == 0)) && (param_3 <= iVar7)) &&
           (iVar7 <= param_4)) {
          *param_5 = iVar7;
                    /* WARNING: Subroutine does not return */
          FUN_102283e0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
    }
    else if (*piVar8 != 0) goto LAB_10257780;
    if ((char)param_1[1] == '\0') {
      FUN_100e1fa2();
    }
    local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)((int)param_1 + 5));
    pcVar1 = *(code **)(*local_3c + 0x28);
    (*(code *)PTR_guard_check_icall_1035d810)(local_40,0);
    cVar4 = (*pcVar1)();
    piVar8 = local_30;
    if ((9 < (byte)(cVar4 - 0x30U)) || (iVar7 = *piVar3, local_38 <= iVar7)) goto LAB_10257780;
    *local_34 = cVar4;
    if (local_34 < &local_9) {
      local_34 = local_34 + 1;
    }
    *piVar3 = iVar7 + 1;
    piVar8 = (int *)*param_1;
    if (piVar8 == (int *)0x0) {
LAB_10257768:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      piVar8 = local_30;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_10257743:
        pcVar1 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar5 = (*pcVar1)();
      }
      else {
        iVar7 = *(int *)piVar8[0xb];
        if (iVar7 < 1) goto LAB_10257743;
        *(int *)piVar8[0xb] = iVar7 + -1;
        pbVar2 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar2 + 1;
        uVar5 = (uint)*pbVar2;
      }
      if (uVar5 == 0xffffffff) goto LAB_10257768;
      *(undefined1 *)(param_1 + 1) = 0;
      piVar8 = local_30;
    }
  } while( true );
}

