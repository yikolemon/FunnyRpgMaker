/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075bad9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075bad9(void)

{
  char *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)_DAT_152888391039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_152888391039d74c;
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 0x152c) = unaff_retaddr;
  }
  if (*(int *)(pcVar1 + 0x1554) == unaff_retaddr) {
    pcVar1[0x155d] = '\x01';
  }
  return;
}

