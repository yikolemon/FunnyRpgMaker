/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102300c0 */

void FUN_102300c0(char *param_1,int *param_2,int *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char ****ppppcVar12;
  char *pcVar13;
  char cVar14;
  char *pcVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  char *pcVar18;
  int *local_84;
  char *local_78;
  int local_70;
  byte local_69;
  uint local_68;
  char local_61;
  char ***local_60 [4];
  int local_50;
  uint local_4c;
  char ***local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  char local_30 [22];
  char local_1a;
  char local_19;
  char local_18;
  char local_17;
  undefined1 local_16 [2];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288965;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar8 = (int *)FUN_1000c417(param_5,local_14);
  pcVar2 = *(code **)(*piVar8 + 0x14);
  (*(code *)PTR_guard_check_icall_1035d810)(local_60);
  (*pcVar2)();
  local_8 = 0;
  if (local_50 == 0) {
    local_61 = '\0';
  }
  else {
    pcVar2 = *(code **)(*piVar8 + 0x10);
    (*(code *)PTR_guard_check_icall_1035d810)();
    local_61 = (*pcVar2)();
  }
  piVar8 = (int *)FUN_1001c23e(param_5);
  pcVar2 = *(code **)(*piVar8 + 0x1c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789ABCDEFabcdef-+Xx",&DAT_102b7b3f,local_30);
  (*pcVar2)();
  bVar5 = false;
  if (local_61 != '\0') {
    piVar8 = (int *)*param_2;
LAB_1023018c:
    if ((char)param_2[1] == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_102301cb:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_102301cb;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
      if (*param_3 == 0) goto LAB_102301f4;
    }
    else if (*param_3 != 0) goto LAB_102301f4;
    if ((char)param_2[1] == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_10230279:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_10230279;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((int)param_2 + 5) != local_61) goto LAB_102301f4;
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_102302e2:
      *param_2 = 0;
      piVar8 = (int *)0x0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_102302bb:
        pcVar2 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar8[0xb];
        if (iVar10 < 1) goto LAB_102302bb;
        *(int *)piVar8[0xb] = iVar10 + -1;
        pbVar3 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_102302e2;
      piVar8 = (int *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      bVar5 = true;
    }
    goto LAB_1023018c;
  }
LAB_102301f4:
  cVar7 = (char)param_2[1];
  local_78 = param_1;
  if (cVar7 == '\0') {
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_10230316:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        uVar9 = (uint)**(byte **)piVar8[7];
      }
      if (uVar9 == 0xffffffff) goto LAB_10230316;
      *(char *)((int)param_2 + 5) = (char)uVar9;
    }
    *(undefined1 *)(param_2 + 1) = 1;
    cVar7 = '\x01';
  }
  if ((char)param_3[1] == '\0') {
    FUN_100e1fa2();
    cVar7 = (char)param_2[1];
  }
  piVar8 = (int *)*param_2;
  if (piVar8 == (int *)0x0) {
    if (*param_3 != 0) {
LAB_10230351:
      if (cVar7 == '\0') {
        if (piVar8 == (int *)0x0) {
LAB_10230390:
          *param_2 = 0;
          piVar8 = (int *)0x0;
        }
        else {
          if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
            pcVar2 = *(code **)(*piVar8 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar9 = (*pcVar2)();
          }
          else {
            uVar9 = (uint)**(byte **)piVar8[7];
          }
          if (uVar9 == 0xffffffff) goto LAB_10230390;
          piVar8 = (int *)*param_2;
          *(char *)((int)param_2 + 5) = (char)uVar9;
        }
        cVar7 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
      cVar14 = *(char *)((int)param_2 + 5);
      if (cVar14 == local_19) {
        local_78 = param_1 + 1;
        *param_1 = '+';
        piVar8 = (int *)*param_2;
        if (piVar8 != (int *)0x0) {
          if (*(int *)piVar8[7] == 0) {
LAB_102303e3:
            pcVar2 = *(code **)(*piVar8 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar9 = (*pcVar2)();
          }
          else {
            iVar10 = *(int *)piVar8[0xb];
            if (iVar10 < 1) goto LAB_102303e3;
            *(int *)piVar8[0xb] = iVar10 + -1;
            pbVar3 = *(byte **)piVar8[7];
            *(byte **)piVar8[7] = pbVar3 + 1;
            uVar9 = (uint)*pbVar3;
          }
          if (uVar9 != 0xffffffff) {
            cVar7 = '\0';
            *(undefined1 *)(param_2 + 1) = 0;
            goto LAB_102304ce;
          }
        }
        cVar7 = '\x01';
        *param_2 = 0;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      else {
        if (cVar7 == '\0') {
          if (piVar8 == (int *)0x0) {
LAB_10230454:
            uVar9 = (uint)*(byte *)((int)param_2 + 5);
            *param_2 = 0;
          }
          else {
            if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
              pcVar2 = *(code **)(*piVar8 + 0x18);
              (*(code *)PTR_guard_check_icall_1035d810)();
              uVar9 = (*pcVar2)();
            }
            else {
              uVar9 = (uint)**(byte **)piVar8[7];
            }
            if (uVar9 == 0xffffffff) goto LAB_10230454;
            *(char *)((int)param_2 + 5) = (char)uVar9;
          }
          cVar14 = (char)uVar9;
          *(undefined1 *)(param_2 + 1) = 1;
          cVar7 = '\x01';
        }
        if (cVar14 != local_1a) goto LAB_102304ce;
        local_78 = param_1 + 1;
        *param_1 = '-';
        piVar8 = (int *)*param_2;
        if (piVar8 != (int *)0x0) {
          if (*(int *)piVar8[7] == 0) {
LAB_102304a2:
            pcVar2 = *(code **)(*piVar8 + 0x1c);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar9 = (*pcVar2)();
          }
          else {
            iVar10 = *(int *)piVar8[0xb];
            if (iVar10 < 1) goto LAB_102304a2;
            *(int *)piVar8[0xb] = iVar10 + -1;
            pbVar3 = *(byte **)piVar8[7];
            *(byte **)piVar8[7] = pbVar3 + 1;
            uVar9 = (uint)*pbVar3;
          }
          if (uVar9 != 0xffffffff) {
            *(undefined1 *)(param_2 + 1) = 0;
            cVar7 = '\0';
            goto LAB_102304ce;
          }
        }
        *param_2 = 0;
        cVar7 = '\x01';
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
  }
  else if (*param_3 == 0) goto LAB_10230351;
LAB_102304ce:
  if (local_61 != '\0') {
    piVar8 = (int *)*param_2;
LAB_102304d6:
    if (cVar7 == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_10230516:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_10230516;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if ((char)param_3[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
      if (*param_3 == 0) goto LAB_10230541;
    }
    else if (*param_3 != 0) goto LAB_10230541;
    if ((char)param_2[1] == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_1023059f:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_1023059f;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((int)param_2 + 5) != local_61) goto LAB_10230541;
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_10230605:
      cVar7 = '\x01';
      *param_2 = 0;
      piVar8 = (int *)0x0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_102305dc:
        pcVar2 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar8[0xb];
        if (iVar10 < 1) goto LAB_102305dc;
        *(int *)piVar8[0xb] = iVar10 + -1;
        pbVar3 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_10230605;
      piVar8 = (int *)*param_2;
      cVar7 = '\0';
      *(undefined1 *)(param_2 + 1) = 0;
      bVar5 = true;
    }
    goto LAB_102304d6;
  }
LAB_10230541:
  param_4 = param_4 & 0xe00;
  if (param_4 == 0x400) {
    param_4._0_1_ = 8;
  }
  else if (param_4 == 0x800) {
    param_4._0_1_ = 0x10;
  }
  else {
    param_4._0_1_ = -(param_4 != 0) & 10;
  }
  local_69 = 0;
  bVar4 = false;
  if ((char)param_2[1] == '\0') {
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_1023067d:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        uVar9 = (uint)**(byte **)piVar8[7];
      }
      if (uVar9 == 0xffffffff) goto LAB_1023067d;
      *(char *)((int)param_2 + 5) = (char)uVar9;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar8 = (int *)*param_2;
  if (piVar8 == (int *)0x0) {
    if (*param_3 == 0) goto LAB_102306a8;
LAB_102306d6:
    if ((char)param_2[1] == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_10230714:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_10230714;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    if (*(char *)((int)param_2 + 5) != local_30[0]) goto LAB_102306a8;
    piVar8 = (int *)*param_2;
    local_69 = 1;
    if (piVar8 == (int *)0x0) {
LAB_102307b0:
      *param_2 = 0;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_10230755:
        pcVar2 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar8[0xb];
        if (iVar10 < 1) goto LAB_10230755;
        *(int *)piVar8[0xb] = iVar10 + -1;
        pbVar3 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_102307b0;
      piVar8 = (int *)*param_2;
      *(undefined1 *)(param_2 + 1) = 0;
      if (piVar8 == (int *)0x0) goto LAB_102307b0;
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        uVar9 = (uint)**(byte **)piVar8[7];
      }
      if (uVar9 == 0xffffffff) goto LAB_102307b0;
      *(char *)((int)param_2 + 5) = (char)uVar9;
    }
    *(char *)(param_2 + 1) = '\x01';
    if ((char)param_3[1] == '\0') {
      FUN_100e1fa2();
    }
    piVar8 = (int *)*param_2;
    if (piVar8 != (int *)0x0) {
      if (*param_3 == 0) goto LAB_102307f7;
LAB_102307de:
      if ((byte)param_4 == 0) {
        param_4._0_1_ = 8;
        goto LAB_102306bb;
      }
      goto LAB_102306b3;
    }
    if (*param_3 == 0) goto LAB_102307de;
LAB_102307f7:
    cVar7 = (char)param_2[1];
    if (cVar7 == '\0') {
      if (piVar8 == (int *)0x0) {
LAB_10230836:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_10230836;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      cVar7 = '\x01';
    }
    cVar14 = *(char *)((int)param_2 + 5);
    if (cVar14 != local_17) {
      if (cVar7 == '\0') {
        piVar8 = (int *)*param_2;
        if (piVar8 == (int *)0x0) {
LAB_10230888:
          uVar9 = (uint)*(byte *)((int)param_2 + 5);
          *param_2 = 0;
        }
        else {
          if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
            pcVar2 = *(code **)(*piVar8 + 0x18);
            (*(code *)PTR_guard_check_icall_1035d810)();
            uVar9 = (*pcVar2)();
          }
          else {
            uVar9 = (uint)**(byte **)piVar8[7];
          }
          if (uVar9 == 0xffffffff) goto LAB_10230888;
          *(char *)((int)param_2 + 5) = (char)uVar9;
        }
        cVar14 = (char)uVar9;
        *(undefined1 *)(param_2 + 1) = 1;
      }
      if (cVar14 != local_18) goto LAB_102307de;
    }
    if (((byte)param_4 != 0) && ((byte)param_4 != 0x10)) goto LAB_102306b3;
    piVar8 = (int *)*param_2;
    param_4._0_1_ = 0x10;
    local_69 = 0;
    if (piVar8 == (int *)0x0) {
LAB_10230905:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      param_4._0_1_ = 0x10;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_102308e1:
        pcVar2 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar8[0xb];
        if (iVar10 < 1) goto LAB_102308e1;
        *(int *)piVar8[0xb] = iVar10 + -1;
        pbVar3 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_10230905;
      *(undefined1 *)(param_2 + 1) = 0;
    }
LAB_102306bb:
    local_68 = 0x16;
    if ((byte)param_4 == 8) {
      local_68 = 8;
    }
  }
  else {
    if (*param_3 == 0) goto LAB_102306d6;
LAB_102306a8:
    if ((byte)param_4 != 0) {
LAB_102306b3:
      if ((byte)param_4 != 10) goto LAB_102306bb;
    }
    local_68 = 10;
  }
  local_38 = 1;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_34 = 0xf;
  local_48 = (char ***)(uint)local_69;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_70 = 0;
LAB_10230953:
  if ((char)param_2[1] == '\0') {
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_10230994:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        uVar9 = (uint)**(byte **)piVar8[7];
      }
      if (uVar9 == 0xffffffff) goto LAB_10230994;
      *(char *)((int)param_2 + 5) = (char)uVar9;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((char)param_3[1] == '\0') {
    FUN_100e1fa2();
  }
  piVar8 = (int *)*param_2;
  if (piVar8 == (int *)0x0) {
    if (*param_3 == 0) goto LAB_102309c0;
  }
  else if (*param_3 != 0) goto LAB_102309c0;
  if ((char)param_2[1] == '\0') {
    if (piVar8 == (int *)0x0) {
LAB_10230a29:
      *param_2 = 0;
    }
    else {
      if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
        pcVar2 = *(code **)(*piVar8 + 0x18);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        uVar9 = (uint)**(byte **)piVar8[7];
      }
      if (uVar9 == 0xffffffff) goto LAB_10230a29;
      *(char *)((int)param_2 + 5) = (char)uVar9;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  iVar10 = FUN_102298a0(local_30,local_16,*(undefined1 *)((int)param_2 + 5));
  if ((uint)(iVar10 - (int)local_30) < local_68) {
    cVar7 = "0123456789ABCDEFabcdef-+Xx"[iVar10 - (int)local_30];
    *local_78 = cVar7;
    if (((bVar4) || (cVar7 != '0')) && (local_78 < param_1 + 0x1f)) {
      local_78 = local_78 + 1;
      bVar4 = true;
    }
    ppppcVar16 = &local_48;
    if (0xf < local_34) {
      ppppcVar16 = (char ****)local_48;
    }
    local_69 = 1;
    if (*(char *)((int)ppppcVar16 + local_70) != '\x7f') {
      ppppcVar16 = &local_48;
      if (0xf < local_34) {
        ppppcVar16 = (char ****)local_48;
      }
      *(char *)((int)ppppcVar16 + local_70) = *(char *)((int)ppppcVar16 + local_70) + '\x01';
    }
  }
  else {
    if (local_61 == '\0') goto LAB_102309c0;
    if ((char)param_2[1] == '\0') {
      piVar8 = (int *)*param_2;
      if (piVar8 == (int *)0x0) {
LAB_10230b00:
        *param_2 = 0;
      }
      else {
        if ((*(byte **)piVar8[7] == (byte *)0x0) || (*(int *)piVar8[0xb] < 1)) {
          pcVar2 = *(code **)(*piVar8 + 0x18);
          (*(code *)PTR_guard_check_icall_1035d810)();
          uVar9 = (*pcVar2)();
        }
        else {
          uVar9 = (uint)**(byte **)piVar8[7];
        }
        if (uVar9 == 0xffffffff) goto LAB_10230b00;
        *(char *)((int)param_2 + 5) = (char)uVar9;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    uVar9 = local_38;
    if (*(char *)((int)param_2 + 5) != local_61) goto LAB_102309c0;
    ppppcVar16 = &local_48;
    if (0xf < local_34) {
      ppppcVar16 = (char ****)local_48;
    }
    if (*(char *)((int)ppppcVar16 + local_70) == '\0') {
      bVar5 = true;
    }
    else {
      if (local_38 < local_34) {
        uVar1 = local_38 + 1;
        if (((local_38 != uVar1) && (0xf < local_34)) && (DAT_103235d4 != '\0')) {
          pcVar13 = (char *)((int)local_48 + local_38 + 1);
          pcVar18 = (char *)((int)local_48 + local_38 + 2);
          pcVar15 = (char *)((uint)((int)local_48 + local_34 + 8) & 0xfffffff8);
          pcVar11 = pcVar15;
          if (pcVar13 <= pcVar15) {
            pcVar11 = pcVar13;
          }
          if (pcVar15 < pcVar18) {
            pcVar18 = pcVar15;
          }
          guard_check_icall(local_48,pcVar15,pcVar11,pcVar18);
        }
        local_38 = uVar1;
        ppppcVar16 = &local_48;
        if (0xf < local_34) {
          ppppcVar16 = (char ****)local_48;
        }
        ((char *)((int)ppppcVar16 + uVar9))[0] = '\0';
        ((char *)((int)ppppcVar16 + uVar9))[1] = '\0';
      }
      else {
        FUN_10232b40(1,local_84,0);
      }
      local_70 = local_70 + 1;
    }
  }
  local_84 = (int *)*param_2;
  if (local_84 == (int *)0x0) {
LAB_10230c05:
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    if (*(int *)local_84[7] == 0) {
LAB_10230be5:
      pcVar2 = *(code **)(*local_84 + 0x1c);
      (*(code *)PTR_guard_check_icall_1035d810)();
      uVar9 = (*pcVar2)();
    }
    else {
      iVar10 = *(int *)local_84[0xb];
      if (iVar10 < 1) goto LAB_10230be5;
      *(int *)local_84[0xb] = iVar10 + -1;
      pbVar3 = *(byte **)local_84[7];
      *(byte **)local_84[7] = pbVar3 + 1;
      uVar9 = (uint)*pbVar3;
    }
    if (uVar9 == 0xffffffff) goto LAB_10230c05;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  goto LAB_10230953;
LAB_10230d4b:
  if (!bVar4) {
    *local_78 = '0';
    local_78 = local_78 + 1;
  }
  *local_78 = '\0';
  goto LAB_10230d75;
LAB_102309c0:
  if (local_70 != 0) {
    ppppcVar16 = &local_48;
    if (0xf < local_34) {
      ppppcVar16 = (char ****)local_48;
    }
    if (*(char *)((int)ppppcVar16 + local_70) < '\x01') {
      bVar5 = true;
    }
    else {
      local_70 = local_70 + 1;
    }
  }
  if (local_61 != '\0') {
LAB_10230c20:
    if ((char)param_2[1] == '\0') {
      FUN_100e1fa2();
    }
    if ((char)param_3[1] == '\0') {
      FUN_100e1fa2();
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) goto LAB_10230c53;
    }
    else if (*param_3 != 0) goto LAB_10230c53;
    if ((char)param_2[1] == '\0') {
      FUN_100e1fa2();
    }
    if (*(char *)((int)param_2 + 5) != local_61) goto LAB_10230c53;
    piVar8 = (int *)*param_2;
    if (piVar8 == (int *)0x0) {
LAB_10230d38:
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 1;
      bVar5 = true;
    }
    else {
      if (*(int *)piVar8[7] == 0) {
LAB_10230d13:
        pcVar2 = *(code **)(*piVar8 + 0x1c);
        (*(code *)PTR_guard_check_icall_1035d810)();
        uVar9 = (*pcVar2)();
      }
      else {
        iVar10 = *(int *)piVar8[0xb];
        if (iVar10 < 1) goto LAB_10230d13;
        *(int *)piVar8[0xb] = iVar10 + -1;
        pbVar3 = *(byte **)piVar8[7];
        *(byte **)piVar8[7] = pbVar3 + 1;
        uVar9 = (uint)*pbVar3;
      }
      if (uVar9 == 0xffffffff) goto LAB_10230d38;
      bVar5 = true;
      *(undefined1 *)(param_2 + 1) = 0;
    }
    goto LAB_10230c20;
  }
LAB_10230c53:
  ppppcVar16 = local_60;
  if (0xf < local_4c) {
    ppppcVar16 = (char ****)local_60[0];
  }
  cVar7 = '\0';
  ppppcVar17 = (char ****)((int)ppppcVar16 + local_50);
  bVar6 = bVar5;
  if (local_69 != 0) {
LAB_10230c71:
    do {
      if ((bVar5) || (local_70 == 0)) goto LAB_10230d4b;
      if (ppppcVar16 != ppppcVar17) {
        cVar7 = *(char *)ppppcVar16;
        ppppcVar16 = (char ****)((int)ppppcVar16 + 1);
      }
      local_70 = local_70 + -1;
    } while ((cVar7 < '\x01') || (cVar7 == '\x7f'));
    bVar5 = bVar6;
    if (local_70 == 0) {
LAB_10230cad:
      ppppcVar12 = &local_48;
      if (0xf < local_34) {
        ppppcVar12 = (char ****)local_48;
      }
      if (*(char *)ppppcVar12 <= cVar7) goto LAB_10230c71;
    }
    else {
      ppppcVar12 = &local_48;
      if (0xf < local_34) {
        ppppcVar12 = (char ****)local_48;
      }
      if (*(char *)((int)ppppcVar12 + local_70) == cVar7) {
        if (local_70 == 0) goto LAB_10230cad;
        goto LAB_10230c71;
      }
    }
    bVar5 = true;
    bVar6 = true;
    goto LAB_10230c71;
  }
LAB_10230d75:
  FUN_10004e60();
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

