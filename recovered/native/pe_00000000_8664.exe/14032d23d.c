/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d23d */

char FUN_14032d23d(uint param_1)

{
  char cVar1;
  
  if (((((*(int *)(DAT_14062a630 + 0x167c) == 0) || (*(char *)(DAT_14062a630 + 0x168e) != '\x01'))
       || ((param_1 >> 0x1a & 1) == 0)) ||
      (cVar1 = '\x02', *(int *)(DAT_14062a630 + 0x167c) != *(int *)(DAT_14062a630 + 0x1fe0))) &&
     (cVar1 = '\x01', *(char *)(DAT_14062a630 + 0x21f4) == '\x01')) {
    return (*(longlong *)(DAT_14062a630 + 0x2200) != 0 & *(byte *)(DAT_14062a630 + 0x21f5)) + 1;
  }
  return cVar1;
}

