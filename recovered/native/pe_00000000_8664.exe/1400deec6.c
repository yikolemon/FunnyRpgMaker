/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400deec6 */

void FUN_1400deec6(longlong param_1,undefined8 param_2,undefined4 *param_3,uint param_4,
                  undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  if (0xffffff < param_4) {
    if (param_6 < 1) {
      uVar1 = FUN_14007b71f(*param_3,param_3[1]);
      param_6 = FUN_1400daa7e(param_1,uVar1);
    }
    FUN_1400dcbc8(param_1,param_2,param_3,param_5,0,
                  ((DAT_1401c86a4 + (float)param_6) * DAT_1402113a4) / (float)param_6,param_6 + -1);
    FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

