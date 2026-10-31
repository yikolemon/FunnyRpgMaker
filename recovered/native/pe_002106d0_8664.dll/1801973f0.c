/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801973f0 */

void FUN_1801973f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  longlong param_5,longlong param_6)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_a4;
  longlong local_a0;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_108;
  if (param_5 == 0) {
    FUN_180195a16(local_e0);
  }
  else {
    FUN_1802a82f0(local_e0,param_5,0xa0);
  }
  local_a4 = ~-(uint)(0.0 < param_4) & local_a4 | (uint)param_4 & -(uint)(0.0 < param_4);
  if (param_6 != 0) {
    local_a0 = param_6;
  }
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_180196806(param_1,local_e0);
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_108);
}

