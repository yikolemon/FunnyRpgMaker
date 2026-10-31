/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a9ddc */

void FUN_1800a9ddc(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_18006dd06();
    uVar1 = FUN_1800a9e6e(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

