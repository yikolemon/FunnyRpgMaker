/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018e550 */

void FUN_14018e550(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_140f1c6b0 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_140f1c6b0 = DAT_140f1c6b0 + -1;
    *(PVOID *)(&DAT_140f32530 + DAT_140f1c6b0 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

