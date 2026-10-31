/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242260 */

void __thiscall
FUN_10242260(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            ushort param_6,char param_7)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [4];
  int *local_4c;
  int *local_48;
  undefined1 local_44 [24];
  undefined4 ***local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a045;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (uint)param_6;
  local_58 = param_2;
  local_5c = param_5;
  local_48 = param_1;
  if ((*(uint *)(param_5 + 0x14) & 0x4000) == 0) {
    pcVar11 = *(code **)(*param_1 + 0x24);
    (*(code *)PTR_guard_check_icall_1035d810)(param_2,param_3,param_4,param_5,local_54,param_7);
    (*pcVar11)();
  }
  else {
    piVar2 = *(int **)(*(int *)(param_5 + 0x30) + 4);
    pcVar11 = *(code **)(*piVar2 + 4);
    local_4c = piVar2;
    (*(code *)PTR_guard_check_icall_1035d810)(local_14);
    (*pcVar11)();
    local_8 = 0;
    local_4c = (int *)FUN_10243830(local_50);
    pcVar11 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar6 = (undefined4 *)(*pcVar11)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar11 = *(code **)*puVar6;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar11)();
    }
    local_1c = 0;
    local_18 = 7;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_2c = (undefined4 ****)0x0;
    local_8 = 1;
    if (param_7 == '\0') {
      pcVar11 = *(code **)(*local_4c + 0x18);
    }
    else {
      pcVar11 = *(code **)(*local_4c + 0x1c);
    }
    (*(code *)PTR_guard_check_icall_1035d810)(local_44);
    (*pcVar11)();
    FUN_10247300(local_44);
    FUN_102363f0();
    iVar5 = local_5c;
    uVar9 = *(uint *)(local_5c + 0x20);
    if ((*(int *)(local_5c + 0x24) < 0) ||
       (((*(int *)(local_5c + 0x24) < 1 && (uVar9 == 0)) || (uVar9 <= local_1c)))) {
      iVar12 = 0;
    }
    else {
      iVar12 = uVar9 - local_1c;
    }
    if ((*(uint *)(local_5c + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (undefined4 *)FUN_10243420(local_48,local_60,param_3,param_4,local_54,iVar12);
      iVar12 = 0;
      param_3 = *puVar6;
      param_4 = puVar6[1];
    }
    ppppuVar7 = &local_2c;
    if (7 < local_18) {
      ppppuVar7 = (undefined4 ****)local_2c;
    }
    local_4c = (int *)param_4;
    puVar6 = (undefined4 *)FUN_10243390(local_48,local_60,param_3,param_4,ppppuVar7,local_1c);
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    FUN_10243420(local_48,local_58,uVar3,uVar4,local_54,iVar12);
    if (7 < local_18) {
      if (DAT_103235d4 != '\0') {
        uVar9 = (int)local_2c + (local_18 + 1) * 2;
        uVar10 = uVar9 + 7 & 0xfffffff8;
        uVar1 = (int)local_2c + (local_1c + 1) * 2;
        uVar8 = uVar10;
        if (uVar1 <= uVar10) {
          uVar8 = uVar1;
        }
        if (uVar10 < uVar9) {
          uVar9 = uVar10;
        }
        guard_check_icall(local_2c,uVar10,uVar8,uVar9);
      }
      uVar9 = local_18 * 2 + 2;
      ppppuVar7 = (undefined4 ****)local_2c;
      if (0xfff < uVar9) {
        ppppuVar7 = (undefined4 ****)local_2c[-1];
        uVar9 = local_18 * 2 + 0x25;
        if (0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar7))) {
          pcVar11 = (code *)swi(0x29);
          (*pcVar11)();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FUN_102283a0(ppppuVar7,uVar9);
    }
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

