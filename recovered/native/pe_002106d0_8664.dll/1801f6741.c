/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6741 */

ulonglong FUN_1801f6741(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1801f6a3b();
  lVar2 = (longlong)iVar1 * (ulonglong)*(ushort *)(param_1 + 0x188);
  return lVar2 + (lVar2 >> 0x3f) + 0x8000U >> 0x10;
}

