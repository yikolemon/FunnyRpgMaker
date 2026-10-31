/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493324 */

uint __cdecl FUN_00493324(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  byte *extraout_ECX;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int local_30 [11];
  
  FUN_00488e30(local_30,(undefined4 *)0x0);
  bVar4 = 1;
  pbVar2 = extraout_ECX;
  pbVar3 = extraout_ECX;
  FUN_0048bdcf((undefined4 *)&stack0xffffffbc,param_1,param_2);
  uVar1 = FUN_0049336a(local_30,pbVar2,(undefined4 *)pbVar3,param_3,bVar4);
  FUN_00488e90(local_30);
  return uVar1;
}

