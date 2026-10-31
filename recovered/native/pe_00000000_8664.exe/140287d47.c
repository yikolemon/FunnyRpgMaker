/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287d47 */

void FUN_140287d47(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  sVar1 = strlen(param_1);
  lVar2 = _malloc_base(sVar1 + 1);
  if (lVar2 != 0) {
    FUN_1404b97c0(lVar2,param_1,sVar1 + 1);
    return;
  }
  return;
}

