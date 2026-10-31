/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004027ed */

uint __cdecl FUN_004027ed(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (0xfff < param_1) {
    uVar1 = FUN_0040280e(param_1);
    return uVar1;
  }
  uVar1 = FUN_0047f230(param_1);
  return uVar1;
}

