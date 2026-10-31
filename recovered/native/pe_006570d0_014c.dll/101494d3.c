/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101494d3 */

void FUN_101494d3(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    *(byte *)(DAT_1039d74c + 0x1e48) = *(byte *)(DAT_1039d74c + 0x1e48) | 0x10;
    *(undefined4 *)(iVar1 + 0x1e78) = param_1;
  }
  return;
}

