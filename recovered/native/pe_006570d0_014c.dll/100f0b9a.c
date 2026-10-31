/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0b9a */

void FUN_100f0b9a(void)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100f53d0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_100f1cbe();
  local_8 = 0xffffffff;
  FUN_100f0cde();
  if (*(int *)(local_18 + 4) == 0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

