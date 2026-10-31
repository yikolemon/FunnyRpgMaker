/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002516e */

uint FUN_14002516e(double param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= param_1) {
    uVar1 = -(uint)(param_1 != 0.0) & 1;
  }
  return uVar1;
}

