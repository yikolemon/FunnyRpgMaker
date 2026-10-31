/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dcf10 */

ulonglong FUN_1400dcf10(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_14010b0f8();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  BVar1 = AreFileApisANSI();
  return (ulonglong)(BVar1 == 0);
}

