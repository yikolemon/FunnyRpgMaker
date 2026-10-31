/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275278 */

int FUN_10275278(void)

{
  int iVar1;
  
  if (DAT_103a9050 == -1) {
    return 0;
  }
  iVar1 = DAT_103a9050;
  if (DAT_103a9050 == 0) {
    iVar1 = FUN_10274ffe(0x14,"LocaleNameToLCID",&DAT_10325528,&DAT_10325530);
  }
  return iVar1;
}

