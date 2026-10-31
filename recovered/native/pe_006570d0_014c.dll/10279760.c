/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10279760 */

uint FUN_10279760(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xc000) != 0) {
    return uVar1 & 0xffffff00;
  }
  *param_1 = uVar1 | 0x8000;
  return CONCAT31((int3)((uVar1 | 0x8000) >> 8),1);
}

