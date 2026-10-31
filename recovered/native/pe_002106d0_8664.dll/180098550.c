/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180098550 */

void FUN_180098550(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (0x127350b8812735 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_18009867c(param_1,param_2);
    uVar1 = FUN_1800985e2(*param_1,param_2,param_1,param_4,param_1,uVar1);
    param_1[1] = uVar1;
  }
  return;
}

