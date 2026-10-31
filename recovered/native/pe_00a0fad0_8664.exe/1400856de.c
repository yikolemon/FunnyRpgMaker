/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400856de */

void FUN_1400856de(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_140016e00(param_1,param_2);
    uVar1 = FUN_140085774(*param_1,param_2,param_3,param_1);
    param_1[1] = uVar1;
  }
  return;
}

