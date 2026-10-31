/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026c080 */

void FUN_18026c080(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                  int *param_6,longlong param_7)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  char *local_70;
  int *local_68;
  char local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_98;
  local_68 = param_5;
  if (param_4 < 10) {
    iVar4 = 1;
  }
  else if (param_4 < 100) {
    iVar4 = 2;
  }
  else {
    iVar4 = (999 < param_4) + 3;
  }
  pcVar8 = local_60;
  *param_6 = 0;
  local_74 = param_3;
LAB_18026c116:
  if ((char)param_1[1] == '\0') {
    FUN_1800e5e14(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1800e5e14(param_2);
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_18026c142;
  }
  else if (*param_2 != 0) goto LAB_18026c142;
  if (iVar4 <= *param_6) goto LAB_18026c142;
  if ((char)param_1[1] == '\0') {
    FUN_1800e5e14(param_1);
    lVar7 = *param_1;
  }
  if ((*(byte *)(*(longlong *)(param_7 + 0x18) + (ulonglong)*(byte *)((longlong)param_1 + 9) * 2) &
      0x48) == 0) goto LAB_18026c142;
  if (lVar7 == 0) {
LAB_18026c1f6:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_18026c1d5:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar7);
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_18026c1d5;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_18026c1f6;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_18026c116;
LAB_18026c142:
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_18026c225:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar7);
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c225;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_18026c26f:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c26f;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_18026c3d0;
  }
  else if (*param_2 != 0) goto LAB_18026c3d0;
  if (iVar4 <= *param_6) goto LAB_18026c3d0;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_18026c2dd:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c2dd;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '+') {
    if (cVar3 == '-') {
      lVar7 = *param_1;
      pcVar8 = local_60 + 1;
      local_60[0] = cVar3;
      if (lVar7 == 0) goto LAB_18026c3c0;
      if (**(longlong **)(lVar7 + 0x38) == 0) goto LAB_18026c3a8;
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_18026c3a8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
      goto LAB_18026c3b5;
    }
    goto LAB_18026c3d0;
  }
  lVar7 = *param_1;
  pcVar8 = local_60 + 1;
  local_60[0] = cVar3;
  if (lVar7 != 0) {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_18026c33f:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_18026c33f;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_18026c3d0;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_18026c3d0:
  if ((char)param_1[1] == '\0') {
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_18026c40f:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c40f;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_18026c459:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c459;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_18026c47c;
  }
  else if (*param_2 != 0) goto LAB_18026c47c;
  if (iVar4 <= *param_6) goto LAB_18026c47c;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_18026c58d:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c58d;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '0') goto LAB_18026c47c;
  *param_6 = *param_6 + 1;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_18026c3c0:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_18026c3a8:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_18026c3a8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
LAB_18026c3b5:
    if (uVar5 == 0xffffffff) goto LAB_18026c3c0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_18026c3d0;
LAB_18026c47c:
  if (0 < *param_6) {
    *pcVar8 = '0';
    pcVar8 = pcVar8 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      FUN_1800e5e14(param_1);
    }
    if ((char)param_2[1] == '\0') {
      FUN_1800e5e14(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto LAB_18026c4ba;
    }
    else if (*param_2 != 0) {
LAB_18026c4ba:
      local_78 = 0;
      pcVar6 = local_60;
      if (*param_6 != 0) {
        pcVar6 = pcVar8;
      }
      *pcVar6 = '\0';
      iVar4 = FUN_18026c940(local_60,&local_70,10,&local_78);
      if ((char)param_1[1] == '\0') {
        FUN_1800e5e14(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1800e5e14(param_2);
      }
      if ((((local_70 != local_60) && (local_78 == 0)) && (local_74 <= iVar4)) && (iVar4 <= param_4)
         ) {
        *local_68 = iVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_40 ^ (ulonglong)auStack_98);
    }
    if ((char)param_1[1] == '\0') {
      FUN_1800e5e14(param_1);
    }
    cVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                      (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
    if ((9 < (byte)(cVar3 - 0x30U)) || (iVar1 = *param_6, iVar4 <= iVar1)) goto LAB_18026c4ba;
    *pcVar8 = cVar3;
    if (pcVar8 < local_60 + 0x1f) {
      pcVar8 = pcVar8 + 1;
    }
    *param_6 = iVar1 + 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_18026c6a4:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_18026c689:
        uVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        iVar1 = **(int **)(lVar7 + 0x50);
        if (iVar1 < 1) goto LAB_18026c689;
        **(int **)(lVar7 + 0x50) = iVar1 + -1;
        pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
        **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
        uVar5 = (uint)*pbVar2;
      }
      if (uVar5 == 0xffffffff) goto LAB_18026c6a4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

