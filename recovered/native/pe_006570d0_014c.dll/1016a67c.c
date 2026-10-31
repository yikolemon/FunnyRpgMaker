/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016a67c */

void FUN_1016a67c(int *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_40 [24];
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180080;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  puVar2 = local_40;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d8b0) {
    FUN_1022c0d0(&DAT_1039d8b0);
    puVar2 = local_20;
    if (DAT_1039d8b0 == -1) {
      local_14 = 0;
      FUN_1022c3a0(&LAB_1016a80a);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039d8b0);
      puVar2 = local_20;
    }
  }
  local_20 = puVar2;
  if (DAT_1039d8a8 == 0) {
    FUN_10001f66(&DAT_1033cffa);
    local_14 = 1;
    FUN_1016a814(local_28,local_40);
    local_14 = 2;
    FUN_1002265a(local_28);
    local_14 = 0xffffffff;
    if (local_24 != (int *)0x0) {
      LOCK();
      piVar1 = local_24 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_24)();
        LOCK();
        piVar1 = local_24 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_24 + 4))();
        }
      }
    }
    FUN_10001fee();
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  if (DAT_1039d8ac != 0) {
    LOCK();
    *(int *)(DAT_1039d8ac + 4) = *(int *)(DAT_1039d8ac + 4) + 1;
    UNLOCK();
    iVar3 = DAT_1039d8ac;
  }
  *param_1 = DAT_1039d8a8;
  param_1[1] = iVar3;
  ExceptionList = local_1c;
  return;
}

