/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d5a10 */

void FUN_1800d5a10(void)

{
  char cVar1;
  
  cVar1 = FUN_1800d0016(&DAT_1804027c8);
  if (cVar1 != '\0') {
    DAT_1804027c0 = DAT_1804027c0 ^ 1;
    FUN_1800d9c3a();
    FUN_1800e2378();
  }
  cVar1 = FUN_1800d0016(&DAT_1804027cc);
  if (cVar1 != '\0') {
    FUN_1800d9cab(0);
    return;
  }
  return;
}

