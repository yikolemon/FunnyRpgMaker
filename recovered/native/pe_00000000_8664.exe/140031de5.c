/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140031de5 */

int FUN_140031de5(longlong param_1)

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

