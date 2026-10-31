/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078a058 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078a058(longlong param_1)

{
  *(char *)(ulonglong)_DAT_14cc888b1039d74c =
       *(char *)(ulonglong)_DAT_14cc888b1039d74c + (char)_DAT_14cc888b1039d74c;
  if (*(char *)(param_1 + 0xfe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

