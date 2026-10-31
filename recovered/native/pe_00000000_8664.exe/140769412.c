/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769412 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769412(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
  pcVar1[0x185] = '\0';
  if (((*(float *)(pcVar1 + 0x15c) < *(float *)(pcVar1 + 0x144)) ||
      (*(float *)(pcVar1 + 0x160) < *(float *)(pcVar1 + 0x148))) && (pcVar1[0xfe] == '\0')) {
    FUN_140754dc5();
  }
  return;
}

