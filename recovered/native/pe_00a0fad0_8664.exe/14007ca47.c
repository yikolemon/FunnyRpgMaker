/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007ca47 */

void FUN_14007ca47(longlong *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  uVar2 = (ulonglong)(*(int *)(lVar1 + 10) + 4);
  lVar3 = uVar2 + (*(int *)(lVar1 + 0xe + uVar2) + 4) + 0xe;
  lVar3 = (ulonglong)(*(int *)(lVar1 + lVar3) + 4) + lVar3;
  lVar3 = (ulonglong)(*(int *)(lVar1 + lVar3) + 4) + lVar3;
  for (lVar3 = (ulonglong)(*(int *)(lVar1 + lVar3) + 4) + lVar3;
      *(int *)(lVar1 + lVar3) != *param_2 + -1;
      lVar3 = lVar3 + (ulonglong)(*(int *)(lVar1 + lVar3) + 4)) {
  }
  *(uint *)(lVar1 + lVar3) = ~(uint)lVar1 + (int)param_1[1];
  return;
}

