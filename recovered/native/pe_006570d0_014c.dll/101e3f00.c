/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3f00 */

void __fastcall FUN_101e3f00(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x1d0))(param_1,*param_2,0);
  *param_2 = uVar1 >> 6 & 1;
  return;
}

