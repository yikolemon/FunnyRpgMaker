/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180251650 */

void FUN_180251650(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,longlong param_7)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_res18 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar10 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  uStack_60 = lVar10;
  (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
  uVar9 = FUN_180093388(&local_68);
  if ((lVar10 != 0) &&
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10), lVar10 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10,1);
  }
  iVar7 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1);
  if (iVar7 == 0) {
    iVar7 = 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_18025173e:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025173e;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_18025178b:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025178b;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  puVar4 = param_6;
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_180251940;
  }
  else if (*param_4 != 0) goto LAB_180251940;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1802517f8:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1802517f8;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') {
    local_68 = (undefined4)*param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_60 = param_4[1];
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)
              (param_1,&local_48,&local_58,&local_68,param_5,puVar4,param_7);
    iVar7 = 2;
    uVar14 = local_48;
    uVar15 = uStack_44;
    uVar16 = uStack_40;
    uVar17 = uStack_3c;
  }
  else {
    if (iVar7 == 2) {
      piVar13 = (int *)(param_7 + 0x10);
      uVar8 = FUN_18025d270(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
      goto LAB_180251940;
    }
    if (iVar7 == 1) {
      uVar8 = FUN_18025d270(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      goto LAB_180251940;
    }
    local_48 = (undefined4)*param_4;
    uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_40 = (undefined4)param_4[1];
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_18038bc80)
              (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
    uVar14 = local_68;
    uVar15 = uStack_64;
    uVar16 = (undefined4)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  *(undefined4 *)param_3 = uVar14;
  *(undefined4 *)((longlong)param_3 + 4) = uVar15;
  *(undefined4 *)(param_3 + 1) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
LAB_180251940:
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  lVar12 = *param_3;
  lVar10 = *param_4;
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_180251970;
  }
  else if (lVar10 != 0) goto LAB_180251970;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_180251970;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_180251a32:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_180251a15:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_180251a15;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_180251a32;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180251940;
LAB_180251970:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_180251a61:
      *param_3 = 0;
      lVar12 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251a61;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_180251ab6:
      *param_4 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251ab6;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_180251ad0;
  }
  else if (lVar10 != 0) goto LAB_180251ad0;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_180251b88:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251b88;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                     (uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_180251ad0;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_180251bfa:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_180251bfa;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_180251ad0;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_180251ad0:
  lVar10 = 0;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  lVar12 = *param_3;
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_180251b08;
  }
  else if (*param_4 != 0) goto LAB_180251b08;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_180251b08;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_180251cb8:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_180251c9b:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_180251c9b;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_180251cb8;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180251ad0;
LAB_180251b08:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_180251ce3:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251ce3;
      *(short *)((longlong)param_3 + 10) = sVar6;
      lVar10 = lVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    lVar12 = lVar10;
  }
  puVar4 = param_6;
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_180251d38:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251d38;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_180251ea0;
  }
  else if (*param_4 != 0) goto LAB_180251ea0;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_180251da1:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251da1;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') {
    if (iVar7 == 2) {
      *puVar4 = *puVar4 | 2;
    }
    else {
      local_48 = (undefined4)*param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_58 = (undefined4)*param_3;
      uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_50 = (undefined4)param_3[1];
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
      (*(code *)PTR__guard_dispatch_icall_18038bc80)
                (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
      *(undefined4 *)param_3 = local_68;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      if (iVar7 == 4) {
        iVar7 = 3;
      }
    }
  }
  else if ((iVar7 - 1U & 0xfffffffd) == 0) {
    piVar13 = (int *)(param_7 + 0x10);
    uVar8 = FUN_18025d270(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
    *piVar13 = *piVar13 + -1;
  }
  else {
    uVar8 = FUN_18025d270(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
  }
LAB_180251ea0:
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_180251ed0;
  }
  else if (*param_4 != 0) goto LAB_180251ed0;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_180251ed0;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_180251f92:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_180251f75:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_180251f75;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_180251f92;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180251ea0;
LAB_180251ed0:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_180251fc1:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180251fc1;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  puVar4 = param_6;
  if ((char)param_4[1] == '\0') {
    lVar12 = *param_4;
    if (lVar12 == 0) {
LAB_180252019:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180252019;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_180252120;
  }
  else if (*param_4 != 0) goto LAB_180252120;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_180252086:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180252086;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                     (uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_180252120;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1802520f0:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1802520f0;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_180252120;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_180252120:
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_18024d310(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_180252150;
  }
  else if (*param_4 != 0) goto LAB_180252150;
  if ((char)param_3[1] == '\0') {
    FUN_18024d310(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_180252150;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_180252211:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1802521f5:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1802521f5;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_180252211;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_180252120;
LAB_180252150:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_18025223f:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_18025223f;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar12 = param_7;
  if ((char)param_4[1] == '\0') {
    lVar3 = *param_4;
    if (lVar3 == 0) {
LAB_180252297:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180252297;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1802522da;
LAB_1802522b0:
    if ((char)param_3[1] == '\0') {
      if (lVar10 == 0) {
LAB_180252303:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10);
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar6 == -1) goto LAB_180252303;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar5 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                      (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
    if (cVar5 == '\0') {
      if (iVar7 == 4) {
LAB_1802523c8:
        local_48 = (undefined4)*param_4;
        uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_40 = (undefined4)param_4[1];
        uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_58 = (undefined4)*param_3;
        uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_50 = (undefined4)param_3[1];
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        (*(code *)PTR__guard_dispatch_icall_18038bc80)
                  (local_48,&local_68,&local_58,&local_48,param_5,puVar4,lVar12);
        *(undefined4 *)param_3 = local_68;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      }
      else {
        *puVar4 = *puVar4 | 2;
      }
    }
    else if (iVar7 == 4) {
      piVar13 = (int *)(lVar12 + 0x10);
      uVar8 = FUN_18025d270(param_3,param_4,1,0xc,piVar13,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
    }
    else {
      if (iVar7 != 3) goto LAB_1802523c8;
      uVar8 = FUN_18025d270(param_3,param_4,1,0x1f,lVar12 + 0xc,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
    }
  }
  else {
    if (*param_4 == 0) goto LAB_1802522b0;
LAB_1802522da:
    *puVar4 = *puVar4 | 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_180252448:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_180252448;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 != 0) {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 != -1) goto LAB_18025249a;
    }
    *param_4 = 0;
  }
LAB_18025249a:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1802524b3;
  }
  else if (*param_4 == 0) goto LAB_1802524b3;
  *puVar4 = *puVar4 | 1;
LAB_1802524b3:
  lVar10 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar10;
  return;
}

