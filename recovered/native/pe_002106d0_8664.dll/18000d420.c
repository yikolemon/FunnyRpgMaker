/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d420 */

void FUN_18000d420(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  
  sVar1 = strlen(param_1);
  lVar3 = sVar1 + 1;
  lVar2 = _calloc_base(lVar3,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180239770();
  }
  if (lVar3 != 0) {
    FUN_1802a82f0(lVar2,param_1,lVar3);
    return;
  }
  return;
}

