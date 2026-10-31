/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044b210(longlong param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = (*ram0x00014059dd60)();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

