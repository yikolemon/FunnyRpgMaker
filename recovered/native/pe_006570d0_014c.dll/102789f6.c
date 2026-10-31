/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102789f6 */

void FUN_102789f6(void)

{
  char cVar1;
  int local_8;
  
  if (DAT_103a5498 == 0) {
    local_8 = 0;
    cVar1 = FUN_10278a42();
    if (cVar1 == '\0') {
      FUN_10274ed9(&local_8);
    }
    DAT_103a5498 = (local_8 == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

