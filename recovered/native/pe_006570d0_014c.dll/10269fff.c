/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269fff */

undefined4 FUN_10269fff(void)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_103a5000 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_103a4e80 + DAT_103a5000 * 0x18);
    iVar1 = DAT_103a5000;
    do {
      DeleteCriticalSection(lpCriticalSection);
      DAT_103a5000 = DAT_103a5000 + -1;
      lpCriticalSection = lpCriticalSection + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}

