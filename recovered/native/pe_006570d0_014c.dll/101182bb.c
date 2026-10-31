/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101182bb */

int FUN_101182bb(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(DAT_1039d74c + 0x2250) == '\x01') {
    iVar1 = 0;
    if (*(int *)(DAT_1039d74c + 0x2270) != -1) {
      iVar1 = DAT_1039d74c + 0x2260;
    }
  }
  return iVar1;
}

