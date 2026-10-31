/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d254 */

void FUN_14013d254(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_140148227(param_1);
    if (cVar1 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x1f0) == 'Y') {
      iVar2 = iVar2 + -1;
    }
    else if (*(char *)(param_1 + 0x1f0) == 'X') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return;
}

