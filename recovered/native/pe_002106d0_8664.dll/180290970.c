/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180290970 */

undefined4 FUN_180290970(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180421200 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar3 = (ulonglong)DAT_180421228;
      uVar2 = DAT_180421228;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180421200 + uVar3 * 0x28));
        DAT_180421228 = DAT_180421228 - 1;
      }
      return 0;
    }
    DAT_180421228 = DAT_180421228 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}

