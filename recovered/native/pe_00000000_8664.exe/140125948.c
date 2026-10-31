/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140125948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140125948(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = _DAT_140e94c30;
    uStack_20 = _UNK_140e94c38;
    local_18 = _DAT_140e94c40;
    uStack_14 = _UNK_140e94c44;
    uStack_10 = _UNK_140e94c48;
    uStack_c = _UNK_140e94c4c;
    uVar1 = FUN_14012589c(&local_28,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar1 = (undefined4)DAT_140e94bf8;
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uVar1);
}

