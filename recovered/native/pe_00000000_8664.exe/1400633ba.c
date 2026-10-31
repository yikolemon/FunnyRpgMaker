/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400633ba */

void FUN_1400633ba(longlong *param_1,longlong param_2)

{
  if (param_2 <= *param_1) {
    *param_1 = *param_1 - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189b60(0xb);
}

