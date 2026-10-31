/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ae560 */

undefined4 FUN_1401ae560(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_140f32bb0 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar3 = (ulonglong)DAT_140f32bd8;
      uVar2 = DAT_140f32bd8;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140f32bb0 + uVar3 * 0x28));
        DAT_140f32bd8 = DAT_140f32bd8 - 1;
      }
      return 0;
    }
    DAT_140f32bd8 = DAT_140f32bd8 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}

