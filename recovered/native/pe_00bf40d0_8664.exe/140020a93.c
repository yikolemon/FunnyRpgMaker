/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020a93 */

undefined8 FUN_140020a93(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = FUN_140020a41(param_1,param_2 + *(int *)(param_1 + 0xc));
    return uVar1;
  }
  return 0x55;
}

