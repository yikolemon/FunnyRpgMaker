/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008da60 */

longlong FUN_14008da60(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) +
           (longlong)iVar1 + *param_2 + param_1;
  }
  return *param_2 + param_1;
}

