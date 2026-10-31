/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eea2c */

void FUN_1800eea2c(longlong param_1,int param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_28 = *(longlong *)(param_1 + 0x68) + (longlong)param_2;
  local_10 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 + 1;
  local_18 = 0;
  local_30 = 0;
  local_20 = local_38;
  FUN_1800eebe8(param_1 + 0x50,local_50);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_78);
}

