/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019355a */

void FUN_18019355a(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5,
                  undefined4 param_6)

{
  int iVar1;
  
  if (DAT_1802dbb2c <= param_3 && 0xffffff < param_4) {
    if (param_5 < 1) {
      FUN_180190b44(param_1,param_2,param_3 + DAT_1802de848,0,0x30,0);
      iVar1 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar1;
    }
    else {
      iVar1 = FUN_18012bcdf(param_5,3,0x200);
      FUN_18019117c(param_1,param_2,param_3 + DAT_1802de848,0,
                    ((DAT_1802bb8e0 + (float)iVar1) * DAT_1802de654) / (float)iVar1,iVar1 + -1);
      iVar1 = *(int *)(param_1 + 0x50);
    }
    FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),iVar1,param_4,param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

