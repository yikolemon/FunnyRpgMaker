/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140016c23 */

undefined8 *
FUN_140016c23(undefined8 *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4,uint param_5)

{
  if ((int)param_5 < 0) {
    param_5 = 6;
  }
  else if (999999999 < param_5) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  FUN_1400153b0(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

