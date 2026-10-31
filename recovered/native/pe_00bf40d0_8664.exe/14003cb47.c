/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cb47 */

void FUN_14003cb47(longlong param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(param_1 + 0x2c8))(param_1,*param_2,0);
  *param_2 = (uint)((bVar1 & 0x40) == 0);
  return;
}

