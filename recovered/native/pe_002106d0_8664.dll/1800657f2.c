/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800657f2 */

void FUN_1800657f2(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_180065888(param_1,param_2);
    uVar1 = FUN_18001fc70(*param_1,param_2,param_3,param_1);
    param_1[1] = uVar1;
  }
  return;
}

