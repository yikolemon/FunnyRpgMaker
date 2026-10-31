/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140190510 */

void FUN_140190510(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
    lVar2 = -1;
    do {
      lVar1 = lVar2;
      lVar2 = lVar1 + 1;
    } while (*(char *)(*param_1 + 1 + lVar1) != '\0');
    lVar2 = _malloc_base(lVar1 + 2);
    if (lVar2 != 0) {
      FUN_1401ae4e0(lVar2,lVar1 + 2,*param_1);
      *param_2 = lVar2;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_1401aea30(0);
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}

