/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802969b4 */

void FUN_1802969b4(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_1804218b0 == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_180296a6c();
    if (cVar1 == '\0') {
      FUN_18029201c(local_res8);
    }
    DAT_1804218b0 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

