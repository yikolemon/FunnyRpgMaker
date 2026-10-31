/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006364e */

void FUN_18006364e(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2 + 1;
  *param_2 = uVar1;
  if (uVar1 >> 0x3e == 0) {
    FUN_1800013e0(uVar1 * 4);
    *param_2 = *param_2 - 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

