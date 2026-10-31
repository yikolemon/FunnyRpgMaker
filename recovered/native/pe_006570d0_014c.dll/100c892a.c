/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c892a */

undefined4 * FUN_100c892a(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc280;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  piVar1 = &local_24;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) {
    FUN_1022c0d0(&DAT_1039c928);
    piVar1 = (int *)local_20;
    if (DAT_1039c928 == -1) {
      local_14 = 0;
      FUN_10021a06();
      FUN_1022c3a0(&LAB_1002210b);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039c928);
      piVar1 = (int *)local_20;
    }
  }
  local_20 = (undefined1 *)piVar1;
  FUN_100446d6();
  local_14 = 1;
  FUN_1006292c(&local_24,param_2);
  if (local_24 == DAT_1039c894) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (*(int *)(local_24 + 0x24) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(local_24 + 0x24) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar2 = *(undefined4 *)(local_24 + 0x24);
    }
    *param_1 = *(undefined4 *)(local_24 + 0x20);
    param_1[1] = uVar2;
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039c800);
  ExceptionList = local_1c;
  return param_1;
}

