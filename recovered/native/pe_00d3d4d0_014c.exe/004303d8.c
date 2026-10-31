/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004303d8 */

uint __fastcall FUN_004303d8(int param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (param_3 != 0) {
    FUN_0041c31c(**(int **)(param_1 + 0x24),uVar1,0x803,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return uVar1;
}

