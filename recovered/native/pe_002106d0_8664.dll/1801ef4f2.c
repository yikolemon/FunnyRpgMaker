/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef4f2 */

void FUN_1801ef4f2(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2c8))(param_1,*param_2,0);
  *param_2 = uVar1 >> 6 & 1;
  return;
}

