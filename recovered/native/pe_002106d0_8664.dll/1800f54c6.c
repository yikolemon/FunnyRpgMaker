/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f54c6 */

void FUN_1800f54c6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    puVar3 = (uint *)FUN_1800188ac(lVar2 + 4);
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - 2;
    UNLOCK();
    if ((uVar1 & 0xfffffffe) == 2) {
      piVar4 = (int *)FUN_1800188ac(lVar2);
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        thunk_FUN_1802464a0(lVar2,0x20);
        return;
      }
    }
  }
  return;
}

