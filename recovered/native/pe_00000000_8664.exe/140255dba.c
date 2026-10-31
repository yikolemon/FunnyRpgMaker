/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140255dba */

void FUN_140255dba(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    FUN_1402276a6();
    lVar1 = *param_1;
    lVar2 = *param_4;
    lVar3 = *param_3;
    thunk_FUN_14021bb5c(lVar3,lVar2,lVar1);
    param_1[1] = lVar1 + (lVar2 - lVar3);
  }
  return;
}

