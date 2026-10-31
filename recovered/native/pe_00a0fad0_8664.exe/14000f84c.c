/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000f84c */

void FUN_14000f84c(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_140135ff0(param_1,param_2,param_3 * 2);
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
    lVar1 = FUN_140008b48(param_1,&local_38);
    *param_1 = lVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_140135ff0(lVar1,param_2,param_3 * 2);
    *(undefined2 *)(lVar1 + param_3 * 2) = 0;
  }
  if (DAT_1401c9640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_58);
}

