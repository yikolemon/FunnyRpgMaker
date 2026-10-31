/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c4f94 */

void FUN_1400c4f94(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 | 0x100000;
  if ((param_1 & 0x700000) != 0) {
    uVar1 = param_1;
  }
  uVar2 = uVar1 | 0x800000;
  if ((uVar1 & 0x1800000) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x2000000;
  if ((uVar2 & 0x6000000) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x8000000;
  if ((uVar1 & 0x18000000) != 0) {
    uVar2 = uVar1;
  }
  *(uint *)(DAT_140f2a910 + 0x27dc) = uVar2;
  return;
}

