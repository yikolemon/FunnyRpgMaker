/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10240060 */

void FUN_10240060(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint *param_7,int param_8)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 local_1c [4];
  int *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028969d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_18 = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar2)();
  local_8 = 0;
  uVar3 = FUN_10091ec2(local_1c);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar4 = (undefined4 *)(*pcVar2)();
    if (puVar4 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar4;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
    }
  }
  local_14 = 0;
  uVar5 = FUN_10249cf0(&param_2,&param_4,0,9999,&local_14,&local_18,uVar3);
  *param_7 = *param_7 | uVar5;
  if ((uVar5 & 2) == 0) {
    if ((int)local_18 < 3) {
      if (local_14 < 0x45) {
        local_14 = local_14 + 100;
      }
      else if (99 < local_14) goto LAB_10240144;
    }
    else {
      local_14 = local_14 + -0x76c;
    }
    *(int *)(param_8 + 0x14) = local_14;
  }
LAB_10240144:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

