/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229050 */

uint FUN_10229050(void)

{
  UINT UVar1;
  BOOL BVar2;
  
  UVar1 = ____lc_codepage_func();
  if (UVar1 == 0xfde9) {
    return 0xfde9;
  }
  BVar2 = AreFileApisANSI();
  return (uint)(BVar2 == 0);
}

