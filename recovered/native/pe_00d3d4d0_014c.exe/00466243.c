/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466243 */

void __fastcall FUN_00466243(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  FUN_00466c6d(param_1 + 0x11,iVar1);
  FUN_00466c6d(param_1 + 7,iVar1);
  FUN_0041c607(iVar1,param_1[2]);
  param_1[2] = 0;
  FUN_0041c607(iVar1,param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}

