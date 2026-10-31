/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089260 */

uint FUN_140089260(void)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = FUN_14008e82c();
  if (iVar1 == 0xfde9) {
    return 0xfde9;
  }
  BVar2 = AreFileApisANSI();
  return (uint)(BVar2 == 0);
}

