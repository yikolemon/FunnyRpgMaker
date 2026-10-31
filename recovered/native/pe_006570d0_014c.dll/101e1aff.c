/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e1aff */

int FUN_101e1aff(int *param_1,int param_2)

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
    FUN_101c2486(iVar1,param_2);
    FUN_101ec81e();
  }
  return 0;
}

