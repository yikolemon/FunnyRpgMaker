/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002684 */

void FUN_140002684(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + 1;
  *param_2 = lVar1;
  if (-1 < lVar1) {
    FUN_140001fba(lVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

