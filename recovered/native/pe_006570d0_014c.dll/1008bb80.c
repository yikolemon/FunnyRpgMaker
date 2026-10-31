/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008bb80 */

int FUN_1008bb80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_38;
  int local_34;
  int local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3610;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (DAT_1039cbc8 == '\x01') {
    local_20 = (undefined1 *)&local_38;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      local_20 = (undefined1 *)&local_38;
      FUN_1022c0d0(&DAT_1039cc24);
      if (DAT_1039cc24 == -1) {
        local_14 = 0;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_10080db4);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc24);
      }
    }
    piVar1 = param_1 + 4;
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    FUN_1007671c(&local_38,param_1,(int)param_1 + *piVar1 * 2);
    local_14 = 0xffffffff;
    iVar2 = local_28 + 1;
    FUN_10001fee();
  }
  else {
    FUN_1008ba7e(&local_38,param_1);
    local_14 = 0xffffffff;
    iVar2 = local_34 - local_38;
    FUN_10004eae();
  }
  ExceptionList = local_1c;
  return iVar2;
}

