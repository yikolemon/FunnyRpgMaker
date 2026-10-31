/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002da4a */

void FUN_14002da4a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 22.0;
    local_10 = DAT_1400eddd8;
    local_18 = DAT_1400edde0;
    local_20 = DAT_1400edde8;
  }
  else {
    local_28 = 90.0;
    local_10 = DAT_1400eddd0;
    local_18 = DAT_1400e66d8;
    local_20 = DAT_1400edd30;
  }
  FUN_14002d5da(&local_28,*(double *)(param_2 + 0x28));
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_48);
}

