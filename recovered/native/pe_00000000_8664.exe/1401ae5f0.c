/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ae5f0 */

undefined1 FUN_1401ae5f0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_140f32bd8;
  uVar1 = DAT_140f32bd8;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_140f32bb0 + uVar2 * 0x28));
    DAT_140f32bd8 = DAT_140f32bd8 - 1;
  }
  return 1;
}

