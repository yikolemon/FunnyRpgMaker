/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d89d */

undefined4 FUN_0048d89d(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005216fc;
  LOCK();
  DAT_005216fc = 1;
  UNLOCK();
  return uVar1;
}

