/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102751a1 */

int FUN_102751a1(void)

{
  int iVar1;
  
  if (DAT_103a9034 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9034;
  if (DAT_103a9034 == 0) {
    iVar1 = FUN_10274ffe(0xd,"GetTimeFormatEx",&DAT_10325500,&DAT_10325508);
  }
  return iVar1;
}

