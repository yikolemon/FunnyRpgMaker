/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd006 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407bd006(void)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = _DAT_2308808b1039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_2308808b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_2308808b1039d74c;
  if (uVar1 != 0) {
    return *(undefined4 *)(pcVar2 + 0x40);
  }
  return 0;
}

