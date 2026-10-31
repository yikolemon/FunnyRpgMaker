/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003cc6 */

void FUN_140003cc6(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_14000263f();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    local_30 = 10;
    if (10 < (param_3 | 7)) {
      local_30 = param_3 | 7;
    }
    if (0x7ffffffffffffffd < local_30) {
      local_30 = 0x7ffffffffffffffe;
    }
    puVar2 = (undefined8 *)FUN_140002c64(param_1,(longlong *)&local_30);
    *param_1 = puVar2;
    param_1[2] = param_3;
    param_1[3] = local_30;
    FUN_1400b3550(puVar2,param_2,param_3 * 2 + 2);
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

