/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102358c0 */

undefined4 * __thiscall FUN_102358c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1028900d;
  local_10 = ExceptionList;
  uVar6 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  piVar3 = (int *)param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  local_8 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      (*(code *)PTR_guard_check_icall_1035d810)(uVar6);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar4)();
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

