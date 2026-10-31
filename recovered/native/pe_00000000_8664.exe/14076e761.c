/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e761 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076e761(void)

{
  char *pcVar1;
  uint unaff_retaddr;
  uint local_res8;
  
  pcVar1 = (char *)(ulonglong)_DAT_204888391039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_204888391039d74c;
  if (((*pcVar1 == '\0') && (pcVar1[0x20d9] == '\x01')) &&
     (*(int *)(pcVar1 + 0x2050) == *(int *)((ulonglong)unaff_retaddr + 0x19c))) {
    *(uint *)(pcVar1 + 0x20dc) = *(uint *)(pcVar1 + 0x20dc) & 0xfffffff0 | local_res8;
    return;
  }
  return;
}

