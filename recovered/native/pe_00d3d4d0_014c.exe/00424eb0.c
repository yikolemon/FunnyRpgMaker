/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424eb0 */

uint __cdecl FUN_00424eb0(double param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= param_1) {
    uVar1 = -(uint)(param_1 != 0.0) & 1;
  }
  return uVar1;
}

