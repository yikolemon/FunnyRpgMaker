/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a41f0 */

void FUN_1403a41f0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,float param_5
                  ,uint param_6)

{
  if (0xffffff < param_4) {
    if (param_5 < DAT_1404ecffc || (param_6 & 0x1f0) == 0x100) {
      FUN_1403a0dcc(param_1,6,4);
      FUN_1403a0f26(param_1,param_2,param_3,param_4);
      return;
    }
    FUN_1403a37f6(param_1,param_2,param_3,param_5,param_6);
    FUN_1403a1cb0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

