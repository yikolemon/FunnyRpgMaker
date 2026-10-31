/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b670 */

void __fastcall FUN_0043b670(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x1d0))(param_1,*param_2,0);
  *param_2 = uVar1 >> 6 & 1;
  return;
}

