/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a0d88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a0d88(void)

{
  longlong unaff_RSI;
  
  *(char *)(ulonglong)_DAT_14ccb08b1039d74c =
       *(char *)(ulonglong)_DAT_14ccb08b1039d74c + (char)_DAT_14ccb08b1039d74c;
  FUN_14076d028();
  *(int *)(unaff_RSI + 0x1cc) = *(int *)(unaff_RSI + 0x1cc) + 1;
  FUN_14076b2d6();
  return;
}

