/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e036 */

void FUN_14000e036(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400066bc();
    }
    FUN_14000e16c();
    uVar1 = FUN_14000e0c8(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

