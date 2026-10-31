/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006bb6c */

undefined4 FUN_18006bb6c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_2b0 [32];
  undefined8 local_290;
  char local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_1c = param_3;
  FUN_18006bcb6(local_2b0);
  if (local_38 == '\x01') {
    FUN_18006bd7b(local_30,local_2b0,&local_1c);
    FUN_180022ada(param_1,local_30);
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
  }
  FUN_18023a230(local_290);
  FUN_180001e4c(local_2b0);
  return local_34;
}

