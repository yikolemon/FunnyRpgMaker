/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bcd5b */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bcd5b(void)

{
  longlong unaff_RSI;
  
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  if ((((int)unaff_RSI != 0) && ((int)*(short *)(unaff_RSI + 0x1ba) < *(int *)(unaff_RSI + 0x40)))
     && (*(char *)(unaff_RSI + 0x1ed) == '\0')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_140754dc5();
  return;
}

