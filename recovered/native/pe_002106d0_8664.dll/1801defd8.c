/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801defd8 */

void FUN_1801defd8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 0x4036000000000000;
    local_10 = DAT_180330cb8;
    local_18 = DAT_180330cc0;
    local_20 = DAT_180330cc8;
  }
  else {
    local_28 = 0x4056800000000000;
    local_10 = DAT_180330cb0;
    local_18 = DAT_180328090;
    local_20 = DAT_180330c10;
  }
  FUN_1801deb68(&local_28,*(undefined8 *)(param_2 + 0x28));
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

