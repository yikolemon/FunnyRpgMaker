/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022fac0 */

void FUN_1022fac0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 uint *param_7,double *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  char local_34c;
  int local_348;
  int local_344;
  int local_340;
  undefined4 local_33c;
  undefined8 local_338;
  undefined1 *local_330;
  undefined1 local_32c [792];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288c30;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_340 = param_4;
  local_348 = param_2;
  local_33c = param_5;
  local_344 = param_3;
  local_338._4_4_ = *(int **)(*(int *)(param_6 + 0x30) + 4);
  pcVar1 = *(code **)(*local_338._4_4_ + 4);
  (*(code *)PTR_guard_check_icall_1035d810)(local_14);
  (*pcVar1)();
  local_8 = 0;
  uVar4 = FUN_10230db0(local_32c,0x300,&local_348,&local_340,&local_338);
  puVar5 = (undefined1 *)(uVar4 & 0xffff);
  local_8 = 0xffffffff;
  local_330 = puVar5;
  if (local_338._4_4_ != (int *)0x0) {
    pcVar1 = *(code **)(*local_338._4_4_ + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar6 = (undefined4 *)(*pcVar1)();
    if (puVar6 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar6;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  if ((char)local_330 == '\0') {
    local_338 = 0.0;
LAB_1022fc32:
    *param_7 = 2;
  }
  else {
    piVar7 = (int *)FUN_10268ffd();
    iVar2 = *piVar7;
    *piVar7 = 0;
    fVar8 = (float10)FUN_1027093b(local_32c,&local_330);
    iVar3 = *piVar7;
    local_338 = (double)fVar8;
    *piVar7 = iVar2;
    if (((local_330 == local_32c) || (iVar3 != 0)) ||
       (local_34c = (char)((uint)puVar5 >> 8), local_34c != '\0')) goto LAB_1022fc32;
  }
  if ((char)local_344 == '\0') {
    FUN_100e1fa2();
  }
  if ((char)local_33c == '\0') {
    FUN_100e1fa2();
  }
  if (local_348 == 0) {
    if (local_340 != 0) goto LAB_1022fc80;
  }
  else if (local_340 == 0) goto LAB_1022fc80;
  *param_7 = *param_7 | 1;
LAB_1022fc80:
  *param_8 = local_338;
  *param_1 = local_348;
  param_1[1] = local_344;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

