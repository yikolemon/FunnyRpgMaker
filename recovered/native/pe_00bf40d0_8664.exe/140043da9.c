/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043da9 */

ulonglong FUN_140043da9(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14004406f(param_1);
  lVar2 = (longlong)iVar1 *
          (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
  return lVar2 + (lVar2 >> 0x3f) + 0x8000U >> 0x10;
}

