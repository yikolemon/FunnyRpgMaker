/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ede0 */

int FUN_1010ede0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x86);
  if ((-1 < iVar1) && (iVar1 < *(int *)(DAT_1039d74c + 0xc9c))) {
    return iVar1 * 0x28 + *(int *)(DAT_1039d74c + 0xca4);
  }
  return DAT_1039d74c + 0x1ffc;
}

