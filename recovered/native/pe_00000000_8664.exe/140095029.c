/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095029 */

char FUN_140095029(uint param_1)

{
  char cVar1;
  
  if (((((*(int *)(DAT_140f2a910 + 0x167c) == 0) || (*(char *)(DAT_140f2a910 + 0x168e) != '\x01'))
       || ((param_1 >> 0x1a & 1) == 0)) ||
      (cVar1 = '\x02', *(int *)(DAT_140f2a910 + 0x167c) != *(int *)(DAT_140f2a910 + 0x1fe0))) &&
     (cVar1 = '\x01', *(char *)(DAT_140f2a910 + 0x21f4) == '\x01')) {
    return (*(longlong *)(DAT_140f2a910 + 0x2200) != 0 & *(byte *)(DAT_140f2a910 + 0x21f5)) + 1;
  }
  return cVar1;
}

