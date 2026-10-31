/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107e80 */

undefined1 FUN_140107e80(void)

{
  char cVar1;
  
  cVar1 = FUN_140120e10();
  if (cVar1 != '\0') {
    cVar1 = FUN_14011d640();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_140120ea0();
  }
  return 0;
}

