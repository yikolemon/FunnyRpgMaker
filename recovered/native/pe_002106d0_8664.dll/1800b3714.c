/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b3714 */

undefined8 FUN_1800b3714(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_38 = param_1;
  FUN_1800b3f4d(local_28);
  FUN_180001f38(param_2,local_28,0);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

