/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402276a6 */

void FUN_1402276a6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (-1 < param_2) {
    lVar1 = FUN_1402128b0(param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402276da();
}

