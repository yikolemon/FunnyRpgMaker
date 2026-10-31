/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a0dc0 */

undefined4 FUN_1400a0dc0(void)

{
  BOOL BVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1401431a0 + uVar4 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar4 = (ulonglong)DAT_1401431c8;
      uVar2 = 0;
      uVar3 = DAT_1401431c8;
      while (uVar3 != 0) {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1401431a0 + uVar4 * 0x28));
        DAT_1401431c8 = DAT_1401431c8 - 1;
        uVar2 = extraout_EAX;
      }
      return uVar2 & 0xffffff00;
    }
    DAT_1401431c8 = DAT_1401431c8 + 1;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}

