/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3a30 */

undefined8 FUN_1400d3a30(undefined8 param_1)

{
  undefined *puVar1;
  
  LOCK();
  DAT_1401c9690 = DAT_1401c9690 + 1;
  UNLOCK();
  if (DAT_1401c9690 == 0) {
    puVar1 = &DAT_1401cc2d0;
    do {
      FUN_1400de0f0(puVar1);
      puVar1 = puVar1 + 0x28;
    } while (puVar1 != &DAT_1401cc410);
  }
  return param_1;
}

