/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014949d */

void FUN_1014949d(undefined1 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    *(byte *)(DAT_1039d74c + 0x1e48) = *(byte *)(DAT_1039d74c + 0x1e48) | 2;
    *(undefined1 *)(iVar1 + 0x1e6c) = param_1;
    *(char *)(iVar1 + 0x1e6d) = (char)param_2 + (param_2 == 0);
  }
  return;
}

