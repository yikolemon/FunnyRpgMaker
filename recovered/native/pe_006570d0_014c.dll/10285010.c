/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285010 */

uint FUN_10285010(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar1 = (uint)in_FPUStatusWord;
  uVar1 = ((in_FPUStatusWord >> 2 & 8 | uVar1 & 0x10) >> 2 | uVar1 & 8) >> 1 |
          ((uVar1 & 2) << 3 | uVar1 & 4) * 2 | (uVar1 & 1) << 4;
  if (DAT_1039d7b4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = MXCSR & 0x3f;
  }
  uVar2 = ((uVar2 >> 2 & 8 | uVar2 & 0x10) >> 2 | uVar2 & 8) >> 1 |
          ((uVar2 & 2) << 3 | uVar2 & 4) * 2 | (uVar2 & 1) << 4;
  return (uVar2 << 8 | uVar1) << 0x10 | uVar2 | uVar1;
}

