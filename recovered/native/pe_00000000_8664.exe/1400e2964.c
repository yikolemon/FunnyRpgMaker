/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2964 */

void FUN_1400e2964(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  longlong param_5,longlong param_6)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_a4;
  longlong local_a0;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  if (param_5 == 0) {
    FUN_1400e0f8a(local_e0);
  }
  else {
    FUN_1401c5180(local_e0,param_5,0xa0);
  }
  local_a4 = ~-(uint)(0.0 < param_4) & local_a4 | (uint)param_4 & -(uint)(0.0 < param_4);
  if (param_6 != 0) {
    local_a0 = param_6;
  }
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_1400e1d7a(param_1,local_e0);
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_108);
}

