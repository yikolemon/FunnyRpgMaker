/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028612a */

void FUN_1028612a(void)

{
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    if (unaff_EDI != 0) {
      *(byte *)((&DAT_103a5230)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) =
           *(byte *)((&DAT_103a5230)[(int)*unaff_ESI >> 6] + 0x28 + (*unaff_ESI & 0x3f) * 0x38) &
           0xfe;
    }
    ___acrt_lowio_unlock_fh(*unaff_ESI);
  }
  return;
}

