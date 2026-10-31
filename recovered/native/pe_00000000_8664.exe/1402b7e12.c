/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b7e12 */

void FUN_1402b7e12(longlong param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       &DAT_1404cb570;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_1402b531c(param_1 + -0x80);
  return;
}

