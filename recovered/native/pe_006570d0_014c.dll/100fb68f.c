/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb68f */

void FUN_100fb68f(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1e48) = *(uint *)(DAT_1039d74c + 0x1e48) | 1;
  *(undefined4 *)(iVar1 + 0x1e60) = param_1;
  return;
}

