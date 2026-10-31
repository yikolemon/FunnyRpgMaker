/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000477c */

void FUN_14000477c(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    FUN_1400b3550(param_1,param_2,param_3 * 2);
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
    puVar1 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_38);
    *param_1 = puVar1;
    param_1[2] = param_3;
    param_1[3] = local_38;
    FUN_1400b3550(puVar1,param_2,param_3 * 2);
    *(undefined2 *)((longlong)puVar1 + param_3 * 2) = 0;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

