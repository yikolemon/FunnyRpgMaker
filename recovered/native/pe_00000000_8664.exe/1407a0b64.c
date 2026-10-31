/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a0b64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a0b64(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
  FUN_14075316c(*(undefined4 *)(pcVar1 + 0x1e4));
  return;
}

