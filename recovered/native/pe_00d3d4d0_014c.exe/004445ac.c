/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004445ac */

uint __cdecl FUN_004445ac(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (-1 < param_2) {
    uVar1 = 0;
    if (0 < param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    return uVar1;
  }
  return param_2 - param_3 >> 0x1f & param_2 - param_3;
}

