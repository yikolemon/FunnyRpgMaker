/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401382c0 */

void FUN_1401382c0(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1401c9690 + -1;
  UNLOCK();
  iVar1 = DAT_1401c9690 + -1;
  DAT_1401c9690 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_1401cc2d0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_1401cc410);
  }
  return;
}

