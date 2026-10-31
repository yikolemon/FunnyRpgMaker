/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b918 */

uint __fastcall FUN_0041b918(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf0;
  if (uVar1 == 0 && (param_1 & 0xf0) != 0) {
    param_2 = param_2 & 0xffffff00 | (param_2 & 0xf) << 4;
  }
  else if ((param_1 & 0xf0) == 0 && uVar1 != 0) {
    param_2 = param_2 & 0xffffff00 | uVar1 >> 4;
  }
  return param_2;
}

