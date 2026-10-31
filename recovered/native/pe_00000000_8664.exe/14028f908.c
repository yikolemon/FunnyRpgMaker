/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028f908 */

void FUN_14028f908(longlong param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + -0x98 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4)) =
       &DAT_1404ca5b8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x98) + 4);
  *(int *)(param_1 + -0x9c + (longlong)iVar1) = iVar1 + -0x98;
  FUN_14028d25e(param_1 + -0x80);
  return;
}

