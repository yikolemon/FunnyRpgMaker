/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071d9a */

void FUN_140071d9a(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_14006b838();
    uVar1 = FUN_140071e2c(*param_3,*param_4,*param_1,param_1);
    param_1[1] = uVar1;
  }
  return;
}

