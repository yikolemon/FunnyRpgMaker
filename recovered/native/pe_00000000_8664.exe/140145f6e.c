/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145f6e */

void FUN_140145f6e(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  FUN_1401461b2();
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}

