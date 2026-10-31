/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a7b5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075a7b5(void)

{
  char *pcVar1;
  int unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)_DAT_151088891039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_151088891039d74c;
  pcVar1[0x1524] = '\0';
  if ((unaff_retaddr != 0) && (*(int *)(pcVar1 + 0x1514) != unaff_retaddr)) {
    pcVar1[0x151c] = '\0';
    pcVar1[0x151d] = '\0';
    pcVar1[0x151e] = '\0';
    pcVar1[0x151f] = '\0';
    pcVar1[0x1520] = '\0';
    pcVar1[0x1521] = '\0';
    pcVar1[0x1522] = '\0';
    pcVar1[0x1523] = '\0';
  }
  return;
}

