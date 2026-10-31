/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188ea0 */

void FUN_140188ea0(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_140f17b90 + -1;
  UNLOCK();
  iVar1 = DAT_140f17b90 + -1;
  DAT_140f17b90 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_140f2aa00;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_140f2ab40);
  }
  return;
}

