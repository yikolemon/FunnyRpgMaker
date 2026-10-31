/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801378da */

void FUN_1801378da(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  lVar3 = DAT_180419160;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) == '\0') {
    uVar1 = *(undefined4 *)(lVar2 + 0x214);
    *(undefined4 *)(lVar2 + 0x214) = 1;
    *(undefined1 *)(lVar2 + 0x198) = 0;
    if (*(float *)(lVar2 + 0x184) <= 0.0) {
      local_20 = (ulonglong)*(uint *)(lVar3 + 0x1320) << 0x20;
    }
    else {
      local_20 = 0;
    }
    FUN_180111514(&local_20,DAT_1802bb8e0);
    *(undefined4 *)(lVar2 + 0x214) = uVar1;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

