/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c890 */

undefined4 FUN_14019c890(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140f32750;
  LOCK();
  DAT_140f32750 = 1;
  UNLOCK();
  return uVar1;
}

