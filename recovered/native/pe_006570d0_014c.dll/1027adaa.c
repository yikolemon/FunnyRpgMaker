/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027adaa */

void FUN_1027adaa(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x95].RecursionCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[2].RecursionCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_10274120(param_1);
  }
  return;
}

