/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7d76 */

void __thiscall FUN_100b7d76(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4b00;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_34;
    local_30 = (*DAT_1039c960)(param_2 * 4,1);
    *param_1 = local_30;
    param_1[1] = local_30;
    param_1[2] = local_30 + param_2 * 4;
    local_14 = 0;
    local_2c = *param_4;
    local_28 = *param_3;
    local_34 = param_1;
    local_24 = param_1;
    thunk_FUN_100185ef(local_28,local_2c,local_30);
    local_34[1] = local_30 + (local_2c - local_28);
  }
  ExceptionList = local_1c;
  return;
}

