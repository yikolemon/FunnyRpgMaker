/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009dbd0 */

int FUN_14009dbd0(longlong *param_1,int param_2,longlong param_3,int param_4,longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_10;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar2 <= uVar1) && (local_10 = param_1[1], local_10 <= uVar2)) {
    if ((longlong)(uVar2 - local_10) < (longlong)(uVar1 - uVar2)) {
      lVar3 = *param_1;
      if (local_10 < uVar2) {
        do {
          FUN_14009dcb0(lVar3,(longlong *)&local_10);
          param_2 = param_2 + 1;
        } while (local_10 < (ulonglong)param_5[1]);
      }
    }
    else {
      lVar3 = *param_5;
      param_2 = param_4;
      local_10 = uVar2;
      if (uVar2 < uVar1) {
        do {
          FUN_14009dcb0(lVar3,(longlong *)&local_10);
          param_2 = param_4 + -1;
          param_4 = param_2;
        } while (local_10 < *(ulonglong *)(param_3 + 8));
      }
    }
    return param_2;
  }
  return -1;
}

