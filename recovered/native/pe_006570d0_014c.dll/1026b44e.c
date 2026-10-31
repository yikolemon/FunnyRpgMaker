/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026b44e */

undefined4 FUN_1026b44e(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_103a5004;
  LOCK();
  DAT_103a5004 = 1;
  UNLOCK();
  return uVar1;
}

