/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dec14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801dec14(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = _DAT_180330c40;
    uStack_20 = _UNK_180330c48;
    local_18 = _DAT_180330c50;
    uStack_14 = _UNK_180330c54;
    uStack_10 = _UNK_180330c58;
    uStack_c = _UNK_180330c5c;
    FUN_1801deb68(&local_28,*(undefined8 *)(param_2 + 0x28));
  }
  if (DAT_180402640 != (local_8 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
  }
  return;
}

