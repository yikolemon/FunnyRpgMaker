/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027524d */

int FUN_1027524d(void)

{
  int iVar1;
  
  if (DAT_103a904c == -1) {
    return 0;
  }
  iVar1 = DAT_103a904c;
  if (DAT_103a904c == 0) {
    iVar1 = FUN_10274ffe(0x13,"LCIDToLocaleName",&DAT_10325520,&DAT_10325528);
  }
  return iVar1;
}

