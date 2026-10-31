/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2fda */

uint FUN_1801d2fda(double param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= param_1) {
    uVar1 = -(uint)(param_1 != 0.0) & 1;
  }
  return uVar1;
}

