/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018c1dc */

void __thiscall
FUN_1018c1dc(int param_1,undefined4 param_2,float param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  if (2 < param_5 && 0xffffff < param_4) {
    FUN_10189cf2(param_2,param_3 + DAT_102b8d58,0,
                 ((DAT_102b8a50 + (float)param_5) * DAT_102b956c) / (float)param_5,param_5 + -1);
    FUN_101888a4(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_4,param_6,
                 0x200);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

