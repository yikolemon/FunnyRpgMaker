/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edb68 */

void FUN_1801edb68(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_1801f8b3b(param_1);
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

