/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bd6d */

char FUN_18011bd6d(uint param_1)

{
  char cVar1;
  
  if (((((*(int *)(DAT_180419160 + 0x167c) == 0) || (*(char *)(DAT_180419160 + 0x168e) != '\x01'))
       || ((param_1 >> 0x1a & 1) == 0)) ||
      (cVar1 = '\x02', *(int *)(DAT_180419160 + 0x167c) != *(int *)(DAT_180419160 + 0x1fe0))) &&
     (cVar1 = '\x01', *(char *)(DAT_180419160 + 0x21f4) == '\x01')) {
    return (*(longlong *)(DAT_180419160 + 0x2200) != 0 & *(byte *)(DAT_180419160 + 0x21f5)) + 1;
  }
  return cVar1;
}

