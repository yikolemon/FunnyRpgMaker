/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009b73a */

void __thiscall FUN_1009b73a(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3d30;
  local_18 = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_18;
    if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_1c = local_20;
    FUN_1006de1e(param_2);
    puVar1 = (undefined4 *)*param_1;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 7;
      puVar1 = puVar1 + 6;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = puVar1;
  }
  ExceptionList = local_18;
  return;
}

