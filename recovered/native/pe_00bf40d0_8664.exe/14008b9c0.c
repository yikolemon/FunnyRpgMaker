/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b9c0 */

void FUN_14008b9c0(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_14012ec58 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_14012ec58 = DAT_14012ec58 + -1;
    *(PVOID *)(&DAT_14013d3a0 + DAT_14012ec58 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

