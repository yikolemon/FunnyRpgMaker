/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048fb3c */

undefined * FUN_14048fb3c(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1404a2608();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_140627288;
  }
  return puVar2;
}

