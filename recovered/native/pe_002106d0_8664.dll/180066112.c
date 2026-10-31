/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180066112 */

void FUN_180066112(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  if (param_3 < 4) {
    param_1[2] = param_3;
    param_1[3] = 3;
    FUN_1802a82f0(param_1,param_2,param_3 * 4);
    *(undefined4 *)((longlong)param_1 + param_3 * 4) = 0;
  }
  else {
    local_38 = param_3 | 3;
    if (0x3ffffffffffffffd < local_38) {
      local_38 = 0x3ffffffffffffffe;
    }
    lVar1 = FUN_18006364e(param_1,&local_38);
    *param_1 = lVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_1802a82f0(lVar1,param_2,param_3 * 4);
    *(undefined4 *)(lVar1 + param_3 * 4) = 0;
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

