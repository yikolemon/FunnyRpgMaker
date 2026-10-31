/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e8f0 */

undefined * FUN_14019e8f0(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1401aed28();
  puVar2 = (undefined *)(lVar1 + 0x24);
  if (lVar1 == 0) {
    puVar2 = &DAT_140f29564;
  }
  return puVar2;
}

