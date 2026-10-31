/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140193010 */

undefined8 FUN_140193010(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_140f331f8;
  *DAT_140f331f8 = *DAT_140f331f8 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_140f331f8 != (int *)&DAT_140f299c0)) {
    FUN_1401aea30();
    DAT_140f331f8 = (int *)&DAT_140f299c0;
  }
  return 1;
}

