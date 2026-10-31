/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022f900 */

void FUN_1022f900(int *param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                 uint *param_7,double *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  char local_340;
  undefined8 local_33c;
  double *local_334;
  undefined1 *local_330;
  undefined1 local_32c [792];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_7;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288bf0;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_334 = param_8;
  piVar8 = *(int **)(*(int *)(param_6 + 0x30) + 4);
  local_33c = (double)CONCAT44(piVar8,(undefined4)local_33c);
  pcVar1 = *(code **)(*piVar8 + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar5 = FUN_10230db0(local_32c,0x300,&param_2,&param_4,&local_33c);
  puVar6 = (undefined1 *)(uVar5 & 0xffff);
  local_8 = 0xffffffff;
  local_330 = puVar6;
  if (local_33c._4_4_ != (int *)0x0) {
    pcVar1 = *(code **)(*local_33c._4_4_ + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar7 = (undefined4 *)(*pcVar1)();
    if (puVar7 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar7;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  if ((char)local_330 == '\0') {
    *puVar4 = 2;
    *local_334 = 0.0;
  }
  else {
    piVar8 = (int *)FUN_10268ffd();
    iVar2 = *piVar8;
    *piVar8 = 0;
    fVar9 = (float10)FUN_1027093b(local_32c,&local_330);
    iVar3 = *piVar8;
    local_33c = (double)fVar9;
    *piVar8 = iVar2;
    *local_334 = local_33c;
    if (((local_330 == local_32c) || (iVar3 != 0)) ||
       (local_340 = (char)((uint)puVar6 >> 8), local_340 != '\0')) {
      *puVar4 = 2;
    }
  }
  if ((char)param_3 == '\0') {
    FUN_100e1fa2();
  }
  if (param_5 == '\0') {
    FUN_100e1fa2();
  }
  if (param_2 == 0) {
    if (param_4 != 0) goto LAB_1022fa8b;
  }
  else if (param_4 == 0) goto LAB_1022fa8b;
  *puVar4 = *puVar4 | 1;
LAB_1022fa8b:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

