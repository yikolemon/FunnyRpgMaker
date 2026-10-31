/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027e66c */

undefined * FUN_18027e66c(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_180291138();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_180415db8;
  }
  return puVar2;
}

