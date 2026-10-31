/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9054 */

uint FUN_101c9054(double param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= param_1) {
    uVar1 = -(uint)(param_1 != 0.0) & 1;
  }
  return uVar1;
}

