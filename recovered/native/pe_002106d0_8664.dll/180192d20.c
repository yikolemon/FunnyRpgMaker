/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180192d20 */

void FUN_180192d20(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,float param_5
                  ,uint param_6)

{
  if (0xffffff < param_4) {
    if (param_5 < DAT_1802dbb2c || (param_6 & 0x1f0) == 0x100) {
      FUN_18018f8fc(param_1,6,4);
      FUN_18018fa56(param_1,param_2,param_3,param_4);
      return;
    }
    FUN_180192326(param_1,param_2,param_3,param_5,param_6);
    FUN_1801907e0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

