/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769d32 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769d32(void)

{
  *(char *)(ulonglong)_DAT_1ed088831039d74c =
       *(char *)(ulonglong)_DAT_1ed088831039d74c + (char)_DAT_1ed088831039d74c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

