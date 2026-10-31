/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084760 */

void FUN_140084760(undefined8 param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = (ulonglong)(*(int *)(lVar1 + (DAT_1401cc6c0 - DAT_1401cc6b8)) + 4) +
          (DAT_1401cc6c0 - DAT_1401cc6b8);
  lVar2 = (ulonglong)(*(int *)(lVar1 + 4 + lVar2) + 4) + lVar2 + 4;
  lVar2 = (ulonglong)(*(int *)(lVar1 + lVar2) + 4) + lVar2;
  lVar2 = (ulonglong)(*(int *)(lVar1 + lVar2) + 4) + lVar2;
  for (lVar2 = (ulonglong)(*(int *)(lVar1 + lVar2) + 4) + lVar2;
      *(int *)(lVar1 + lVar2) != *param_3 + -1;
      lVar2 = lVar2 + (ulonglong)(*(int *)(lVar1 + lVar2) + 4)) {
  }
  *(uint *)(lVar1 + lVar2) = ~(uint)lVar1 + (int)param_2[1];
  return;
}

