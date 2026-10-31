/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103334 */

int FUN_10103334(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(**(int **)(DAT_1039d74c + 0x1fe8) + 0x98) != '\0') {
    iVar1 = **(int **)(DAT_1039d74c + 0x1fe8) + 0x98;
  }
  return iVar1;
}

