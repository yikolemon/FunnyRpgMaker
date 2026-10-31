/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280c50 */

undefined4 FUN_180280c50(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_18042116c;
  LOCK();
  DAT_18042116c = 1;
  UNLOCK();
  return uVar1;
}

