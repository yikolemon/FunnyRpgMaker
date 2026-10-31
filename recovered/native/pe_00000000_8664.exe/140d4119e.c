/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140d4119e */

void FUN_140d4119e(void)

{
  code *pcVar1;
  uint unaff_retaddr;
  int local_res8;
  
  if ((0xfff < local_res8 * 2 + 2U) &&
     (0x1f < (unaff_retaddr - 4) - *(int *)((ulonglong)unaff_retaddr - 4))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_140dbd550();
  return;
}

