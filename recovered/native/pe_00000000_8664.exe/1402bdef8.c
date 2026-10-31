/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bdef8 */

void FUN_1402bdef8(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_1402bdf8a();
    uVar1 = FUN_1402bbbbb(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

