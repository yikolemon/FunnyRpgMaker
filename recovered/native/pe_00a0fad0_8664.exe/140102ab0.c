/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140102ab0 */

void FUN_140102ab0(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
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
  
  local_40 = DAT_1401c9640 ^ (ulonglong)auStack_98;
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
LAB_140102b46:
  if ((char)param_1[1] == '\0') {
    FUN_1400d64e0(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400d64e0(param_2);
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_140102b72;
  }
  else if (*param_2 != 0) goto LAB_140102b72;
  if (iVar4 <= *param_6) goto LAB_140102b72;
  if ((char)param_1[1] == '\0') {
    FUN_1400d64e0(param_1);
    lVar7 = *param_1;
  }
  if ((*(byte *)(*(longlong *)(param_7 + 0x18) + (ulonglong)*(byte *)((longlong)param_1 + 9) * 2) &
      0x48) == 0) goto LAB_140102b72;
  if (lVar7 == 0) {
LAB_140102c26:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_140102c05:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7);
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_140102c05;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_140102c26;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_140102b46;
LAB_140102b72:
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_140102c55:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar7);
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102c55;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_140102c9f:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102c9f;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_140102e00;
  }
  else if (*param_2 != 0) goto LAB_140102e00;
  if (iVar4 <= *param_6) goto LAB_140102e00;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_140102d0d:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102d0d;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '+') {
    if (cVar3 == '-') {
      lVar7 = *param_1;
      pcVar8 = local_60 + 1;
      local_60[0] = cVar3;
      if (lVar7 == 0) goto LAB_140102df0;
      if (**(longlong **)(lVar7 + 0x38) == 0) goto LAB_140102dd8;
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_140102dd8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
      goto LAB_140102de5;
    }
    goto LAB_140102e00;
  }
  lVar7 = *param_1;
  pcVar8 = local_60 + 1;
  local_60[0] = cVar3;
  if (lVar7 != 0) {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_140102d6f:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_140102d6f;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_140102e00;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_140102e00:
  if ((char)param_1[1] == '\0') {
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_140102e3f:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102e3f;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_140102e89:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102e89;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_140102eac;
  }
  else if (*param_2 != 0) goto LAB_140102eac;
  if (iVar4 <= *param_6) goto LAB_140102eac;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_140102fbd:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_140102fbd;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '0') goto LAB_140102eac;
  *param_6 = *param_6 + 1;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_140102df0:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_140102dd8:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_140102dd8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
LAB_140102de5:
    if (uVar5 == 0xffffffff) goto LAB_140102df0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_140102e00;
LAB_140102eac:
  if (0 < *param_6) {
    *pcVar8 = '0';
    pcVar8 = pcVar8 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      FUN_1400d64e0(param_1);
    }
    if ((char)param_2[1] == '\0') {
      FUN_1400d64e0(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto LAB_140102eea;
    }
    else if (*param_2 != 0) {
LAB_140102eea:
      local_78 = 0;
      pcVar6 = local_60;
      if (*param_6 != 0) {
        pcVar6 = pcVar8;
      }
      *pcVar6 = '\0';
      iVar4 = FUN_140103370(local_60,&local_70,10,&local_78);
      if ((char)param_1[1] == '\0') {
        FUN_1400d64e0(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1400d64e0(param_2);
      }
      if ((((local_70 != local_60) && (local_78 == 0)) && (local_74 <= iVar4)) && (iVar4 <= param_4)
         ) {
        *local_68 = iVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400d3720(local_40 ^ (ulonglong)auStack_98);
    }
    if ((char)param_1[1] == '\0') {
      FUN_1400d64e0(param_1);
    }
    cVar3 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                      (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
    if ((9 < (byte)(cVar3 - 0x30U)) || (iVar1 = *param_6, iVar4 <= iVar1)) goto LAB_140102eea;
    *pcVar8 = cVar3;
    if (pcVar8 < local_60 + 0x1f) {
      pcVar8 = pcVar8 + 1;
    }
    *param_6 = iVar1 + 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_1401030d4:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1401030b9:
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        iVar1 = **(int **)(lVar7 + 0x50);
        if (iVar1 < 1) goto LAB_1401030b9;
        **(int **)(lVar7 + 0x50) = iVar1 + -1;
        pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
        **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
        uVar5 = (uint)*pbVar2;
      }
      if (uVar5 == 0xffffffff) goto LAB_1401030d4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

