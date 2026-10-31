/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140120e10 */

undefined4 FUN_140120e10(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_140354fe0 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar3 = (ulonglong)DAT_140355008;
      uVar2 = DAT_140355008;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140354fe0 + uVar3 * 0x28));
        DAT_140355008 = DAT_140355008 - 1;
      }
      return 0;
    }
    DAT_140355008 = DAT_140355008 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}

