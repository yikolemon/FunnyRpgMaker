/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ca7c */

void FUN_14003ca7c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x300))();
  *param_2 = uVar1;
  return;
}

