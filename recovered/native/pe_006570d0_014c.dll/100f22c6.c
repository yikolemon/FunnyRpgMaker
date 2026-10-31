/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f22c6 */

int * FUN_100f22c6(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_c = 0xffffffff;
  local_10 = &LAB_100f5540;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar2 = (int *)FUN_100f2f34();
  iVar1 = *piVar2;
  *param_1 = iVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  ExceptionList = local_14;
  return param_1;
}

