/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c23f2 */

void FUN_1800c23f2(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_38 = &local_10;
  local_40 = &local_18;
  local_48 = &local_19;
  local_50 = &local_28;
  local_30 = &stack0x00000028;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  FUN_1800c248b(local_50);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_78);
}

