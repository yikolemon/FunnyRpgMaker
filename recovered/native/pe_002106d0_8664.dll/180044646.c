/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044646 */

void FUN_180044646(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800428f6();
    uVar1 = FUN_1800446d8(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

