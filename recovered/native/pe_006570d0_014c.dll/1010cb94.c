/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010cb94 */

int FUN_1010cb94(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = param_1;
    iVar2 = *(int *)(iVar3 + 0x1d8);
    do {
      if (iVar2 < 1) {
        return iVar3;
      }
      param_1 = *(int *)(*(int *)(iVar3 + 0x1e0) + -4 + iVar2 * 4);
      iVar2 = iVar2 + -1;
      cVar1 = FUN_1010a68d();
    } while (cVar1 == '\0');
  } while( true );
}

