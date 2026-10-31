/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5e24 */

void FUN_1400a5e24(void)

{
  uint uVar1;
  int local_res8 [8];
  
  if (DAT_140143818 == 0) {
    local_res8[0] = 0;
    uVar1 = FUN_1400a5ed8();
    if ((char)uVar1 == '\0') {
      FUN_1400a2250(local_res8);
    }
    DAT_140143818 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

