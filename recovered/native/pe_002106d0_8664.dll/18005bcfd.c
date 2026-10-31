/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005bcfd */

void FUN_18005bcfd(void)

{
  undefined1 local_20 [8];
  int local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (DAT_1804189a8 == '\0') {
    DAT_1804189a8 = '\x01';
    FUN_180021d02(local_20,FUN_18005bd70);
    FUN_180021bf6(local_20);
    if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18028c2e0();
    }
  }
  return;
}

