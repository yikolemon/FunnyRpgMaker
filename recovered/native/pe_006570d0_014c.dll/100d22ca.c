/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d22ca */

void FUN_100d22ca(void)

{
  char cVar1;
  
  cVar1 = FUN_100cc87a(&DAT_10388e0c);
  if (cVar1 != '\0') {
    DAT_10388e04 = DAT_10388e04 ^ 1;
    FUN_100d55a4();
    FUN_100de916();
  }
  cVar1 = FUN_100cc87a(&DAT_10388e10);
  if (cVar1 != '\0') {
    FUN_100d5641();
    return;
  }
  return;
}

