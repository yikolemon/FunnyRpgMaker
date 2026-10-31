/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c4113 */

void FUN_1800c4113(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_30 = &local_10;
  local_38 = &local_18;
  local_40 = &local_19;
  local_48 = &local_28;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  FUN_1800c41a0(local_48);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_68);
}

