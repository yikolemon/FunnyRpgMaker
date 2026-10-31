/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275176 */

int FUN_10275176(void)

{
  int iVar1;
  
  if (DAT_103a9028 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9028;
  if (DAT_103a9028 == 0) {
    iVar1 = FUN_10274ffe(10,"GetLocaleInfoEx",&DAT_103254f8,&DAT_10325500);
  }
  return iVar1;
}

