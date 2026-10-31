/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180290a00 */

undefined1 FUN_180290a00(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_180421228;
  uVar1 = DAT_180421228;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180421200 + uVar2 * 0x28));
    DAT_180421228 = DAT_180421228 - 1;
  }
  return 1;
}

