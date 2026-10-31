/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101145b7 */

void FUN_101145b7(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1e48) = *(uint *)(DAT_1039d74c + 0x1e48) | 4;
  *(undefined4 *)(iVar1 + 0x1e64) = param_1;
  *(undefined4 *)(iVar1 + 0x1e68) = param_2;
  return;
}

