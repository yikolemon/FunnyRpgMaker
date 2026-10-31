/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140212886 */

void FUN_140212886(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + 1;
  *param_2 = lVar1;
  if (-1 < lVar1) {
    FUN_1402128b0(lVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

