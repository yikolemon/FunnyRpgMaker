/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400216c0 */

void FUN_1400216c0(longlong param_1)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_29 = 1;
    FUN_14001b296(local_28,"cannot switch from automatic to manual argument indexing");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_28,&DAT_140ee3c60);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
  }
  return;
}

