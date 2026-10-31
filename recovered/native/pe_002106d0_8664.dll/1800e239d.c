/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e239d */

void FUN_1800e239d(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 local_28 [8];
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1800e24c8(local_28,param_1);
  FUN_180022ada(&DAT_180418890,local_28);
  plVar3 = (longlong *)CONCAT44(uStack_1c,local_20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  FUN_1800e25ac(&DAT_180418b98);
  cVar4 = (**(code **)(*DAT_180418890 + 0x18))();
  DAT_180402a00 = 1;
  if (cVar4 != '\0') {
    DAT_180402a00 = DAT_180418ba0 ^ 1;
  }
  FUN_180021d02(local_28,FUN_1800e2e9f);
  FUN_180021bf6(local_28);
  if (local_20 == 0) {
    if (DAT_180402a00 == 1) {
      FUN_180187447(FUN_1800e2eee,1);
    }
    else {
      FUN_18018748a(FUN_1800e2eee);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

