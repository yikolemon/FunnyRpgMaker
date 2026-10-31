/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400decc8 */

void FUN_1400decc8(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5,
                  undefined4 param_6)

{
  float fVar1;
  
  if (2 < param_5 && 0xffffff < param_4) {
    fVar1 = ((DAT_1401c86a4 + (float)param_5) * DAT_1402113a4) / (float)param_5;
    FUN_1400dc6f0(param_1,fVar1,param_3 + DAT_1402115a8,0,fVar1,param_5 + -1);
    FUN_1400db1c8(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

