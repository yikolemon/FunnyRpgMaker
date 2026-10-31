/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00442612 */

void __fastcall FUN_00442612(undefined4 *param_1)

{
  int iVar1;
  
  param_1[0x65] = 0;
  iVar1 = param_1[2];
  FUN_0041c607(iVar1,param_1[0x57]);
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  FUN_0041c607(iVar1,param_1[0x6f]);
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  FUN_0041c607(iVar1,param_1[100]);
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  FUN_0041c607(iVar1,param_1[0x59]);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_0041c607(iVar1,(int)param_1);
  return;
}

