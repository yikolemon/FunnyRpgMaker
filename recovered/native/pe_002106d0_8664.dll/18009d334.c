/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d334 */

uint FUN_18009d334(longlong param_1)

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

