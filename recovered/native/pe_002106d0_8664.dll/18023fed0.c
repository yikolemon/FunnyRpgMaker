/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023fed0 */

void FUN_18023fed0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  ulonglong param_5,uint *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 local_c8;
  undefined2 local_b8;
  int local_b4;
  undefined4 *local_b0;
  longlong local_a8;
  undefined8 ***local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 ***local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60 [8];
  ulonglong local_40;
  
  puVar14 = auStack_e8;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_5 + 0x40);
  local_b0 = param_2;
  if ((*(uint *)(param_5 + 0x18) & 0x4000) == 0) {
LAB_18024015b:
    local_a8 = *(longlong *)(lVar9 + 8);
    *(undefined8 *)(puVar14 + -8) = 0x180240170;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    *(undefined4 ***)(puVar14 + 0x20) = &local_b0;
    uVar1 = *(undefined4 *)(param_5 + 0x18);
    *(undefined8 *)(puVar14 + -8) = 0x18024018d;
    uVar5 = FUN_180241430(local_60,param_3,param_4,uVar1);
    local_b8 = uVar5;
    if (local_a8 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1802401aa;
      lVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      if (lVar9 != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x1802401c3;
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,1);
      }
    }
    if ((char)uVar5 < '\0') {
      *param_7 = 0;
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x1802401e1;
      uVar7 = FUN_18026c940(local_60,&local_b0,(int)(char)uVar5,&local_b4);
      *param_7 = uVar7 != 0;
      if (((local_b0 != local_60) && (local_b4 == 0)) && ((local_b8._1_1_ == '\0' && (uVar7 < 2))))
      goto LAB_18024020b;
    }
    *param_6 = 2;
  }
  else {
    uVar2 = *(undefined8 *)(lVar9 + 8);
    local_78 = uVar2;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
    uVar8 = FUN_18000b3c1(&local_80);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar2);
    if (lVar9 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar9,1);
    }
    uStack_98 = 0;
    local_90 = 1;
    local_88 = 0xf;
    local_a0 = (undefined8 ****)0x0;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar8,&local_80);
    ppppuVar11 = &local_80;
    if (0xf < local_68) {
      ppppuVar11 = (undefined8 ****)local_80;
    }
    FUN_180003300(&local_a0,ppppuVar11,local_70);
    FUN_180004c8c(&local_80);
    param_5 = local_90;
    if (local_90 < local_88) {
      uVar13 = local_90 + 1;
      if (((local_90 != uVar13) && (0xf < local_88)) && (DAT_18034e408 != '\0')) {
        uVar10 = (longlong)local_a0 + local_90 + 1;
        uVar15 = (longlong)local_a0 + local_90 + 2;
        uVar12 = local_88 + 8 + (longlong)local_a0 & 0xfffffffffffffff8;
        uVar16 = uVar12;
        if (uVar10 <= uVar12) {
          uVar16 = uVar10;
        }
        if (uVar12 < uVar15) {
          uVar15 = uVar12;
        }
        _guard_check_icall(local_a0,uVar12,uVar16,uVar15);
      }
      ppppuVar11 = &local_a0;
      if (0xf < local_88) {
        ppppuVar11 = (undefined8 ****)local_a0;
      }
      local_90 = uVar13;
      *(undefined2 *)((longlong)ppppuVar11 + param_5) = 0;
      param_2 = local_b0;
    }
    else {
      FUN_1802442b0(&local_a0,1,(undefined1)local_b8,0);
    }
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar8,&local_80);
    ppppuVar11 = &local_80;
    if (0xf < local_68) {
      ppppuVar11 = (undefined8 ****)local_80;
    }
    FUN_180003300(&local_a0,ppppuVar11,local_70);
    FUN_180004c8c(&local_80);
    ppppuVar11 = &local_a0;
    if (0xf < local_88) {
      ppppuVar11 = (undefined8 ****)local_a0;
    }
    local_c8 = 1;
    iVar6 = FUN_180243e50(param_3,param_4,2,ppppuVar11);
    if (iVar6 == 0) {
      *param_7 = 0;
    }
    else if (iVar6 == 1) {
      *param_7 = 1;
    }
    else {
      *param_7 = 0;
      *param_6 = 2;
    }
    puVar14 = auStack_e8;
    if (0xf < local_88) {
      if (DAT_18034e408 != '\0') {
        uVar16 = local_88 + 1 + (longlong)local_a0;
        uVar10 = local_90 + 1 + (longlong)local_a0;
        uVar15 = uVar16 + 7 & 0xfffffffffffffff8;
        uVar13 = uVar15;
        if (uVar10 <= uVar15) {
          uVar13 = uVar10;
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar15;
        }
        _guard_check_icall(local_a0,uVar15,uVar13,uVar16);
      }
      uVar13 = local_88 + 1;
      ppppuVar11 = (undefined8 ****)local_a0;
      if (0xfff < uVar13) {
        ppppuVar11 = (undefined8 ****)local_a0[-1];
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppuVar11))) {
          lVar9 = 5;
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)();
          puVar14 = auStack_e0;
          goto LAB_18024015b;
        }
        uVar13 = local_88 + 0x28;
      }
      thunk_FUN_1802464a0(ppppuVar11,uVar13);
      puVar14 = auStack_e8;
    }
  }
LAB_18024020b:
  if ((char)param_3[1] == '\0') {
    *(undefined8 *)(puVar14 + -8) = 0x18024021a;
    FUN_1800e5e14(param_3);
  }
  if ((char)param_4[1] == '\0') {
    *(undefined8 *)(puVar14 + -8) = 0x180240229;
    FUN_1800e5e14(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_180240240;
  }
  else if (*param_4 == 0) goto LAB_180240240;
  *param_6 = *param_6 | 1;
LAB_180240240:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar9 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar9;
  param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_180240258;
  FUN_1802396d0(local_40 ^ (ulonglong)puVar14);
}

