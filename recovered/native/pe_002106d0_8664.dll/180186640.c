/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180186640 */

void FUN_180186640(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800b52b4();
    uVar1 = FUN_1801866d8(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

