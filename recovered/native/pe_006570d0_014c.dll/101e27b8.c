/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e27b8 */

void __fastcall FUN_101e27b8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_101eca99();
    if (cVar1 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x148) == 'Y') {
      iVar2 = iVar2 + -1;
    }
    else if (*(char *)(param_1 + 0x148) == 'X') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return;
}

