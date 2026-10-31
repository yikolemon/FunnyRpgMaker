/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c2f1 */

void FUN_14001c2f1(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  
  sVar1 = strlen(param_1);
  lVar3 = sVar1 + 1;
  lVar2 = _calloc_base(lVar3,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140189870();
  }
  if (lVar3 != 0) {
    FUN_1401c5180(lVar2,param_1,lVar3);
    return;
  }
  return;
}

