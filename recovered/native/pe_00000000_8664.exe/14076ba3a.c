/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ba3a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076ba3a(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x5000) != 0x1000) &&
     (((0xfff < (param_1 & 0x5000) || (*(char *)((ulonglong)_DAT_ce1ba0f1039d74c + 0x79) == '\0'))
      && ((param_1 & 0xffff0fff) != 0)))) {
    uVar1 = *(uint *)((ulonglong)_DAT_ce1ba0f1039d74c + 0x1588 +
                     (ulonglong)(uint)((int)((param_1 & 0xffff0fff) - 0x200) >> 5) * 4);
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_1 & 0x1f) & 1) != 0);
  }
  return 0;
}

