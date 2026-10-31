/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140113df8 */

undefined * FUN_140113df8(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1401215d8();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_1401ca574;
  }
  return puVar2;
}

