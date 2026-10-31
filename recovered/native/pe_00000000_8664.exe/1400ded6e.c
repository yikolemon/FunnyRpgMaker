/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ded6e */

void FUN_1400ded6e(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  float fVar1;
  
  if (param_5 >= 3 && param_4 >= 0x1000000) {
    fVar1 = ((DAT_1401c86a4 + (float)param_5) * DAT_1402113a4) / (float)param_5;
    FUN_1400dc6f0(param_1,fVar1,param_5 < 3 || param_4 < 0x1000000,0,fVar1,param_5 + -1);
    FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

