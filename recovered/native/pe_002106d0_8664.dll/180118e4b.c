/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118e4b */

void FUN_180118e4b(void)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = 0;
  do {
    if (*(char *)(DAT_180419160 + 0x120 + lVar1) != '\0') {
      return;
    }
    bVar2 = lVar1 != 4;
    lVar1 = lVar1 + 1;
  } while (bVar2);
  return;
}

