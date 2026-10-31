/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028cd4e */

void FUN_14028cd4e(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_140272b82(param_1,param_2);
    uVar1 = FUN_14028cde4(*param_1,param_2,param_3,param_1);
    param_1[1] = uVar1;
  }
  return;
}

