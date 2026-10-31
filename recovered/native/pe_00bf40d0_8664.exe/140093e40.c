/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093e40 */

undefined4 FUN_140093e40(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140142c48;
  LOCK();
  DAT_140142c48 = 1;
  UNLOCK();
  return uVar1;
}

