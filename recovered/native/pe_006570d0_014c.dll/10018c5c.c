/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018c5c */

void FUN_10018c5c(void)

{
  undefined1 local_28 [4];
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e00;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1002181a(&LAB_100215c4);
  local_14 = 0;
  FUN_10021780();
  local_14 = 0xffffffff;
  if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_102716bc();
  }
  FUN_1002181a(&LAB_100217a9);
  local_14 = 1;
  FUN_10021780();
  local_14 = 0xffffffff;
  if (local_24 == 0) {
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

