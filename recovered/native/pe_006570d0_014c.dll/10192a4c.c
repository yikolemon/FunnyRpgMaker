/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192a4c */

undefined4 __thiscall FUN_10192a4c(int param_1,uint param_2,uint param_3)

{
  param_2 = param_2 >> 0xd;
  if (param_2 <= param_3 >> 0xd) {
    do {
      if ((param_2 < 8) && ((*(byte *)(param_1 + 0x28) >> (param_2 & 0x1f) & 1) != 0)) {
        return 0;
      }
      param_2 = param_2 + 1;
    } while ((param_3 >> 0xd) + 1 != param_2);
  }
  return 1;
}

