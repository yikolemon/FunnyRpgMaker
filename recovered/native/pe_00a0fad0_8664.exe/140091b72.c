/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140091b72 */

void FUN_140091b72(longlong *param_1,longlong param_2)

{
  if (param_2 <= *param_1) {
    *param_1 = *param_1 - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9f90(0xb);
}

