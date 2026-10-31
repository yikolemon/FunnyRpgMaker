/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004965f9 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_004965f9(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  void *local_14;
  
  ___acrt_lock(*param_1);
  piVar2 = *(int **)(*(int *)*param_2 + 0x48);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if ((iVar1 + -1 == 0) && (piVar2 != (int *)&DAT_0051b118)) {
      FUN_00495f00(piVar2);
    }
  }
  FUN_00496658();
  ExceptionList = local_14;
  return;
}

