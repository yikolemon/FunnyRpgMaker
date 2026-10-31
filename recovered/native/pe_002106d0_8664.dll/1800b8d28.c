/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b8d28 */

undefined8
FUN_1800b8d28(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_38 = &local_1c;
  local_28 = param_4;
  local_1c = param_2;
  local_18 = param_3;
  FUN_1800bd058(param_1);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
}

