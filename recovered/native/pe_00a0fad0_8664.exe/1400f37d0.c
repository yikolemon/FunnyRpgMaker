/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f37d0 */

void FUN_1400f37d0(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
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
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_a8;
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
LAB_1400f3870:
  if ((char)param_1[1] == '\0') {
    FUN_1400e3870(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400e3870(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_1400f389a;
  }
  else if (*param_2 != 0) goto LAB_1400f389a;
  if (iVar7 <= *param_6) goto LAB_1400f389a;
  if ((char)param_1[1] == '\0') {
    FUN_1400e3870(param_1);
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (param_7,0x48,*(undefined2 *)((longlong)param_1 + 10));
  if (cVar5 == '\0') goto LAB_1400f389a;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_1400f395c:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_1400f393d:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_1400f393d;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 == -1) goto LAB_1400f395c;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_1400f3870;
LAB_1400f389a:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_1400f398c:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f398c;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_1400f39da:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f39da;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_1400f3b40;
  }
  else if (*param_2 != 0) goto LAB_1400f3b40;
  if (iVar7 <= *param_6) goto LAB_1400f3b40;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_1400f3a4c:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f3a4c;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '+') {
    if (cVar5 == '-') {
      lVar3 = *param_1;
      pcVar9 = local_68 + 1;
      local_68[0] = cVar5;
      if (lVar3 == 0) goto LAB_1400f3b35;
      if (**(longlong **)(lVar3 + 0x38) != 0) {
        iVar1 = **(int **)(lVar3 + 0x50);
        if (0 < iVar1) {
          **(int **)(lVar3 + 0x50) = iVar1 + -1;
          psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
          **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
          sVar6 = *psVar4;
          goto LAB_1400f3b2a;
        }
      }
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      goto LAB_1400f3b2a;
    }
    goto LAB_1400f3b40;
  }
  lVar3 = *param_1;
  pcVar9 = local_68 + 1;
  local_68[0] = cVar5;
  if (lVar3 != 0) {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_1400f3aae:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_1400f3aae;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1400f3b40;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1400f3b40:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_1400f3b81:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f3b81;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_1400f3bcd:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f3bcd;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_1400f3bf0;
  }
  else if (*param_2 != 0) goto LAB_1400f3bf0;
  if (iVar7 <= *param_6) goto LAB_1400f3bf0;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_1400f3d0e:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1400f3d0e;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '0') goto LAB_1400f3bf0;
  *param_6 = *param_6 + 1;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_1400f3b35:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_1400f3d7c:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_1400f3d7c;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
LAB_1400f3b2a:
    if (sVar6 == -1) goto LAB_1400f3b35;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_1400f3b40;
LAB_1400f3bf0:
  iVar1 = local_88;
  if (0 < *param_6) {
    *pcVar9 = '0';
    pcVar9 = pcVar9 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      FUN_1400e3870(param_1);
    }
    if ((char)param_2[1] == '\0') {
      FUN_1400e3870(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto LAB_1400f3c33;
    }
    else if (*param_2 != 0) {
LAB_1400f3c33:
      local_84 = 0;
      pcVar8 = local_68;
      if (*param_6 != 0) {
        pcVar8 = pcVar9;
      }
      *pcVar8 = '\0';
      iVar7 = FUN_140103370(local_68,&local_78,10,&local_84);
      if ((char)param_1[1] == '\0') {
        FUN_1400e3870(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1400e3870(param_2);
      }
      if ((((local_78 != local_68) && (local_84 == 0)) && (local_80 <= iVar7)) && (iVar7 <= iVar1))
      {
        *local_70 = iVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_48 ^ (ulonglong)auStack_a8);
    }
    if ((char)param_1[1] == '\0') {
      FUN_1400e3870(param_1);
    }
    cVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                      (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
    if ((9 < (byte)(cVar5 - 0x30U)) || (iVar2 = *param_6, iVar7 <= iVar2)) goto LAB_1400f3c33;
    *pcVar9 = cVar5;
    if (pcVar9 < local_68 + 0x1f) {
      pcVar9 = pcVar9 + 1;
    }
    *param_6 = iVar2 + 1;
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_1400f3e44:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_1400f3e24:
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar2 = **(int **)(lVar3 + 0x50);
        if (iVar2 < 1) goto LAB_1400f3e24;
        **(int **)(lVar3 + 0x50) = iVar2 + -1;
        psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
        **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
        sVar6 = *psVar4;
      }
      if (sVar6 == -1) goto LAB_1400f3e44;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

