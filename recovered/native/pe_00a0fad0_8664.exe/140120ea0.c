/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140120ea0 */

undefined1 FUN_140120ea0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_140355008;
  uVar1 = DAT_140355008;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140354fe0 + uVar2 * 0x28));
    DAT_140355008 = DAT_140355008 - 1;
  }
  return 1;
}

