/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013d2c2 */

void FUN_18013d2c2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = &local_c;
  local_20 = param_7;
  local_28 = param_6;
  local_30 = (undefined1 *)&param_5;
  local_c = param_4;
  FUN_18013c8ae(param_1,8,param_2,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

