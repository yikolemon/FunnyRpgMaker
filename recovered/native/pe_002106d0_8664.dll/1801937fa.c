/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801937fa */

void FUN_1801937fa(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  float fVar1;
  
  if (param_5 >= 3 && param_4 >= 0x1000000) {
    fVar1 = ((DAT_1802bb8e0 + (float)param_5) * DAT_1802de654) / (float)param_5;
    FUN_18019117c(param_1,fVar1,param_5 < 3 || param_4 < 0x1000000,0,fVar1,param_5 + -1);
    FUN_1801907e0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

