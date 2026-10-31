/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d870 */

undefined1 FUN_18023d870(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_180418088 = 1;
  }
  FUN_1802466e0();
  cVar1 = FUN_18026eb60();
  if (cVar1 != '\0') {
    cVar1 = FUN_180272324();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_18026eb90(0);
  }
  return 0;
}

