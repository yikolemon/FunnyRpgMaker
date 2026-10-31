/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086540 */

void FUN_140086540(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_14012eac8 + -1;
  UNLOCK();
  iVar1 = DAT_14012eac8 + -1;
  DAT_14012eac8 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14013c9d0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_14013cb10);
  }
  return;
}

