/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180193874 */

void FUN_180193874(longlong param_1,undefined8 param_2,undefined4 *param_3,uint param_4,
                  undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (0xffffff < param_4) {
    if (param_6 < 1) {
      uVar1 = FUN_180102463(*param_3,param_3[1]);
      param_6 = FUN_18018f50a(param_1,uVar1);
    }
    FUN_180191654(param_1,param_2,param_3,param_5,0,
                  ((DAT_1802bb8e0 + (float)param_6) * DAT_1802de654) / (float)param_6,param_6 + -1);
    FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_7,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

