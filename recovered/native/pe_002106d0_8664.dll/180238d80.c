/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238d80 */

void FUN_180238d80(void)

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
  FUN_18023d710(FUN_1802aad20);
  return;
}

