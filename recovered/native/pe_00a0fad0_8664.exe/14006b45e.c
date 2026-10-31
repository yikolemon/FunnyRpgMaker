/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b45e */

void FUN_14006b45e(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_14006b59a();
    uVar1 = FUN_14006b4f6(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

