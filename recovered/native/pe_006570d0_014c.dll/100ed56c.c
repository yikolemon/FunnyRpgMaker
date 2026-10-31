/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed56c */

void thunk_FUN_1005cb41(void)

{
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 *puStack_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = auStack_28;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_100c1a20;
  pvStack_1c = ExceptionList;
  if (DAT_1039d2ec == '\0') {
    DAT_1039d2ec = '\x01';
    ExceptionList = &pvStack_1c;
    FUN_1002181a(&LAB_1005cbd6);
    uStack_14 = 0;
    FUN_10021780();
    uStack_14 = 0xffffffff;
    if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

