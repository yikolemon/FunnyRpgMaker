/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043eb6 */

void FUN_140043eb6(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  FUN_1400440fa(param_1);
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}

