/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00468111 */

void __fastcall FUN_00468111(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  FUN_00468135(param_1 + 4,iVar1);
  FUN_00468135(param_1 + 0xd,iVar1);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

