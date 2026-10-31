/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285600 */

uint FUN_10285600(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0xe & 0x300;
  uVar1 = 0xffffffff;
  if (uVar2 == (param_1 >> 0x16 & 0x300)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

