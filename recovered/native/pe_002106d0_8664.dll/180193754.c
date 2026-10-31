/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180193754 */

void FUN_180193754(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5,
                  undefined4 param_6)

{
  float fVar1;
  
  if (2 < param_5 && 0xffffff < param_4) {
    fVar1 = ((DAT_1802bb8e0 + (float)param_5) * DAT_1802de654) / (float)param_5;
    FUN_18019117c(param_1,fVar1,param_3 + DAT_1802de848,0,fVar1,param_5 + -1);
    FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

