/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402870d0 */

void FUN_1402870d0(longlong param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + -0xb8 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4)) =
       &DAT_1404c9690;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb8) + 4);
  *(int *)(param_1 + -0xbc + (longlong)iVar1) = iVar1 + -0xb8;
  FUN_1402852d4(param_1 + -0xa0);
  return;
}

