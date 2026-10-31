/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c0ecd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407c0ecd(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
  if (*(uint *)(pcVar1 + 0x1e8) != 0) {
    return *(undefined4 *)((ulonglong)*(uint *)(pcVar1 + 0x1e8) + 0xc);
  }
  return 0;
}

