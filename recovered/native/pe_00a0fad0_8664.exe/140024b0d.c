/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140024b0d */

void FUN_140024b0d(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  
  sVar1 = strlen(param_1);
  lVar3 = sVar1 + 1;
  lVar2 = _calloc_base(lVar3,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d9cb0();
  }
  if (lVar3 != 0) {
    FUN_140135ff0(lVar2,param_1,lVar3);
    return;
  }
  return;
}

