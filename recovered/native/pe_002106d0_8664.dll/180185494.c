/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185494 */

void FUN_180185494(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800bb27a();
    uVar1 = FUN_180185526(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

