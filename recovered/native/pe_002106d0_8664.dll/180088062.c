/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088062 */

void FUN_180088062(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_18008819e();
    uVar1 = FUN_1800880fa(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

