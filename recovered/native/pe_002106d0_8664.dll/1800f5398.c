/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5398 */

void FUN_1800f5398(longlong param_1)

{
  FUN_1800f63f4(param_1);
  FUN_1800f54c6(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

