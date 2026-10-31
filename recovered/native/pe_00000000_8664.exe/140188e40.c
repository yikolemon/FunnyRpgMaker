/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188e40 */

undefined8 FUN_140188e40(undefined8 param_1)

{
  undefined *puVar1;
  
  LOCK();
  DAT_140f17b90 = DAT_140f17b90 + 1;
  UNLOCK();
  if (DAT_140f17b90 == 0) {
    puVar1 = &DAT_140f2aa00;
    do {
      FUN_14018e510(puVar1);
      puVar1 = puVar1 + 0x28;
    } while (puVar1 != &DAT_140f2ab40);
  }
  return param_1;
}

