/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018b85a */

void __thiscall
FUN_1018b85a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,float param_5,
            uint param_6)

{
  if (0xffffff < param_4) {
    if (DAT_102b70e0 <= param_5 && (param_6 & 0x1f0) != 0x100) {
      FUN_1018ae44(param_2,param_3,param_5,param_6);
      FUN_10189368(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38),param_4);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      FUN_10188516(6,4);
      FUN_10188672(param_2,param_3,param_4);
    }
  }
  return;
}

