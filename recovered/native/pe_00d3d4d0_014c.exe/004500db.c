/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004500db */

void __fastcall FUN_004500db(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  FUN_00450125((int)param_1,iVar1);
  FUN_0041c607(iVar1,param_1[2]);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

