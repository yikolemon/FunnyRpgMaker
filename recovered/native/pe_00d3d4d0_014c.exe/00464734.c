/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464734 */

uint __fastcall FUN_00464734(undefined4 *param_1,uint param_2)

{
  if (0x60 < param_2) {
    FUN_00461f8a((int *)*param_1,0x12);
    return 0;
  }
  param_1[2] = param_2;
  param_1[3] = param_2 + 7 >> 3;
  *(undefined2 *)(param_1 + 1) = 0x101;
  return param_2;
}

