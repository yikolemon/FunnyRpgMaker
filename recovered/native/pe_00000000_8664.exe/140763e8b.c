/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763e8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140763e8b(void)

{
  if (*(int *)((ulonglong)_DAT_150b015dd + 0x1510) != 0) {
    return true;
  }
  return *(int *)((ulonglong)_DAT_150b015dd + 0x1514) != 0;
}

