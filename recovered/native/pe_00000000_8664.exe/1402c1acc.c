/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1acc */

void FUN_1402c1acc(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_14027f1d6();
    uVar1 = FUN_1402c1b5e(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

