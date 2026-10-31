/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014ef23 */

void FUN_14014ef23(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  return;
}

