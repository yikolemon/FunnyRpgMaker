/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f56b4 */

void FUN_1800f56b4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)FUN_1800188ac(lVar1);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      thunk_FUN_1802464a0(lVar1,0x20);
      return;
    }
  }
  return;
}

