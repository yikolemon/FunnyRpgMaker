/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001af6a */

void FUN_18001af6a(longlong *param_1,longlong param_2)

{
  if (param_2 <= *param_1) {
    *param_1 = *param_1 - param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0xb);
}

