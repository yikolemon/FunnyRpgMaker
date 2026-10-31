/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c261 */

int FUN_18003c261(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = iVar1 + -0xc;
  if (iVar1 < 0xd) {
    iVar2 = iVar1;
  }
  return iVar2;
}

