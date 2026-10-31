/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c184c */

void FUN_1402c184c(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_1402c1988();
    uVar1 = FUN_1402c18e4(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

