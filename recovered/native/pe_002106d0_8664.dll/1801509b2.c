/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801509b2 */

void FUN_1801509b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_10 = &stack0x00000048;
  local_18 = param_8;
  local_20 = param_7;
  local_28 = param_6;
  local_30 = param_5;
  local_38 = param_4;
  FUN_180150051(0,param_1,param_2,param_3);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

