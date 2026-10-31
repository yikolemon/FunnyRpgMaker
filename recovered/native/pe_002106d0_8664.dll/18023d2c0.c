/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d2c0 */

undefined8 FUN_18023d2c0(undefined8 param_1)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_180402688 = DAT_180402688 + 1;
  UNLOCK();
  if (DAT_180402688 == 0) {
    puVar1 = (undefined4 *)&DAT_180417f20;
    do {
      FUN_1802469d0(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &_tls_index);
  }
  return param_1;
}

