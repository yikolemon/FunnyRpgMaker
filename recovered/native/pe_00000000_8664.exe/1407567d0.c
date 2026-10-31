/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407567d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407567d0(void)

{
  char *pcVar1;
  int unaff_retaddr;
  
  if (unaff_retaddr == 0) {
    pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
    *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
    unaff_retaddr = *(int *)(pcVar1 + 0x3c);
  }
  FUN_14075b25c(unaff_retaddr,0);
  return;
}

