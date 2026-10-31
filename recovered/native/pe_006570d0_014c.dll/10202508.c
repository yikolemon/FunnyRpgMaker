/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10202508 */

void __fastcall FUN_10202508(uint *param_1,uint param_2)

{
  uint uVar1;
  
  for (; 3 < param_2; param_2 = param_2 - 4) {
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    param_1 = param_1 + 1;
  }
  return;
}

