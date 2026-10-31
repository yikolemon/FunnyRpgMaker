/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b87e */

void FUN_18007b87e(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800616b2(param_1,param_2);
    uVar1 = FUN_18007b914(*param_1,param_2,param_3,param_1);
    param_1[1] = uVar1;
  }
  return;
}

