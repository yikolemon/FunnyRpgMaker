/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247fa0 */

void FUN_10247fa0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint *param_7,int param_8)

{
  int *piVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10289ecd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 4);
  local_14 = piVar1;
  (*(code *)PTR_guard_check_icall_1035d810)(DAT_10388d00 ^ (uint)&stack0xfffffffc);
  (*pcVar2)();
  local_8 = 0;
  piVar5 = (int *)FUN_10240a50(local_18);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar6 = (undefined4 *)(*pcVar2)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar6;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar2)();
    }
  }
  uVar7 = FUN_10249cf0(&param_2,&param_4,0,0x17,param_8 + 8,&local_14,piVar5);
  puVar3 = param_7;
  *param_7 = *param_7 | uVar7;
  if (*param_7 == 0) {
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    pcVar2 = *(code **)(*piVar5 + 0x38);
    (*(code *)PTR_guard_check_icall_1035d810)(param_3 >> 0x10,0);
    cVar4 = (*pcVar2)();
    if (cVar4 != ':') goto LAB_102480a8;
    uVar8 = FUN_1023b050();
    uVar7 = FUN_10249cf0(uVar8,&param_4,0,0x3b,param_8 + 4,&local_14,piVar5);
    *puVar3 = *puVar3 | uVar7;
  }
  else {
LAB_102480a8:
    *puVar3 = *puVar3 | 2;
  }
  if (*puVar3 == 0) {
    if ((char)param_3 == '\0') {
      FUN_1023b0c0();
    }
    pcVar2 = *(code **)(*piVar5 + 0x38);
    (*(code *)PTR_guard_check_icall_1035d810)(param_3 >> 0x10,0);
    cVar4 = (*pcVar2)();
    if (cVar4 == ':') {
      uVar8 = FUN_1023b050();
      uVar7 = FUN_10249cf0(uVar8,&param_4,0,0x3c,param_8,&local_14,piVar5);
      *puVar3 = *puVar3 | uVar7;
      goto LAB_10248102;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_10248102:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
  return;
}

