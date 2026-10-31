/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180253380 */

void FUN_180253380(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  ulonglong param_5,uint *param_6,undefined1 *param_7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
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
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 local_60 [8];
  ulonglong local_40;
  
  puVar15 = auStack_e8;
  local_40 = DAT_180402640 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_5 + 0x40);
  local_b0 = param_2;
  if ((*(uint *)(param_5 + 0x18) & 0x4000) == 0) {
LAB_18025361e:
    local_a8 = *(longlong *)(lVar10 + 8);
    *(undefined8 *)(puVar15 + -8) = 0x180253633;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    *(undefined4 ***)(puVar15 + 0x20) = &local_b0;
    uVar2 = *(undefined4 *)(param_5 + 0x18);
    *(undefined8 *)(puVar15 + -8) = 0x180253650;
    uVar6 = FUN_18025e540(local_60,param_3,param_4,uVar2);
    local_b8 = uVar6;
    if (local_a8 != 0) {
      *(undefined8 *)(puVar15 + -8) = 0x18025366d;
      lVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)();
      if (lVar10 != 0) {
        *(undefined8 *)(puVar15 + -8) = 0x180253686;
        (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10,1);
      }
    }
    if ((char)uVar6 < '\0') {
      *param_7 = 0;
    }
    else {
      *(undefined8 *)(puVar15 + -8) = 0x1802536a4;
      uVar8 = FUN_18026c940(local_60,&local_b0,(int)(char)uVar6,&local_b4);
      *param_7 = uVar8 != 0;
      if (((local_b0 != local_60) && (local_b4 == 0)) && ((local_b8._1_1_ == '\0' && (uVar8 < 2))))
      goto LAB_1802536ce;
    }
    *param_6 = 2;
  }
  else {
    uVar3 = *(undefined8 *)(lVar10 + 8);
    local_78 = uVar3;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
    uVar9 = FUN_1802565b0(local_80);
    lVar10 = (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar3);
    if (lVar10 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar10,1);
    }
    local_a0 = (undefined8 ***)0x0;
    uStack_98 = 0;
    local_90 = 1;
    local_88 = 7;
    ppppuVar11 = &local_a0;
    lVar10 = 1;
    do {
      *(undefined2 *)ppppuVar11 = 0;
      ppppuVar11 = (undefined8 ****)((longlong)ppppuVar11 + 2);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    local_a0._0_4_ = (uint)(ushort)local_a0;
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar9,local_80);
    FUN_180247e60(&local_a0,local_80);
    FUN_180248010(local_80);
    param_5 = local_90;
    if (local_90 < local_88) {
      uVar14 = local_90 + 1;
      if (((local_90 != uVar14) && (7 < local_88)) && (DAT_18034e408 != '\0')) {
        uVar1 = (longlong)local_a0 + (local_90 + 1) * 2;
        uVar16 = (longlong)local_a0 + uVar14 * 2 + 2;
        uVar12 = local_88 * 2 + 9 + (longlong)local_a0 & 0xfffffffffffffff8;
        uVar13 = uVar12;
        if (uVar1 <= uVar12) {
          uVar13 = uVar1;
        }
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
        }
        _guard_check_icall(local_a0,uVar12,uVar13,uVar16);
      }
      ppppuVar11 = &local_a0;
      if (7 < local_88) {
        ppppuVar11 = (undefined8 ****)local_a0;
      }
      local_90 = uVar14;
      *(undefined4 *)((longlong)ppppuVar11 + param_5 * 2) = 0;
      param_2 = local_b0;
    }
    else {
      FUN_180264160(&local_a0,1,(undefined1)local_b8,0);
    }
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(uVar9,local_80);
    FUN_180247e60(&local_a0,local_80);
    FUN_180248010(local_80);
    ppppuVar11 = &local_a0;
    if (7 < local_88) {
      ppppuVar11 = (undefined8 ****)local_a0;
    }
    local_c8 = 1;
    iVar7 = FUN_18025d950(param_3,param_4,2,ppppuVar11);
    if (iVar7 == 0) {
      *param_7 = 0;
    }
    else if (iVar7 == 1) {
      *param_7 = 1;
    }
    else {
      *param_7 = 0;
      *param_6 = 2;
    }
    puVar15 = auStack_e8;
    if (7 < local_88) {
      if (DAT_18034e408 != '\0') {
        uVar14 = (longlong)local_a0 + (local_88 + 1) * 2;
        uVar1 = (longlong)local_a0 + (local_90 + 1) * 2;
        uVar13 = uVar14 + 7 & 0xfffffffffffffff8;
        uVar16 = uVar13;
        if (uVar1 <= uVar13) {
          uVar16 = uVar1;
        }
        if (uVar13 < uVar14) {
          uVar14 = uVar13;
        }
        _guard_check_icall(local_a0,uVar13,uVar16,uVar14);
      }
      uVar14 = local_88 * 2 + 2;
      ppppuVar11 = (undefined8 ****)local_a0;
      if (0xfff < uVar14) {
        ppppuVar11 = (undefined8 ****)local_a0[-1];
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppuVar11))) {
          lVar10 = 5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar15 = auStack_e0;
          goto LAB_18025361e;
        }
        uVar14 = local_88 * 2 + 0x29;
      }
      thunk_FUN_1802464a0(ppppuVar11,uVar14);
      puVar15 = auStack_e8;
    }
  }
LAB_1802536ce:
  if ((char)param_3[1] == '\0') {
    *(undefined8 *)(puVar15 + -8) = 0x1802536dd;
    FUN_18024d310(param_3);
  }
  if ((char)param_4[1] == '\0') {
    *(undefined8 *)(puVar15 + -8) = 0x1802536ec;
    FUN_18024d310(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_180253703;
  }
  else if (*param_4 == 0) goto LAB_180253703;
  *param_6 = *param_6 | 1;
LAB_180253703:
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  lVar10 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar2;
  param_2[2] = (int)lVar10;
  param_2[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_18025371b;
  FUN_1802396d0(local_40 ^ (ulonglong)puVar15);
}

