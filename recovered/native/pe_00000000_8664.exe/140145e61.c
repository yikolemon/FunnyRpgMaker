/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145e61 */

ulonglong FUN_140145e61(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140146127();
  lVar2 = (longlong)iVar1 *
          (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4);
  return lVar2 + (lVar2 >> 0x3f) + 0x8000U >> 0x10;
}

