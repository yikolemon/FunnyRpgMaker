/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111e7d */

void FUN_10111e7d(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 0x800;
  *(undefined4 *)(iVar1 + 0x1f34) = param_1;
  return;
}

