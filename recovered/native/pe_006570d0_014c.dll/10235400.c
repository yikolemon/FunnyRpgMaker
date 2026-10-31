/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235400 */

int FUN_10235400(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1028900d;
  local_10 = ExceptionList;
  uVar5 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar3 = param_2[1];
  iVar6 = *param_1;
  piVar1 = (int *)param_1[1];
  *param_1 = *param_2;
  param_1[1] = iVar3;
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    piVar2 = piVar1 + 1;
    iVar3 = *piVar2;
    iVar6 = *piVar2;
    *piVar2 = iVar3 + -1;
    UNLOCK();
    if (iVar3 + -1 == 0) {
      pcVar4 = *(code **)*piVar1;
      (*(code *)PTR_guard_check_icall_1035d810)(uVar5);
      iVar6 = (*pcVar4)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar4 = *(code **)(*piVar1 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        iVar6 = (*pcVar4)();
      }
    }
  }
  ExceptionList = local_10;
  return iVar6;
}

