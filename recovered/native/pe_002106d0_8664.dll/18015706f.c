/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015706f */

void FUN_18015706f(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1800eebe2(param_2,*(float *)(param_1 + 0x54) -
                                (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)));
  FUN_180102463(uVar1,0);
  return;
}

