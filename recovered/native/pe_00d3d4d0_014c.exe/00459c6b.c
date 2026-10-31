/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00459c6b */

void __fastcall FUN_00459c6b(ushort *param_1,uint param_2)

{
  for (; 1 < param_2; param_2 = param_2 - 2) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}

