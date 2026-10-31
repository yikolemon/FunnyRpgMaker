/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cb26 */

void FUN_14003cb26(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2c8))(param_1,*param_2,0);
  *param_2 = uVar1 >> 6 & 1;
  return;
}

