/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140100b10 */

void FUN_140100b10(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  
  lVar8 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  uStack_60 = lVar8;
  (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar8);
  lVar7 = FUN_14000b3ff(&local_68);
  if ((lVar8 != 0) && (lVar8 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar8), lVar8 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar8,1);
  }
  iVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(param_1);
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar8 = *param_3;
    if (lVar8 == 0) {
LAB_140100bf8:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100bf8;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar8 = *param_4;
    if (lVar8 == 0) {
LAB_140100c3e:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100c3e;
      *(char *)((longlong)param_4 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  puVar4 = param_6;
  lVar8 = *param_3;
  if (lVar8 == 0) {
    if (*param_4 == 0) goto LAB_140100dd0;
  }
  else if (*param_4 != 0) goto LAB_140100dd0;
  if ((char)param_3[1] == '\0') {
    if (lVar8 == 0) {
LAB_140100ca4:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100ca4;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) & 4)
      == 0) {
    local_68 = (undefined4)*param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_60 = param_4[1];
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_140178c20)
              (param_1,&local_48,&local_58,&local_68,param_5,puVar4,param_7);
    iVar5 = 2;
    uVar12 = local_48;
    uVar13 = uStack_44;
    uVar14 = uStack_40;
    uVar15 = uStack_3c;
  }
  else {
    if (iVar5 == 2) {
      piVar10 = (int *)(param_7 + 0x10);
      uVar6 = FUN_140102ab0(param_3,param_4,1,0xc,piVar10,local_res18,lVar7);
      *puVar4 = *puVar4 | uVar6;
      *piVar10 = *piVar10 + -1;
      goto LAB_140100dd0;
    }
    if (iVar5 == 1) {
      uVar6 = FUN_140102ab0(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,lVar7);
      *puVar4 = *puVar4 | uVar6;
      goto LAB_140100dd0;
    }
    local_48 = (undefined4)*param_4;
    uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_40 = (undefined4)param_4[1];
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_140178c20)
              (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
    uVar12 = local_68;
    uVar13 = uStack_64;
    uVar14 = (undefined4)uStack_60;
    uVar15 = uStack_60._4_4_;
  }
  *(undefined4 *)param_3 = uVar12;
  *(undefined4 *)((longlong)param_3 + 4) = uVar13;
  *(undefined4 *)(param_3 + 1) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
LAB_140100dd0:
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400d64e0(param_4);
  }
  lVar11 = *param_3;
  lVar8 = *param_4;
  if (lVar11 == 0) {
    if (lVar8 == 0) goto LAB_140100dff;
  }
  else if (lVar8 != 0) goto LAB_140100dff;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
    lVar11 = *param_3;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) &
      0x48) == 0) goto LAB_140100dff;
  lVar8 = *param_3;
  if (lVar8 == 0) {
LAB_140100eb0:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_140100e94:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar8 + 0x50);
      if (iVar1 < 1) goto LAB_140100e94;
      **(int **)(lVar8 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar8 + 0x38);
      **(longlong **)(lVar8 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_140100eb0;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140100dd0;
LAB_140100dff:
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140100edb:
      *param_3 = 0;
      lVar11 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100edb;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar8 = *param_4;
    if (lVar8 == 0) {
LAB_140100f2a:
      *param_4 = 0;
      lVar8 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar8);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100f2a;
      *(char *)((longlong)param_4 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar11 == 0) {
    if (lVar8 == 0) goto LAB_140100f45;
  }
  else if (lVar8 != 0) goto LAB_140100f45;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140100ff8:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140100ff8;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (lVar7,*(undefined1 *)((longlong)param_3 + 9),0);
  if ((0x3a < (byte)uVar9) || ((0x400900000000000U >> (uVar9 & 0x3f) & 1) == 0)) goto LAB_140100f45;
  lVar8 = *param_3;
  if (lVar8 != 0) {
    if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_14010106a:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar8 + 0x50);
      if (iVar1 < 1) goto LAB_14010106a;
      **(int **)(lVar8 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar8 + 0x38);
      **(longlong **)(lVar8 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_140100f45;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_140100f45:
  lVar8 = 0;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400d64e0(param_4);
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140100f7c;
  }
  else if (*param_4 != 0) goto LAB_140100f7c;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
    lVar11 = *param_3;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) &
      0x48) == 0) goto LAB_140100f7c;
  lVar8 = *param_3;
  if (lVar8 == 0) {
LAB_140101115:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar8 + 0x38) == 0) {
LAB_1401010f9:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar8 + 0x50);
      if (iVar1 < 1) goto LAB_1401010f9;
      **(int **)(lVar8 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar8 + 0x38);
      **(longlong **)(lVar8 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_140101115;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140100f45;
LAB_140100f7c:
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14010113c:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_14010113c;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
      lVar8 = lVar11;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    lVar11 = lVar8;
  }
  if ((char)param_4[1] == '\0') {
    lVar8 = *param_4;
    if (lVar8 == 0) {
LAB_140101185:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140101185;
      *(char *)((longlong)param_4 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  lVar8 = param_7;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1401011a0;
  }
  else if (*param_4 != 0) goto LAB_1401011a0;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_140101253:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140101253;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar8 = param_7;
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) & 4)
      == 0) {
    if (iVar5 == 2) {
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
      (*(code *)PTR__guard_dispatch_icall_140178c20)
                (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
      *(undefined4 *)param_3 = local_68;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      if (iVar5 == 4) {
        iVar5 = 3;
      }
    }
  }
  else if ((iVar5 - 1U & 0xfffffffd) == 0) {
    piVar10 = (int *)(param_7 + 0x10);
    uVar6 = FUN_140102ab0(param_3,param_4,1,0xc,piVar10,local_res18,lVar7);
    *puVar4 = *puVar4 | uVar6;
    *piVar10 = *piVar10 + -1;
  }
  else {
    uVar6 = FUN_140102ab0(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,lVar7);
    *puVar4 = *puVar4 | uVar6;
  }
LAB_1401011a0:
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400d64e0(param_4);
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1401011d7;
  }
  else if (*param_4 != 0) goto LAB_1401011d7;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
    lVar11 = *param_3;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) &
      0x48) == 0) goto LAB_1401011d7;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_1401013c1:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1401013a5:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1401013a5;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_1401013c1;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1401011a0;
LAB_1401011d7:
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_1401013ec:
      *param_3 = 0;
      lVar11 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_1401013ec;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar2 = *param_4;
    if (lVar2 == 0) {
LAB_140101438:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar2 + 0x38) == (byte *)0x0) || (**(int **)(lVar2 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar2 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140101438;
      *(char *)((longlong)param_4 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_140101530;
  }
  else if (*param_4 != 0) goto LAB_140101530;
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14010149e:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_14010149e;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar9 = (*(code *)PTR__guard_dispatch_icall_140178c20)
                    (lVar7,*(undefined1 *)((longlong)param_3 + 9),0);
  if ((0x3a < (byte)uVar9) || ((0x400900000000000U >> (uVar9 & 0x3f) & 1) == 0)) goto LAB_140101530;
  lVar11 = *param_3;
  if (lVar11 != 0) {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_140101508:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_140101508;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 != 0xffffffff) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_140101530;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_140101530:
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400d64e0(param_4);
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_14010155f;
  }
  else if (*param_4 != 0) goto LAB_14010155f;
  if ((char)param_3[1] == '\0') {
    FUN_1400d64e0(param_3);
    lVar11 = *param_3;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) &
      0x48) == 0) goto LAB_14010155f;
  lVar11 = *param_3;
  if (lVar11 == 0) {
LAB_140101610:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar11 + 0x38) == 0) {
LAB_1401015f4:
      uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
    }
    else {
      iVar1 = **(int **)(lVar11 + 0x50);
      if (iVar1 < 1) goto LAB_1401015f4;
      **(int **)(lVar11 + 0x50) = iVar1 + -1;
      pbVar3 = (byte *)**(longlong **)(lVar11 + 0x38);
      **(longlong **)(lVar11 + 0x38) = (longlong)(pbVar3 + 1);
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffffffff) goto LAB_140101610;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_140101530;
LAB_14010155f:
  if ((char)param_3[1] == '\0') {
    if (lVar11 == 0) {
LAB_14010163b:
      *param_3 = 0;
      lVar11 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
         (**(int **)(lVar11 + 0x50) < 1)) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_14010163b;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar2 = *param_4;
    if (lVar2 == 0) {
LAB_140101687:
      *param_4 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar2 + 0x38) == (byte *)0x0) || (**(int **)(lVar2 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar2 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_140101687;
      *(char *)((longlong)param_4 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar11 == 0) {
    if (*param_4 == 0) goto LAB_1401016c9;
LAB_14010169f:
    if ((char)param_3[1] == '\0') {
      if (lVar11 == 0) {
LAB_1401016ec:
        *param_3 = 0;
      }
      else {
        if (((byte *)**(undefined8 **)(lVar11 + 0x38) == (byte *)0x0) ||
           (**(int **)(lVar11 + 0x50) < 1)) {
          uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar11);
        }
        else {
          uVar6 = (uint)*(byte *)**(undefined8 **)(lVar11 + 0x38);
        }
        if (uVar6 == 0xffffffff) goto LAB_1401016ec;
        *(char *)((longlong)param_3 + 9) = (char)uVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    if ((*(byte *)(*(longlong *)(lVar7 + 0x18) + (ulonglong)*(byte *)((longlong)param_3 + 9) * 2) &
        4) == 0) {
      if (iVar5 == 4) {
LAB_1401017a1:
        local_48 = (undefined4)*param_4;
        uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_40 = (undefined4)param_4[1];
        uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_58 = (undefined4)*param_3;
        uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_50 = (undefined4)param_3[1];
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        (*(code *)PTR__guard_dispatch_icall_140178c20)
                  (local_48,&local_68,&local_58,&local_48,param_5,puVar4,lVar8);
        *(undefined4 *)param_3 = local_68;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      }
      else {
        *puVar4 = *puVar4 | 2;
      }
    }
    else if (iVar5 == 4) {
      piVar10 = (int *)(lVar8 + 0x10);
      uVar6 = FUN_140102ab0(param_3,param_4,1,0xc,piVar10,&param_5,lVar7);
      *puVar4 = *puVar4 | uVar6;
      *piVar10 = *piVar10 + -1;
    }
    else {
      if (iVar5 != 3) goto LAB_1401017a1;
      uVar6 = FUN_140102ab0(param_3,param_4,1,0x1f,lVar8 + 0xc,&param_5,lVar7);
      *puVar4 = *puVar4 | uVar6;
    }
  }
  else {
    if (*param_4 == 0) goto LAB_14010169f;
LAB_1401016c9:
    *puVar4 = *puVar4 | 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar8 = *param_3;
    if (lVar8 == 0) {
LAB_14010181a:
      *param_3 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 == 0xffffffff) goto LAB_14010181a;
      *(char *)((longlong)param_3 + 9) = (char)uVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar8 = *param_4;
    if (lVar8 != 0) {
      if (((byte *)**(undefined8 **)(lVar8 + 0x38) == (byte *)0x0) || (**(int **)(lVar8 + 0x50) < 1)
         ) {
        uVar6 = (*(code *)PTR__guard_dispatch_icall_140178c20)();
      }
      else {
        uVar6 = (uint)*(byte *)**(undefined8 **)(lVar8 + 0x38);
      }
      if (uVar6 != 0xffffffff) goto LAB_140101866;
    }
    *param_4 = 0;
  }
LAB_140101866:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_14010187f;
  }
  else if (*param_4 == 0) goto LAB_14010187f;
  *puVar4 = *puVar4 | 1;
LAB_14010187f:
  lVar8 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar8;
  return;
}

