/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10261827 */

void __fastcall FUN_10261827(int param_1)

{
  if ((*(uint *)(param_1 + 0x1c) >> 5 & 1) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
  }
  FUN_10261ccf(0);
  return;
}

