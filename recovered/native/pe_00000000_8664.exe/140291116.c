/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140291116 */

void FUN_140291116(longlong param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + -0xa8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4)) =
       &DAT_1404ca898;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)(param_1 + -0xac + (longlong)iVar1) = iVar1 + -0xa8;
  FUN_1402852d4(param_1 + -0xa0);
  return;
}

