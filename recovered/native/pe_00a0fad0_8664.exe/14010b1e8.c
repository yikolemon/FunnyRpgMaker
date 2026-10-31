/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b1e8 */

undefined8 FUN_14010b1e8(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_1403555f8;
  *DAT_1403555f8 = *DAT_1403555f8 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_1403555f8 != (int *)&DAT_1401ca9c0)) {
    FUN_1401212e0();
    DAT_1403555f8 = (int *)&DAT_1401ca9c0;
  }
  return 1;
}

