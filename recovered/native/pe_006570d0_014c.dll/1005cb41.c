/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005cb41 */

void FUN_1005cb41(void)

{
  undefined1 local_28 [4];
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1a20;
  local_1c = ExceptionList;
  if (DAT_1039d2ec == '\0') {
    DAT_1039d2ec = '\x01';
    ExceptionList = &local_1c;
    FUN_1002181a(&LAB_1005cbd6);
    local_14 = 0;
    FUN_10021780();
    local_14 = 0xffffffff;
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
  }
  ExceptionList = local_1c;
  return;
}

