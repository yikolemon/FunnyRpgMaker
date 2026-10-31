/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273480 */

undefined4 FUN_10273480(void)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)&DAT_103a5038,4000,0);
  iVar1 = DAT_103a5050;
  if (BVar2 == 0) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_103a5020 + iVar1 * 0x18));
      DAT_103a5050 = DAT_103a5050 + -1;
    }
    return 0;
  }
  DAT_103a5050 = DAT_103a5050 + 1;
  return 1;
}

