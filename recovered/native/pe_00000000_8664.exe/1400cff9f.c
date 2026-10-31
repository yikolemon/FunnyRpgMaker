/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cff9f */

void FUN_1400cff9f(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14004863e(param_2,*(float *)(param_1 + 0x54) -
                                (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)));
  FUN_14007b71f(uVar1,0);
  return;
}

