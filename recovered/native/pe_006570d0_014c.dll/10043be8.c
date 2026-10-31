/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043be8 */

void FUN_10043be8(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1005a5a0;
  local_1c = ExceptionList;
  if (param_1 != (undefined1 *)0x0) {
    local_14 = 0;
    ExceptionList = &local_1c;
    ppuVar1 = &local_24;
    if (*(int *)(param_1 + 8) != 0) {
      local_24 = param_1 + 0xc;
      FUN_100446d6();
      *param_1 = 0;
      local_14 = 0xffffffff;
      FUN_1022c200(local_24);
      FUN_1022c7c0(param_1 + 0x3c);
      local_14 = 0;
      FUN_10043d14();
      ppuVar1 = (undefined1 **)local_20;
    }
    local_20 = (undefined1 *)ppuVar1;
    local_14 = 0xffffffff;
    if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
    FUN_102283a0(param_1,100);
    ExceptionList = local_1c;
  }
  return;
}

