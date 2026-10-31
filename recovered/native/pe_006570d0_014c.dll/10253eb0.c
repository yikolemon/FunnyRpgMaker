/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10253eb0 */

void __thiscall
FUN_10253eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,char *param_8)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  uint uVar9;
  int local_48;
  undefined1 local_44 [4];
  int *local_40;
  int *local_3c;
  undefined4 ******local_38 [4];
  int local_28;
  uint local_24;
  undefined4 local_20 [2];
  char local_16;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a425;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_40 = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar2)();
  local_8 = 0;
  local_3c = (int *)FUN_1001c23e(local_44);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar5 = (undefined4 *)(*pcVar2)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
    }
  }
  pcVar2 = *(code **)(*local_3c + 0x1c);
  (*(code *)PTR_guard_check_icall_1035d810)("0123456789-","0123456789-",local_20);
  (*pcVar2)();
  uVar3 = *(uint *)(param_8 + 0x10);
  uVar9 = 0;
  uVar4 = (uint)local_3c >> 8;
  local_3c = (int *)((uint)local_3c & 0xffffff00);
  local_48 = 0;
  if (uVar3 != 0) {
    pcVar6 = param_8;
    if (0xf < *(uint *)(param_8 + 0x14)) {
      pcVar6 = *(char **)param_8;
    }
    if (*pcVar6 == local_16) {
      uVar9 = 1;
      local_3c = (int *)CONCAT31((int3)uVar4,1);
      local_48 = 1;
    }
  }
  for (; uVar9 < uVar3; uVar9 = uVar9 + 1) {
    pcVar6 = param_8;
    if (0xf < *(uint *)(param_8 + 0x14)) {
      pcVar6 = *(char **)param_8;
    }
    local_40._1_3_ = (undefined3)((uint)local_40 >> 8);
    local_40 = (int *)CONCAT31(local_40._1_3_,pcVar6[uVar9]);
    iVar7 = FUN_102298a0(local_20,&local_15,local_40);
    if (9 < (uint)(iVar7 - (int)local_20)) break;
  }
  if (0xf < *(uint *)(param_8 + 0x14)) {
    param_8 = *(char **)param_8;
  }
  FUN_10233010(param_8 + local_48,uVar9 - local_48);
  local_8 = 1;
  if (local_28 == 0) {
    local_40 = (int *)CONCAT31(local_40._1_3_,(undefined1)local_20[0]);
    if (local_24 == 0) {
      FUN_10232b40(1,param_1,local_40);
    }
    else {
      FUN_1022d270(0,1);
      local_28 = 1;
      pppppppuVar8 = local_38;
      if (0xf < local_24) {
        pppppppuVar8 = (undefined4 *******)local_38[0];
      }
      *(undefined1 *)pppppppuVar8 = (undefined1)local_20[0];
      *(undefined1 *)((int)pppppppuVar8 + 1) = 0;
    }
  }
  FUN_1000334a(local_38);
  FUN_102540a0(param_2,param_3,param_4,param_5,param_6,param_7,local_3c);
  FUN_10004e60();
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

