/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf227 */

void FUN_1400cf227(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}

