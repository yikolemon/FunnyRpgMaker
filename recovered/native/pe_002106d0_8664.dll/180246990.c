/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180246990 */

void FUN_180246990(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_1804039f8 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_1804039f8 = DAT_1804039f8 + -1;
    *(PVOID *)(&DAT_180419240 + DAT_1804039f8 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

