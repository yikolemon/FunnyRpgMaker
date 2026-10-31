/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026958f */

void FUN_1026958f(void)

{
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    __acrt_stdio_free_stream(*(undefined4 *)(unaff_EBP + -0x1c));
  }
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}

