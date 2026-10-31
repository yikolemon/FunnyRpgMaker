/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de130 */

void FUN_1400de130(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_1401ca390 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_1401ca390 = DAT_1401ca390 + -1;
    *(PVOID *)(&DAT_1401d45d0 + DAT_1401ca390 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

