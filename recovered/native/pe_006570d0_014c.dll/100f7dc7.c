/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7dc7 */

DWORD FUN_100f7dc7(HANDLE param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f89b0;
  local_18 = ExceptionList;
  DVar3 = DAT_1039d6d0;
  if (DAT_1039d6d0 == 0) {
    ExceptionList = &local_18;
    pvVar1 = GetCurrentThread();
    DVar3 = 0;
    if (param_1 != pvVar1) {
      local_20 = (undefined4 *)FUN_10228350(8);
      local_10 = 0xffffffff;
      DVar2 = SuspendThread(param_1);
      if (DVar2 == 0xffffffff) {
        DVar3 = GetLastError();
        local_10 = 0xffffffff;
        FUN_102283a0(local_20,8);
        DAT_1039d6cc = 0;
        DAT_1039d6d0 = DVar3;
      }
      else {
        local_20[1] = param_1;
        *local_20 = DAT_1039d6c8;
        DAT_1039d6c8 = local_20;
      }
    }
  }
  ExceptionList = local_18;
  return DVar3;
}

