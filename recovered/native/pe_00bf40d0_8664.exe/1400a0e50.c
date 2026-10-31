/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a0e50 */

undefined1 FUN_1400a0e50(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_1401431c8;
  uVar1 = DAT_1401431c8;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1401431a0 + uVar2 * 0x28));
    DAT_1401431c8 = DAT_1401431c8 - 1;
  }
  return 1;
}

