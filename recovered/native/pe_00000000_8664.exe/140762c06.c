/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140762c06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140762c06(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_1fe8808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1fe8808b1039d74c;
  return *(undefined4 *)pcVar1;
}

