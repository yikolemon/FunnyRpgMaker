/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075355f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075355f(void)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)_DAT_1e4888831039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1e4888831039d74c;
  *(undefined1 (*) [16])(pcVar1 + 0x1e60) = ZEXT416(unaff_retaddr);
  return;
}

