/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aa190 */

void FUN_1400aa190(longlong *param_1,undefined2 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        *(undefined2 *)((longlong)param_1 + uVar1 * 2) = param_2;
        uVar1 = uVar1 + 1;
      } while (param_3 != uVar1);
    }
    *(undefined2 *)((longlong)param_1 + param_3 * 2) = 0;
  }
  else {
    local_30 = 10;
    if (10 < (param_3 | 7)) {
      local_30 = param_3 | 7;
    }
    if (0x7ffffffffffffffd < local_30) {
      local_30 = 0x7ffffffffffffffe;
    }
    lVar2 = FUN_140008b48(param_1,&local_30);
    *param_1 = lVar2;
    param_1[2] = param_3;
    param_1[3] = local_30;
    uVar1 = 0;
    do {
      *(undefined2 *)(lVar2 + uVar1 * 2) = param_2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    *(undefined2 *)(lVar2 + param_3 * 2) = 0;
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

