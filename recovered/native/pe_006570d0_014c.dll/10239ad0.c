/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239ad0 */

void FUN_10239ad0(int *param_1,int param_2,int param_3,int param_4,char param_5,int *param_6,
                 uint *param_7,undefined1 *param_8)

{
  uint *puVar1;
  undefined4 ***pppuVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  code *pcVar14;
  int *piVar15;
  undefined1 local_88 [4];
  int *local_84;
  undefined1 local_80 [4];
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 *local_70;
  uint *local_6c;
  undefined4 local_68;
  undefined1 local_64 [24];
  undefined4 ***local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_3c;
  int *local_38;
  int local_34 [8];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289e30;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = param_7;
  piVar15 = *(int **)(param_6[0xc] + 4);
  local_70 = param_8;
  local_84 = param_6;
  pcVar14 = *(code **)(*piVar15 + 4);
  if ((param_6[5] & 0x4000U) == 0) {
LAB_10239ed5:
    local_7c = piVar15;
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar14)();
    local_8 = 4;
    uVar10 = FUN_1024dbc0(local_34,&param_2,&param_4,local_84[5],local_80);
    local_68 = (undefined4 ****)CONCAT22(local_68._2_2_,(short)uVar10);
    local_8 = 0xffffffff;
    if (local_7c != (int *)0x0) {
      pcVar14 = *(code **)(*local_7c + 8);
      (*(code *)PTR_guard_check_icall_1035d810)();
      puVar3 = (undefined4 *)(*pcVar14)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar14 = *(code **)*puVar3;
        (*(code *)PTR_guard_check_icall_1035d810)(1);
        (*pcVar14)();
      }
      uVar10 = (uint)local_68 & 0xffff;
    }
    if ((char)uVar10 < '\0') {
      *local_70 = 0;
      *local_6c = 2;
    }
    else {
      iVar7 = FUN_10257a10(local_34,&local_84,(int)(char)uVar10,&local_7c);
      *local_70 = iVar7 != 0;
      if (((local_84 == local_34) || (local_7c != (int *)0x0)) ||
         ((local_68._1_1_ != '\0' || ((iVar7 != 0 && (iVar7 != 1)))))) {
        *local_6c = 2;
      }
    }
  }
  else {
    local_84 = piVar15;
    (*(code *)PTR_guard_check_icall_1035d810)(local_14);
    (*pcVar14)();
    local_8 = 0;
    local_7c = (int *)FUN_100470ba(local_88);
    pcVar14 = *(code **)(*piVar15 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar3 = (undefined4 *)(*pcVar14)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar14 = *(code **)*puVar3;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar14)();
    }
    local_3c = (int *)0x1;
    local_38 = (int *)0x7;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_4c = (undefined4 ****)0x0;
    local_8 = 1;
    pcVar14 = *(code **)(*local_7c + 0x18);
    (*(code *)PTR_guard_check_icall_1035d810)(local_64);
    (*pcVar14)();
    local_8._0_1_ = 2;
    FUN_10236340(local_64);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_102363f0();
    piVar15 = local_38;
    local_74 = local_3c;
    if (local_38 <= local_3c) {
      if (local_3c == (int *)0x7ffffffe) {
                    /* WARNING: Subroutine does not return */
        FUN_100013fb();
      }
      local_84 = (int *)((int)local_3c + 1);
      local_78 = (int *)((uint)local_84 | 7);
      if (local_78 < (int *)0x7fffffff) {
        if ((int *)(0x7ffffffe - ((uint)local_38 >> 1)) < local_38) {
          local_78 = (int *)0x7ffffffe;
        }
        else {
          piVar5 = (int *)(((uint)local_38 >> 1) + (int)local_38);
          if (local_78 < piVar5) {
            local_78 = piVar5;
          }
        }
      }
      else {
        local_78 = (int *)0x7ffffffe;
      }
      local_68 = (undefined4 ****)FUN_10001406(&local_4c,&local_78);
      if (((int *)0x7 < local_38) && (DAT_103235d4 != '\0')) {
        uVar10 = (int)local_4c + ((int)local_3c + 1) * 2;
        uVar6 = (int)local_4c + ((int)local_38 + 1) * 2;
        uVar11 = uVar6 + 7 & 0xfffffff8;
        uVar12 = uVar11;
        if (uVar6 <= uVar11) {
          uVar12 = uVar6;
        }
        uVar6 = uVar11;
        if (uVar10 <= uVar11) {
          uVar6 = uVar10;
        }
        guard_check_icall(local_4c,uVar11,uVar6,uVar12);
      }
      pppuVar2 = local_4c;
      ppppuVar4 = local_68;
      local_3c = local_84;
      local_38 = local_78;
      iVar7 = (int)local_74 * 2;
      local_74 = (int *)(iVar7 + (int)local_68);
      if (piVar15 < (int *)0x8) {
        FUN_1025b2d0(local_68,&local_4c,iVar7);
        *local_74 = 0;
LAB_10239d64:
        local_4c = ppppuVar4;
        if (((int *)0x7 < local_38) && (DAT_103235d4 != '\0')) {
          uVar11 = (int)ppppuVar4 + (int)local_38 * 2 + 2;
          uVar10 = (int)local_68 + ((int)local_3c + 1) * 2;
          uVar12 = (int)ppppuVar4 + (int)local_38 * 2 + 9 & 0xfffffff8;
          uVar6 = uVar12;
          if (uVar10 <= uVar12) {
            uVar6 = uVar10;
          }
          uVar10 = uVar12;
          if (uVar11 <= uVar12) {
            uVar10 = uVar11;
          }
          guard_check_icall(local_68,uVar12,uVar10,uVar6);
        }
        goto LAB_10239da8;
      }
      FUN_1025b2d0(local_68,local_4c,iVar7);
      iVar7 = (int)piVar15 * 2;
      piVar15 = (int *)(iVar7 + 2);
      *local_74 = 0;
      ppppuVar4 = (undefined4 ****)pppuVar2;
      if (piVar15 < (int *)0x1000) {
LAB_10239d41:
        FUN_102283a0(ppppuVar4,piVar15);
        ppppuVar4 = local_68;
        goto LAB_10239d64;
      }
      ppppuVar4 = (undefined4 ****)pppuVar2[-1];
      piVar15 = (int *)(iVar7 + 0x25);
      pcVar14 = (code *)((int)pppuVar2 - (int)ppppuVar4);
      if (pcVar14 + -4 < &DAT_00000020) goto LAB_10239d41;
LAB_10239ece:
      pcVar9 = (code *)swi(0x29);
      (*pcVar9)();
      goto LAB_10239ed5;
    }
    local_78 = (int *)((int)local_3c + 1);
    if (((local_3c != local_78) && ((int *)0x7 < local_38)) && (DAT_103235d4 != '\0')) {
      uVar10 = (int)local_4c + ((int)local_3c + 1) * 2;
      uVar6 = (int)local_4c + ((int)local_3c + 2) * 2;
      uVar11 = (int)local_4c + (int)local_38 * 2 + 9 & 0xfffffff8;
      uVar12 = uVar11;
      if (uVar6 <= uVar11) {
        uVar12 = uVar6;
      }
      uVar6 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = uVar10;
      }
      guard_check_icall(local_4c,uVar11,uVar6,uVar12);
    }
    ppppuVar4 = &local_4c;
    if ((int *)0x7 < local_38) {
      ppppuVar4 = (undefined4 ****)local_4c;
    }
    local_3c = local_78;
    *(undefined4 *)((int)ppppuVar4 + (int)local_74 * 2) = 0;
LAB_10239da8:
    pcVar14 = *(code **)(*local_7c + 0x1c);
    (*(code *)PTR_guard_check_icall_1035d810)(local_64);
    (*pcVar14)();
    local_8._0_1_ = 3;
    FUN_10236340(local_64);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_102363f0();
    ppppuVar4 = &local_4c;
    if ((int *)0x7 < local_38) {
      ppppuVar4 = (undefined4 ****)local_4c;
    }
    iVar7 = FUN_1024d780(&param_2,&param_4,2,ppppuVar4,1);
    if (iVar7 == 0) {
      *local_70 = 0;
    }
    else if (iVar7 == 1) {
      *local_70 = 1;
    }
    else {
      *local_70 = 0;
      *local_6c = 2;
    }
    local_8 = 0xffffffff;
    if ((int *)0x7 < local_38) {
      if (DAT_103235d4 != '\0') {
        pcVar9 = (code *)((int)local_4c + ((int)local_38 + 1) * 2);
        pcVar14 = (code *)((int)local_4c + ((int)local_3c + 1) * 2);
        pcVar13 = (code *)((uint)(pcVar9 + 7) & 0xfffffff8);
        pcVar8 = pcVar13;
        if (pcVar9 <= pcVar13) {
          pcVar8 = pcVar9;
        }
        pcVar9 = pcVar13;
        if (pcVar14 <= pcVar13) {
          pcVar9 = pcVar14;
        }
        guard_check_icall(local_4c,pcVar13,pcVar9,pcVar8);
      }
      uVar10 = (int)local_38 * 2 + 2;
      ppppuVar4 = (undefined4 ****)local_4c;
      if (0xfff < uVar10) {
        ppppuVar4 = (undefined4 ****)local_4c[-1];
        uVar10 = (int)local_38 * 2 + 0x25;
        piVar15 = (int *)((int)local_4c - (int)ppppuVar4);
        if ((int *)0x1f < piVar15 + -1) goto LAB_10239ece;
      }
      FUN_102283a0(ppppuVar4,uVar10);
    }
  }
  puVar1 = local_6c;
  if ((char)param_3 == '\0') {
    FUN_1023b0c0();
  }
  if (param_5 == '\0') {
    FUN_1023b0c0();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_10239fbe;
  }
  else if (param_4 == 0) goto LAB_10239fbe;
  *puVar1 = *puVar1 | 1;
LAB_10239fbe:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

