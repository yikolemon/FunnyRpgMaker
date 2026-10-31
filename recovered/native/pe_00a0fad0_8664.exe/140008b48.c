/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140008b48 */

void FUN_140008b48(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + 1;
  *param_2 = lVar1;
  if (-1 < lVar1) {
    FUN_140006280(lVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

