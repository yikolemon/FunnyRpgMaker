/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023d7c0 */

/* WARNING: Removing unreachable block (ram,0x1023da32) */
/* WARNING: Removing unreachable block (ram,0x1023d9be) */
/* WARNING: Removing unreachable block (ram,0x1023d9ad) */
/* WARNING: Removing unreachable block (ram,0x1023da4d) */
/* WARNING: Removing unreachable block (ram,0x1023da61) */
/* WARNING: Removing unreachable block (ram,0x1023da63) */

void FUN_1023d7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,short *param_7)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 ****ppppuVar10;
  undefined4 ****ppppuVar11;
  undefined2 *puVar12;
  undefined4 ***pppuVar13;
  undefined2 *puVar14;
  uint local_58;
  undefined1 local_54 [4];
  int *local_50;
  undefined4 ***local_4c;
  undefined4 ***local_48;
  undefined4 ***local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  uint local_30;
  uint local_2c [5];
  short local_18;
  undefined1 local_16 [2];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289f85;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = (undefined4 ***)param_7;
  piVar1 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_50 = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar2)();
  local_8 = 0;
  local_50 = (int *)FUN_10091ec2(local_54);
  local_8 = 0xffffffff;
  pcVar2 = *(code **)(*piVar1 + 8);
  (*(code *)PTR_guard_check_icall_1035d810)();
  puVar3 = (undefined4 *)(*pcVar2)();
  if (puVar3 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar3;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar2)();
  }
  pcVar2 = *(code **)(*local_50 + 0x2c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789-","0123456789ABCDEFabcdef-+Xx",local_2c);
  (*pcVar2)();
  pppuVar13 = local_48;
  ppppuVar10 = (undefined4 ****)0x0;
  uVar9 = (uint)local_50 >> 8;
  local_50 = (int *)((uint)local_50 & 0xffffff00);
  local_4c = (undefined4 ****)0x0;
  ppppuVar6 = *(undefined4 *****)((int)local_48 + 0x10);
  if (ppppuVar6 != (undefined4 ****)0x0) {
    if (7 < *(uint *)((int)local_48 + 0x14)) {
      local_48 = (undefined4 ***)*local_48;
    }
    if (*(short *)local_48 == local_18) {
      ppppuVar10 = (undefined4 ****)0x1;
      local_50 = (int *)CONCAT31((int3)uVar9,1);
      local_4c = (undefined4 ****)0x1;
    }
  }
  ppppuVar11 = ppppuVar10;
  local_48 = ppppuVar6;
  if (ppppuVar10 < ppppuVar6) {
    do {
      pppuVar4 = pppuVar13;
      if (7 < *(uint *)((int)pppuVar13 + 0x14)) {
        pppuVar4 = (undefined4 ***)*pppuVar13;
      }
      iVar5 = FUN_102299a0(local_2c,local_16,*(short *)((int)pppuVar4 + ppppuVar10 * 2));
      ppppuVar11 = (undefined4 ****)local_4c;
    } while (((uint)(iVar5 - (int)local_2c >> 1) < 10) &&
            (ppppuVar10 = (undefined4 ****)((int)ppppuVar10 + 1), ppppuVar10 < local_48));
  }
  if (7 < *(uint *)((int)pppuVar13 + 0x14)) {
    pppuVar13 = (undefined4 ***)*pppuVar13;
  }
  local_34 = 0;
  local_30 = 0;
  local_44 = (undefined4 ****)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_10001338((short *)((int)pppuVar13 + ppppuVar11 * 2),(int)ppppuVar10 - (int)ppppuVar11);
  local_8 = 1;
  if (local_34 == 0) {
    local_4c = (undefined4 ***)(local_2c[0] & 0xffff);
    if (local_30 == 0) {
      local_58 = 7;
      local_48 = (undefined4 ***)FUN_10001406(&local_44,&local_58);
      if ((7 < local_30) && (DAT_103235d4 != '\0')) {
        puVar14 = (undefined2 *)((int)local_44 + (local_30 + 1) * 2);
        puVar7 = (undefined2 *)((int)local_44 + local_34 * 2 + 2);
        puVar12 = (undefined2 *)((int)puVar14 + 7U & 0xfffffff8);
        puVar8 = puVar12;
        if (puVar7 <= puVar12) {
          puVar8 = puVar7;
        }
        if (puVar12 < puVar14) {
          puVar14 = puVar12;
        }
        guard_check_icall(local_44,puVar12,puVar8,puVar14);
      }
      *(short *)local_48 = (short)local_4c;
      *(undefined2 *)((int)local_48 + 2) = 0;
      local_30 = local_58;
      local_34 = 1;
      local_44 = local_48;
      if ((7 < local_58) && (DAT_103235d4 != '\0')) {
        ppppuVar6 = (undefined4 ****)((int)local_48 + (local_58 + 1) * 2);
        ppppuVar11 = (undefined4 ****)((int)ppppuVar6 + 7U & 0xfffffff8);
        ppppuVar10 = ppppuVar11;
        if (ppppuVar6 <= ppppuVar11) {
          ppppuVar10 = ppppuVar6;
        }
        ppppuVar6 = (undefined4 ****)(local_48 + 1);
        if (ppppuVar11 < local_48 + 1) {
          ppppuVar6 = ppppuVar11;
        }
        guard_check_icall(local_48,ppppuVar11,ppppuVar10,ppppuVar6);
      }
    }
    else {
      if ((7 < local_30) && (DAT_103235d4 != '\0')) {
        ppppuVar10 = (undefined4 ****)(local_30 * 2 + 9 + (int)local_44 & 0xfffffff8);
        ppppuVar6 = ppppuVar10;
        if ((undefined4 ****)((int)local_44 + 2U) <= ppppuVar10) {
          ppppuVar6 = (undefined4 ****)((int)local_44 + 2U);
        }
        ppppuVar11 = (undefined4 ****)(local_44 + 1);
        if (ppppuVar10 < local_44 + 1) {
          ppppuVar11 = ppppuVar10;
        }
        guard_check_icall(local_44,ppppuVar10,ppppuVar6,ppppuVar11);
      }
      local_34 = 1;
      ppppuVar6 = &local_44;
      if (7 < local_30) {
        ppppuVar6 = (undefined4 ****)local_44;
      }
      *(short *)ppppuVar6 = (short)local_4c;
      *(undefined2 *)((int)ppppuVar6 + 2) = 0;
    }
  }
  FUN_10003728(&local_44);
  FUN_1023db80(param_1,param_2,param_3,param_4,param_5,param_6,local_50);
  if (7 < local_30) {
    if (DAT_103235d4 != '\0') {
      puVar14 = (undefined2 *)((int)local_44 + (local_30 + 1) * 2);
      puVar12 = (undefined2 *)((int)puVar14 + 7U & 0xfffffff8);
      puVar8 = (undefined2 *)((int)local_44 + (local_34 + 1) * 2);
      puVar7 = puVar12;
      if (puVar8 <= puVar12) {
        puVar7 = puVar8;
      }
      if (puVar12 < puVar14) {
        puVar14 = puVar12;
      }
      guard_check_icall(local_44,puVar12,puVar7,puVar14);
    }
    uVar9 = local_30 * 2 + 2;
    ppppuVar6 = (undefined4 ****)local_44;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined4 ****)local_44[-1];
      uVar9 = local_30 * 2 + 0x25;
      if (0x1f < (uint)((int)local_44 + (-4 - (int)ppppuVar6))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FUN_102283a0(ppppuVar6,uVar9);
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

