/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018800 */

void FUN_180018800(void)

{
  undefined1 local_20 [8];
  int local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_180021d02(local_20,FUN_1800219e4);
  FUN_180021bf6(local_20);
  if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18028c2e0();
  }
  FUN_180021d02(local_20,FUN_180021c67);
  FUN_180021bf6(local_20);
  if (local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

