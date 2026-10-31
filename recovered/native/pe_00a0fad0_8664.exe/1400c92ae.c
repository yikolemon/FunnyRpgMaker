/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c92ae */

void FUN_1400c92ae(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x199999999999999 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_1400c93fa();
    uVar1 = FUN_1400c9346(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

