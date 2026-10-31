/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400450f6 */

void FUN_1400450f6(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400066bc();
    }
    FUN_14004522c();
    uVar1 = FUN_140045188(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

