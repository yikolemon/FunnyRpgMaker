/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145e2d */

ulonglong FUN_140145e2d(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140146127();
  lVar2 = (longlong)iVar1 * (ulonglong)*(ushort *)(param_1 + 0x188);
  return lVar2 + (lVar2 >> 0x3f) + 0x8000U >> 0x10;
}

