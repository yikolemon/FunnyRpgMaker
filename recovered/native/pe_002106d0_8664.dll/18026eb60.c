/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026eb60 */

undefined1 FUN_18026eb60(void)

{
  char cVar1;
  
  cVar1 = FUN_180290970();
  if (cVar1 != '\0') {
    cVar1 = FUN_18028cf20();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_180290a00();
  }
  return 0;
}

