/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400993d8 */

void FUN_1400993d8(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (0x127350b8812735 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_140099504(param_1,param_2);
    uVar1 = FUN_14009946a(*param_1,param_2,param_1,param_4,param_1,uVar1);
    param_1[1] = uVar1;
  }
  return;
}

