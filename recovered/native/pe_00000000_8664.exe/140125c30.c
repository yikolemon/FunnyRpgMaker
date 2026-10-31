/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140125c30 */

void FUN_140125c30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 0x4031000000000000;
    local_10 = DAT_140e8d7d0;
    local_18 = DAT_140e8e3e8;
    local_20 = DAT_140e94c98;
  }
  else {
    local_28 = 0x4057000000000000;
    local_10 = DAT_140e94c88;
    local_18 = DAT_140e94c90;
    local_20 = DAT_140e94c78;
  }
  FUN_14012589c(&local_28,*(undefined8 *)(param_2 + 0x28));
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

