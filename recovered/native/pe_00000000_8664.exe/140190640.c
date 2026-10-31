/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140190640 */

undefined1 FUN_140190640(void)

{
  char cVar1;
  
  cVar1 = FUN_1401ae560();
  if (cVar1 != '\0') {
    cVar1 = FUN_1401aad90();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1401ae5f0();
  }
  return 0;
}

