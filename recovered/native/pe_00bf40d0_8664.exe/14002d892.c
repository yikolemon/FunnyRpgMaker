/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d892 */

void FUN_14002d892(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 12.0;
    local_10 = DAT_1400e7550;
    local_18 = DAT_1400e66c8;
    local_20 = DAT_1400edda0;
  }
  else {
    local_28 = 94.0;
    local_10 = DAT_1400edd30;
    local_18 = DAT_1400edda8;
    local_20 = DAT_1400eddb0;
  }
  FUN_14002d5da(&local_28,*(double *)(param_2 + 0x28));
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_48);
}

