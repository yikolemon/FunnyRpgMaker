/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a5b0 */

ulonglong FUN_18023a5b0(void)

{
  BOOL BVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_180272194();
  if ((int)uVar2 == 0xfde9) {
    return uVar2;
  }
  BVar1 = AreFileApisANSI();
  return (ulonglong)(BVar1 == 0);
}

