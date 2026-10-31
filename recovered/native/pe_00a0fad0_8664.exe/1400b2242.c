/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b2242 */

void FUN_1400b2242(longlong param_1,ulonglong param_2,FILE *param_3)

{
  size_t _Count;
  longlong lVar1;
  
  if (0 < (longlong)param_2) {
    _Count = 0x7fffffff;
    if (param_2 < 0x7fffffff) {
      _Count = param_2;
    }
    lVar1 = 0;
    do {
      fread((void *)(param_1 + lVar1),1,_Count,param_3);
      lVar1 = lVar1 + _Count;
    } while (lVar1 < (longlong)param_2);
  }
  return;
}

