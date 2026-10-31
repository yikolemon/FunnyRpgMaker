/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092163 */

void FUN_140092163(void)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = 0;
  do {
    if (*(char *)(DAT_140f2a910 + 0x120 + lVar1) != '\0') {
      return;
    }
    bVar2 = lVar1 != 4;
    lVar1 = lVar1 + 1;
  } while (bVar2);
  return;
}

