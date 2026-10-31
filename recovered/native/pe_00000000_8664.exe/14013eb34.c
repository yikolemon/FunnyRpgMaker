/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013eb34 */

void FUN_14013eb34(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x300))();
  *param_2 = uVar1;
  return;
}

