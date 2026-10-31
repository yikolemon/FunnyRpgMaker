/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119d0e */

uint FUN_140119d0e(double param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (0.0 <= param_1) {
    uVar1 = -(uint)(param_1 != 0.0) & 1;
  }
  return uVar1;
}

