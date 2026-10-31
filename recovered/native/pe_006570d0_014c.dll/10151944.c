/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151944 */

int FUN_10151944(void)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = FUN_101518a7();
    if (iVar1 < 0) break;
    iVar2 = FUN_101520da();
  } while (iVar2 == 0);
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

