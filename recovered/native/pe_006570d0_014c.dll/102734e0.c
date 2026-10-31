/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102734e0 */

undefined4 FUN_102734e0(void)

{
  int iVar1;
  
  for (iVar1 = DAT_103a5050; iVar1 != 0; iVar1 = iVar1 + -1) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_103a5020 + iVar1 * 0x18));
    DAT_103a5050 = DAT_103a5050 + -1;
  }
  return 1;
}

