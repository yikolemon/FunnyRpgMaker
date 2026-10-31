/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043b68b */

void __fastcall FUN_0043b68b(int param_1,uint *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(param_1 + 0x1d0))(param_1,*param_2,0);
  *param_2 = (uint)((bVar1 & 0x40) == 0);
  return;
}

