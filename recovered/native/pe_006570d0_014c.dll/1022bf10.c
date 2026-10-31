/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bf10 */

undefined4 __fastcall FUN_1022bf10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_10388d50 = DAT_10388d50 + 1;
  UNLOCK();
  if (DAT_10388d50 == 0) {
    puVar1 = (undefined4 *)&DAT_1039cd30;
    do {
      FUN_10234c80(puVar1);
      puVar1 = puVar1 + 6;
    } while (puVar1 != &_tls_index);
  }
  return param_1;
}

