/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102024f3 */

void __fastcall FUN_102024f3(ushort *param_1,uint param_2)

{
  for (; 1 < param_2; param_2 = param_2 - 2) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}

