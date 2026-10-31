/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801974c8 */

uint FUN_1801974c8(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

