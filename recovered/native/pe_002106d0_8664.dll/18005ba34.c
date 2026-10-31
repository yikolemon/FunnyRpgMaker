/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005ba34 */

void FUN_18005ba34(longlong param_1)

{
  _set_se_translator(FUN_18006a476);
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802398e0();
}

