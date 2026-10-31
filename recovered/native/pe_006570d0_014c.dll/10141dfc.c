/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141dfc */

void __thiscall FUN_10141dfc(int param_1,uint param_2)

{
  undefined1 uVar1;
  
  FUN_10141e86(param_2);
  *(undefined1 *)(param_1 + 0x54) = 1;
  FUN_101424e4();
  uVar1 = 0;
  if ((((param_2 & 0xffbffffb) != 0x200000) &&
      (((undefined *)0x6 < &DAT_ffdffffa + param_2 ||
       ((0x49U >> ((uint)(&DAT_ffdffffa + param_2) & 0x1f) & 1) == 0)))) &&
     ((6 < param_2 - 0x600006 || ((0x49U >> (param_2 - 0x600006 & 0x1f) & 1) == 0)))) {
    uVar1 = 1;
    if ((((param_2 & 0xffbfffff) != 0x20000d) && ((param_2 & 0xffbffffb) != 0x200001)) &&
       ((undefined *)0x1 < &DAT_ffdffff9 + (param_2 & 0xffbfffff))) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x5a) = uVar1;
  return;
}

