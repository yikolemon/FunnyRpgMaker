/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e74d */

void FUN_1025e74d(undefined4 *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)*param_1 + -1;
  *(int *)*param_1 = iVar1;
  UNLOCK();
  if ((iVar1 == 0) && ((undefined *)*param_1 != &DAT_1039b6b0)) {
    FUN_10274120(*param_1);
    *param_1 = &DAT_1039b6b0;
  }
  return;
}

