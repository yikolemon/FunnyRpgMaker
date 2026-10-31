/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d320 */

void FUN_18023d320(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_180402688 + -1;
  UNLOCK();
  iVar1 = DAT_180402688 + -1;
  DAT_180402688 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_180417f20;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&_tls_index);
  }
  return;
}

