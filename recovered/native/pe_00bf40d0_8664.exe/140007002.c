/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140007002 */

longlong * FUN_140007002(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      FUN_140002c8e(param_1,*param_1,param_1[3]);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}

