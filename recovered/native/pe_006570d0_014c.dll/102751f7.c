/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102751f7 */

int FUN_102751f7(void)

{
  int iVar1;
  
  if (DAT_103a9044 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9044;
  if (DAT_103a9044 == 0) {
    iVar1 = FUN_10274ffe(0x11,"IsValidLocaleName",&DAT_10325510,&DAT_10325518);
  }
  return iVar1;
}

