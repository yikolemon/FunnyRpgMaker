/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016f89c */

longlong * FUN_18016f89c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 local_50 [32];
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_1804193d0) {
    FUN_18023d500(&DAT_1804193d0);
    if (DAT_1804193d0 == -1) {
      FUN_18023d710(&LAB_18016fa26);
      _Init_thread_footer(&DAT_1804193d0);
    }
  }
  if (DAT_1804193c0 == 0) {
    FUN_180001e92(local_50,&DAT_18036d119);
    FUN_18016fa32(local_30,local_50);
    FUN_180022ada(&DAT_1804193c0,local_30);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 8))(local_28);
        }
      }
    }
    FUN_180001ef2(local_50);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_1804193c8 == 0) {
    lVar3 = 0;
  }
  else {
    LOCK();
    *(int *)(DAT_1804193c8 + 8) = *(int *)(DAT_1804193c8 + 8) + 1;
    UNLOCK();
    lVar3 = DAT_1804193c8;
  }
  *param_1 = DAT_1804193c0;
  param_1[1] = lVar3;
  return param_1;
}

