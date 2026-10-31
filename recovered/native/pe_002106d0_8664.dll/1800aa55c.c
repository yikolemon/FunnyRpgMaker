/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa55c */

void FUN_1800aa55c(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x199999999999999 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800aa6a8();
    uVar1 = FUN_1800aa5f4(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

