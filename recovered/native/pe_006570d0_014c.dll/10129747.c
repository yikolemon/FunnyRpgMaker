/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129747 */

void FUN_10129747(int param_1)

{
  undefined1 **ppuVar1;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_1012cba0;
  local_14 = ExceptionList;
  if (param_1 != 0) {
    local_c = 0xffffffff;
    ExceptionList = &local_14;
    ppuVar1 = &local_18;
    if (*(int *)(param_1 + 0xa0) != 0) {
      FUN_100fa2cb(*(int *)(param_1 + 0xa0));
      ppuVar1 = (undefined1 **)local_18;
    }
    local_18 = (undefined1 *)ppuVar1;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_100fa2cb(*(int *)(param_1 + 0xc));
    }
    FUN_100fa2cb(param_1);
    ExceptionList = local_14;
  }
  return;
}

