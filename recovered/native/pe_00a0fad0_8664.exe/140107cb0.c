/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107cb0 */

longlong FUN_140107cb0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) +
           (longlong)iVar1 + *param_2 + param_1;
  }
  return *param_2 + param_1;
}

