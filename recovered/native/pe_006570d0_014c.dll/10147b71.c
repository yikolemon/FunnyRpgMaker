/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147b71 */

void FUN_10147b71(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 | 0x100000;
  if ((param_1 & 0x700000) != 0) {
    uVar2 = param_1;
  }
  uVar1 = uVar2 | 0x800000;
  if ((uVar2 & 0x1800000) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x2000000;
  if ((uVar1 & 0x6000000) != 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x8000000;
  if ((uVar2 & 0x18000000) != 0) {
    uVar1 = uVar2;
  }
  *(uint *)(DAT_1039d74c + 0x2560) = uVar1;
  return;
}

