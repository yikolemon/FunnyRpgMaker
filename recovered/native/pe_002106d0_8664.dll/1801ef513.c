/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef513 */

void FUN_1801ef513(longlong param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(param_1 + 0x2c8))(param_1,*param_2,0);
  *param_2 = (uint)((bVar1 & 0x40) == 0);
  return;
}

