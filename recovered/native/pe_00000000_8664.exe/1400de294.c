/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400de294 */

void FUN_1400de294(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,float param_5
                  ,uint param_6)

{
  if (0xffffff < param_4) {
    if (param_5 < DAT_1401c86a0 || (param_6 & 0x1f0) == 0x100) {
      FUN_1400dae70(param_1,6,4);
      FUN_1400dafca(param_1,param_2,param_3,param_4);
      return;
    }
    FUN_1400dd89a(param_1,param_2,param_3,param_5,param_6);
    FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

