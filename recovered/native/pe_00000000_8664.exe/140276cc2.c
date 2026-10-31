/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276cc2 */

void FUN_140276cc2(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_140276d58(param_1,param_2);
    uVar1 = FUN_140231140(*param_1,param_2,param_3,param_1);
    param_1[1] = uVar1;
  }
  return;
}

