/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14036853f */

void FUN_14036853f(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1403000b2(param_2,*(float *)(param_1 + 0x54) -
                                (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)));
  FUN_140313933(uVar1,0);
  return;
}

