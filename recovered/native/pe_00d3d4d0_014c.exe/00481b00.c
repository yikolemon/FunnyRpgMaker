/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481b00 */

uint FUN_00481b00(void)

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

