/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247670 */

void FUN_180247670(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)();
    LOCK();
    piVar1 = (int *)(param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_18038bc80)(param_1);
    }
  }
  return;
}

