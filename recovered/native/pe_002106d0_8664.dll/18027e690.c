/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027e690 */

undefined * FUN_18027e690(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_180291138();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_180415dbc;
  }
  return puVar2;
}

