/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bba2c */

void FUN_1402bba2c(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (0x199999999999999 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_1402bbb78();
    uVar1 = FUN_1402bbac4(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

