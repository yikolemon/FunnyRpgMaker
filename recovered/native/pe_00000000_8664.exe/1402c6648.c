/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c6648 */

void FUN_1402c6648(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_1402c6784();
    uVar1 = FUN_1402c66e0(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

