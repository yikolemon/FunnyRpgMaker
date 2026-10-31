/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019e8cc */

undefined * FUN_14019e8cc(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = FUN_1401aed28();
  puVar2 = (undefined *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_140f29560;
  }
  return puVar2;
}

