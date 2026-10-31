/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102750f5 */

int FUN_102750f5(void)

{
  int iVar1;
  
  if (DAT_103a9004 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9004;
  if (DAT_103a9004 == 0) {
    iVar1 = FUN_10274ffe(1,"CompareStringEx",&DAT_103254d8,&DAT_103254e0);
  }
  return iVar1;
}

