/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497bf6 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00497bf6(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x350) & DAT_0051b640) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
    ___acrt_lock(5);
    piVar2 = *(int **)(param_1 + 0x48);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_0051b118)) {
          FUN_00495f00(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x48) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_00497c75();
  }
  else {
    piVar2 = *(int **)(param_1 + 0x48);
  }
  if (piVar2 != (int *)0x0) {
    FUN_00497c7e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

