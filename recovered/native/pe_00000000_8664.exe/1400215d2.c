/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400215d2 */

/* WARNING: Removing unreachable block (ram,0x000140021602) */

int FUN_1400215d2(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
    local_29 = 1;
    FUN_14001b296(local_28,"cannot switch from manual to automatic argument indexing");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_28,&DAT_140ee3c60);
  }
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
  }
  return iVar1;
}

