/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027693f */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_1027693f(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x350) & DAT_1039bbd0) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    ___acrt_lock(5);
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_1039b6b0)) {
          FUN_10274120(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x48) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_102769be();
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
  }
  if (piVar2 != (int *)0x0) {
    FUN_102769c7();
    return;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

