/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043926f */

int __cdecl FUN_0043926f(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[0x19] = param_2;
  if ((*(byte *)(iVar1 + 8) & 1) == 0) {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x21c) + 0x74))(iVar1,param_2,param_1 + 3);
    if (iVar1 != 0) {
      param_1[0x19] = -1;
      return iVar1;
    }
  }
  else {
    FUN_0041ea03(iVar1,param_2);
    FUN_00443f93(param_1);
  }
  return 0;
}

