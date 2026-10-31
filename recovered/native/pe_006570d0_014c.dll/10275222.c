/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275222 */

int FUN_10275222(void)

{
  int iVar1;
  
  if (DAT_103a9048 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9048;
  if (DAT_103a9048 == 0) {
    iVar1 = FUN_10274ffe(0x12,"LCMapStringEx",&DAT_10325518,&DAT_10325520);
  }
  return iVar1;
}

