/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00459c80 */

void __fastcall FUN_00459c80(uint *param_1,uint param_2)

{
  uint uVar1;
  
  for (; 3 < param_2; param_2 = param_2 - 4) {
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    param_1 = param_1 + 1;
  }
  return;
}

