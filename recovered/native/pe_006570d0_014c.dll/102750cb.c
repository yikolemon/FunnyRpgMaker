/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102750cb */

int FUN_102750cb(void)

{
  int iVar1;
  
  if (DAT_103a9000 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9000;
  if (DAT_103a9000 == 0) {
    iVar1 = FUN_10274ffe(0,"AreFileApisANSI",&DAT_103254d4,&DAT_103254d8);
  }
  return iVar1;
}

