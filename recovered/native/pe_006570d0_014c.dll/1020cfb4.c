/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020cfb4 */

uint __fastcall FUN_1020cfb4(int param_1,uint param_2)

{
  if (0x60 < param_2) {
    FUN_1020a812();
    return 0;
  }
  *(uint *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0xc) = param_2 + 7 >> 3;
  *(undefined2 *)(param_1 + 4) = 0x101;
  return param_2;
}

