/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025d270 */

void FUN_18025d270(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                  int *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  char *local_78;
  int *local_70;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  local_70 = param_5;
  if (param_4 < 10) {
    iVar7 = 1;
  }
  else if (param_4 < 100) {
    iVar7 = 2;
  }
  else {
    iVar7 = (999 < param_4) + 3;
  }
  pcVar9 = local_68;
  *param_6 = 0;
  local_88 = param_4;
  local_80 = param_3;
LAB_18025d310:
  if ((char)param_1[1] == '\0') {
    FUN_18024d310(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_18024d310(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_18025d33a;
  }
  else if (*param_2 != 0) goto LAB_18025d33a;
  if (iVar7 <= *param_6) goto LAB_18025d33a;
  if ((char)param_1[1] == '\0') {
    FUN_18024d310(param_1);
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (param_7,0x48,*(undefined2 *)((longlong)param_1 + 10));
  if (cVar5 == '\0') goto LAB_18025d33a;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_18025d3fc:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_18025d3dd:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_18025d3dd;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 == -1) goto LAB_18025d3fc;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_18025d310;
LAB_18025d33a:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_18025d42c:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d42c;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_18025d47a:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d47a;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_18025d5e0;
  }
  else if (*param_2 != 0) goto LAB_18025d5e0;
  if (iVar7 <= *param_6) goto LAB_18025d5e0;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_18025d4ec:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d4ec;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '+') {
    if (cVar5 == '-') {
      lVar3 = *param_1;
      pcVar9 = local_68 + 1;
      local_68[0] = cVar5;
      if (lVar3 == 0) goto LAB_18025d5d5;
      if (**(longlong **)(lVar3 + 0x38) != 0) {
        iVar1 = **(int **)(lVar3 + 0x50);
        if (0 < iVar1) {
          **(int **)(lVar3 + 0x50) = iVar1 + -1;
          psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
          **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
          sVar6 = *psVar4;
          goto LAB_18025d5ca;
        }
      }
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      goto LAB_18025d5ca;
    }
    goto LAB_18025d5e0;
  }
  lVar3 = *param_1;
  pcVar9 = local_68 + 1;
  local_68[0] = cVar5;
  if (lVar3 != 0) {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_18025d54e:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_18025d54e;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_18025d5e0;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_18025d5e0:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_18025d621:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d621;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_18025d66d:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d66d;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_18025d690;
  }
  else if (*param_2 != 0) goto LAB_18025d690;
  if (iVar7 <= *param_6) goto LAB_18025d690;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_18025d7ae:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025d7ae;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '0') goto LAB_18025d690;
  *param_6 = *param_6 + 1;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_18025d5d5:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_18025d81c:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_18025d81c;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
LAB_18025d5ca:
    if (sVar6 == -1) goto LAB_18025d5d5;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_18025d5e0;
LAB_18025d690:
  iVar1 = local_88;
  if (0 < *param_6) {
    *pcVar9 = '0';
    pcVar9 = pcVar9 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      FUN_18024d310(param_1);
    }
    if ((char)param_2[1] == '\0') {
      FUN_18024d310(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto LAB_18025d6d3;
    }
    else if (*param_2 != 0) {
LAB_18025d6d3:
      local_84 = 0;
      pcVar8 = local_68;
      if (*param_6 != 0) {
        pcVar8 = pcVar9;
      }
      *pcVar8 = '\0';
      iVar7 = FUN_18026c940(local_68,&local_78,10,&local_84);
      if ((char)param_1[1] == '\0') {
        FUN_18024d310(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_18024d310(param_2);
      }
      if ((((local_78 != local_68) && (local_84 == 0)) && (local_80 <= iVar7)) && (iVar7 <= iVar1))
      {
        *local_70 = iVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
    }
    if ((char)param_1[1] == '\0') {
      FUN_18024d310(param_1);
    }
    cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                      (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
    if ((9 < (byte)(cVar5 - 0x30U)) || (iVar2 = *param_6, iVar7 <= iVar2)) goto LAB_18025d6d3;
    *pcVar9 = cVar5;
    if (pcVar9 < local_68 + 0x1f) {
      pcVar9 = pcVar9 + 1;
    }
    *param_6 = iVar2 + 1;
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_18025d8e4:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_18025d8c4:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar2 = **(int **)(lVar3 + 0x50);
        if (iVar2 < 1) goto LAB_18025d8c4;
        **(int **)(lVar3 + 0x50) = iVar2 + -1;
        psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
        **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
        sVar6 = *psVar4;
      }
      if (sVar6 == -1) goto LAB_18025d8e4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

