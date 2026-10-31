/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d96e */

void FUN_14002d96e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 17.0;
    local_10 = DAT_1400e66d0;
    local_18 = DAT_1400e7558;
    local_20 = DAT_1400eddc8;
  }
  else {
    local_28 = 92.0;
    local_10 = DAT_1400eddb8;
    local_18 = DAT_1400eddc0;
    local_20 = DAT_1400edda8;
  }
  FUN_14002d5da(&local_28,*(double *)(param_2 + 0x28));
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_48);
}

