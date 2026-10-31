/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113b6a */

undefined4 __fastcall FUN_10113b6a(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x5000) != 0x1000) &&
     ((((param_1 >> 0xc & 1) == 0 || (*(char *)(DAT_1039d74c + 0x79) == '\0')) &&
      ((param_1 & 0xffff0fff) != 0)))) {
    uVar1 = *(uint *)(DAT_1039d74c + 0x1588 + ((int)((param_1 & 0xffff0fff) - 0x200) >> 5) * 4);
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_1 & 0x1f) & 1) != 0);
  }
  return 0;
}

