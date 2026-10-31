/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f05fa */

void FUN_1800f05fa(void)

{
  char cVar1;
  
  cVar1 = FUN_1800d0016(&DAT_180418d28);
  if (cVar1 != '\0') {
    DAT_180418d27 = DAT_180418d27 ^ 1;
    FUN_1800f1a74();
    FUN_1800e2378();
    return;
  }
  return;
}

