/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1bb3 */

undefined4 FUN_100e1bb3(void)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea980;
  local_1c = ExceptionList;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) {
    ExceptionList = &local_1c;
    FUN_1022c0d0(&DAT_1039c928);
    if (DAT_1039c928 == -1) {
      local_14 = 0;
      FUN_10021a06();
      FUN_1022c3a0(&LAB_1002210b);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039c928);
    }
  }
  ExceptionList = local_1c;
  return DAT_1039c914;
}

