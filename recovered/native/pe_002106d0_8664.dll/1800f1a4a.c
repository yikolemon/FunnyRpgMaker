/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f1a4a */

void thunk_FUN_18005bcfd(void)

{
  undefined1 auStack_20 [8];
  int iStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if (DAT_1804189a8 == '\0') {
    DAT_1804189a8 = '\x01';
    FUN_180021d02(auStack_20,FUN_18005bd70);
    FUN_180021bf6(auStack_20);
    if (iStack_18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18028c2e0();
    }
  }
  return;
}

