/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800639cf */

undefined8 *
FUN_1800639cf(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 < param_3) {
    do {
      uVar1 = FUN_180063a4d(&local_30,param_3);
      FUN_1800643b6(param_4,uVar1);
    } while (local_30 < param_3);
  }
  *param_1 = param_4;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

