/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00476acb */

void __fastcall
FUN_00476acb(byte *param_1,int param_2,int *param_3,undefined *param_4,int param_5,int param_6)

{
  param_3[1] = -param_3[1];
  param_3[3] = -param_3[3];
  param_3[5] = -param_3[5];
  if (param_2 != 2) {
    param_3[7] = -param_3[7];
  }
  FUN_0047695f(param_1,param_2,param_3,param_4,-param_6,-param_5);
  param_3[1] = -param_3[1];
  return;
}

