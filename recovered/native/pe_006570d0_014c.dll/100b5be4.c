/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5be4 */

undefined4 * __thiscall FUN_100b5be4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c49b0;
  local_1c = ExceptionList;
  if (param_1 != param_2) {
    local_14 = 0;
    ExceptionList = &local_1c;
    *param_1 = *param_2;
    local_28 = param_1;
    local_24 = param_1;
    FUN_100b5c8e(*(undefined4 *)param_2[1],(undefined4 *)param_2[1]);
    local_24 = local_28;
    FUN_100b5d7c();
    param_1 = local_28;
  }
  ExceptionList = local_1c;
  return param_1;
}

