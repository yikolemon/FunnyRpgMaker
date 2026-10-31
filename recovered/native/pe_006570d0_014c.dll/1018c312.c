/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018c312 */

void __thiscall
FUN_1018c312(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
            int param_6,undefined4 param_7)

{
  float10 fVar1;
  
  if (0xffffff < param_4) {
    if (param_6 < 1) {
      fVar1 = (float10)FUN_100fdbca(*param_3,param_3[1]);
      param_6 = FUN_101880ee((float)fVar1);
    }
    FUN_1018a276(param_2,param_3,param_5,0,
                 ((DAT_102b8a50 + (float)param_6) * DAT_102b956c) / (float)param_6,param_6 + -1);
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_4,param_7,
                 0x200);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

