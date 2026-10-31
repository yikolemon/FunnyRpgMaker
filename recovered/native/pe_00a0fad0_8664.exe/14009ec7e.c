/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009ec7e */

uint FUN_14009ec7e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = **(uint **)(param_1 + 8) >> 4 & 7;
  uVar1 = 5;
  if (uVar2 < 5) {
    uVar1 = uVar2;
  }
  return uVar1;
}

