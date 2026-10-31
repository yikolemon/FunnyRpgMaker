/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400abbc6 */

void FUN_1400abbc6(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2 - (lVar2 - lVar1);
  if (param_2 < (ulonglong)(lVar2 - lVar1)) {
    param_1[1] = lVar1 + param_2;
  }
  else if (lVar3 != 0) {
    if ((ulonglong)(param_1[2] - lVar1) < param_2) {
      FUN_1400abc28(param_1);
      return;
    }
    thunk_FUN_1401366a0(lVar2,*param_3,lVar3);
    param_1[1] = lVar2 + lVar3;
  }
  return;
}

