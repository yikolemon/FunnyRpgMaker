/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003e176 */

undefined8 *
FUN_14003e176(undefined8 param_1,undefined8 *param_2,int param_3,undefined1 param_4,
             undefined1 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 unaff_RBX;
  undefined1 local_2e0 [648];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_40;
  longlong *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  local_30 = param_2;
  FUN_14004289a(&local_40,param_2);
  if (local_38 == (longlong *)0x0) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plStack_50 = local_38;
  }
  local_58 = local_40;
  FUN_14004291c(local_2e0,&local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff
                ,param_6);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 8))(local_38);
      }
    }
  }
  if (param_3 < 0) {
    FUN_140042b02(local_2e0,param_1,0,param_5,0,0);
  }
  else {
    FUN_140042b02(local_2e0,param_1,1,param_5,param_3,0);
  }
  FUN_1400434ae(local_2e0);
  return local_30;
}

