/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800012b4 */

void FUN_1800012b4(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_1802a82f0(param_1,param_2,param_3 * 2);
    *(undefined2 *)((longlong)param_1 + param_3 * 2) = 0;
  }
  else {
    local_38 = 10;
    if (10 < (param_3 | 7)) {
      local_38 = param_3 | 7;
    }
    if (0x7ffffffffffffffd < local_38) {
      local_38 = 0x7ffffffffffffffe;
    }
    lVar1 = FUN_1800013b6(param_1,&local_38);
    *param_1 = lVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_1802a82f0(lVar1,param_2,param_3 * 2);
    *(undefined2 *)(lVar1 + param_3 * 2) = 0;
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

