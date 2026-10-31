/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076877 */

void FUN_180076877(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  sVar1 = strlen(param_1);
  lVar2 = _malloc_base(sVar1 + 1);
  if (lVar2 != 0) {
    FUN_1802a82f0(lVar2,param_1,sVar1 + 1);
    return;
  }
  return;
}

