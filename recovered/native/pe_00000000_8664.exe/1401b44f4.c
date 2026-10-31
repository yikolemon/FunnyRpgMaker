/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b44f4 */

void FUN_1401b44f4(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_140f33258 == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_1401b45a8();
    if (cVar1 == '\0') {
      FUN_1401afbbc(local_res8);
    }
    DAT_140f33258 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

