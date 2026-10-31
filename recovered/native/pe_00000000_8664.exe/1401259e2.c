/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401259e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401259e2(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_28 = _DAT_140e94c50;
    uStack_20 = _UNK_140e94c58;
    local_18 = DAT_140e8e1a8;
    uStack_10 = 0;
    uVar1 = FUN_14012589c(&local_28,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar1 = (undefined4)DAT_140e8e0e8;
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uVar1);
}

