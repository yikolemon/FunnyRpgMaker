/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499c06 */

void FUN_00499c06(void)

{
  uint uVar1;
  void *this;
  int local_8;
  
  if (DAT_00521f14 == 0) {
    local_8 = 0;
    uVar1 = FUN_00499c52();
    if ((char)uVar1 == '\0') {
      FUN_00496bbe(this,&local_8);
    }
    DAT_00521f14 = (local_8 == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

