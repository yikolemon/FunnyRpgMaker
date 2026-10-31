/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022c43a */

void FUN_14022c43a(longlong *param_1,longlong param_2)

{
  if (param_2 <= *param_1) {
    *param_1 = *param_1 - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044af80(0xb);
}

