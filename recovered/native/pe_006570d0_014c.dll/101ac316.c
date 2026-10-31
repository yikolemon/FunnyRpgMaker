/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac316 */

void FUN_101ac316(int param_1)

{
  undefined1 **ppuVar1;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_101bcf00;
  local_14 = ExceptionList;
  if (param_1 != 0) {
    local_c = 0xffffffff;
    ExceptionList = &local_14;
    ppuVar1 = &local_18;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_100fa2cb(*(int *)(param_1 + 0x2c));
      ppuVar1 = (undefined1 **)local_18;
    }
    local_18 = (undefined1 *)ppuVar1;
    FUN_100fa2cb(param_1);
    ExceptionList = local_14;
  }
  return;
}

