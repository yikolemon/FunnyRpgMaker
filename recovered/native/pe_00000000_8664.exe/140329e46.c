/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140329e46 */

undefined4 FUN_140329e46(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x5000) != 0x1000) &&
     ((((param_1 >> 0xc & 1) == 0 || (*(char *)(DAT_14062a630 + 0x8d) == '\0')) &&
      ((param_1 & 0xffff0fff) != 0)))) {
    uVar1 = *(uint *)(DAT_14062a630 + 0x16e0 +
                     (longlong)((int)((param_1 & 0xffff0fff) - 0x200) >> 5) * 4);
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_1 & 0x1f) & 1) != 0);
  }
  return 0;
}

