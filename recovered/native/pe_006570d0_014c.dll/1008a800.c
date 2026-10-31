/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a800 */

undefined4 * __thiscall FUN_1008a800(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3570;
  local_1c = ExceptionList;
  local_28 = param_1 + 0x10;
  ExceptionList = &local_1c;
  local_2c = FUN_10077b66();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_14 = 0;
  for (local_30 = 0; local_30 < local_2c; local_30 = local_30 + 1) {
    local_21 = FUN_10077c4c();
    puVar1 = (undefined1 *)param_2[1];
    if (puVar1 == (undefined1 *)param_2[2]) {
      FUN_1004cf34(puVar1,&local_21);
    }
    else {
      *puVar1 = local_21;
      param_2[1] = param_2[1] + 1;
    }
  }
  ExceptionList = local_1c;
  return param_2;
}

