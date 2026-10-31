/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140111a60 */

undefined4 FUN_140111a60(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140354b80;
  LOCK();
  DAT_140354b80 = 1;
  UNLOCK();
  return uVar1;
}

