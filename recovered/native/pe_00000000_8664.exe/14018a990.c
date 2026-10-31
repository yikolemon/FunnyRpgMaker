/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018a990 */

ulonglong FUN_14018a990(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140192f20();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  BVar1 = AreFileApisANSI();
  return (ulonglong)(BVar1 == 0);
}

