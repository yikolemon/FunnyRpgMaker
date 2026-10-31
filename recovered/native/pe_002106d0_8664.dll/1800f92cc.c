/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f92cc */

void FUN_1800f92cc(longlong *param_1)

{
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0xb8) != '\x01')))) {
    FUN_1800f92fe();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(4);
}

