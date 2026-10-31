/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102751cc */

int FUN_102751cc(void)

{
  int iVar1;
  
  if (DAT_103a9038 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9038;
  if (DAT_103a9038 == 0) {
    iVar1 = FUN_10274ffe(0xe,"GetUserDefaultLocaleName",&DAT_10325508,&DAT_10325510);
  }
  return iVar1;
}

