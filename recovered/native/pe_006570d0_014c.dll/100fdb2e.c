/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fdb2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_100fdb2e(float *param_1,int param_2,int param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  float fVar2;
  
  iVar1 = DAT_1039d74c;
  if (param_4 != '\0') {
    param_3 = FUN_100fd57d(param_2,param_3);
  }
  if (param_2 == param_3) {
    param_1[1] = *(float *)(iVar1 + 0x1228);
    fVar2 = 0.0;
  }
  else {
    FUN_101937ae(param_1,*(float *)(iVar1 + 0x1228),0x7f7fffff,param_5,param_2,param_3,0);
    fVar2 = (float)(int)(*param_1 + _DAT_102b8a90);
  }
  *param_1 = fVar2;
  return param_1;
}

