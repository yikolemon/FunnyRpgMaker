/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043d75 */

ulonglong FUN_140043d75(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14004406f(param_1);
  lVar2 = (longlong)iVar1 * (ulonglong)*(ushort *)(param_1 + 0x188);
  return lVar2 + (lVar2 >> 0x3f) + 0x8000U >> 0x10;
}

