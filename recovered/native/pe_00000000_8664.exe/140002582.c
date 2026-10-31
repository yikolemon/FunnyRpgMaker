/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002582 */

void FUN_140002582(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140002673();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_1401c5180(param_1,param_2,param_3 * 2);
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
    lVar1 = FUN_140002684(param_1,&local_38);
    *param_1 = lVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_1401c5180(lVar1,param_2,param_3 * 2);
    *(undefined2 *)(lVar1 + param_3 * 2) = 0;
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

