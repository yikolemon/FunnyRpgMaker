/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140048488 */

void FUN_140048488(longlong param_1,int param_2)

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
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_28 = *(longlong *)(param_1 + 0x68) + (longlong)param_2;
  local_10 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 + 1;
  local_18 = 0;
  local_30 = 0;
  local_20 = local_38;
  FUN_140048702(param_1 + 0x50,local_50);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_78);
}

