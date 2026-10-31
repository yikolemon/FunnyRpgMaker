/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027514b */

int FUN_1027514b(void)

{
  int iVar1;
  
  if (DAT_103a9014 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9014;
  if (DAT_103a9014 == 0) {
    iVar1 = FUN_10274ffe(5,"GetDateFormatEx",&DAT_103254f0,&DAT_103254f8);
  }
  return iVar1;
}

