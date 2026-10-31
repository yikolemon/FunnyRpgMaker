/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007a15 */

void FUN_140007a15(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  sVar1 = strlen(param_1);
  lVar2 = _malloc_base(sVar1 + 1);
  if (lVar2 != 0) {
    FUN_140135ff0(lVar2,param_1,sVar1 + 1);
    return;
  }
  return;
}

