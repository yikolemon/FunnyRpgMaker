/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140125b54 */

void FUN_140125b54(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = 0x4028000000000000;
    local_10 = DAT_140e8e3e0;
    local_18 = DAT_140e8d7c0;
    local_20 = DAT_140e94c70;
  }
  else {
    local_28 = 0x4057800000000000;
    local_10 = DAT_140e94c00;
    local_18 = DAT_140e94c78;
    local_20 = DAT_140e94c80;
  }
  FUN_14012589c(&local_28,*(undefined8 *)(param_2 + 0x28));
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_48);
}

