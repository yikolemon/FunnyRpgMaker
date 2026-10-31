/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e6dfa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e6dfa(void)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (DAT_180418c32 == 0) {
    FUN_1800cfde0(&local_14,0x70);
    _DAT_180418c32 = local_14;
  }
  if (DAT_180418c36 == 0) {
    FUN_1800cfde0(&local_14,0xa2);
    _DAT_180418c36 = local_14;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

