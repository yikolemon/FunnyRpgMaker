/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10219ecd */

uint __thiscall FUN_10219ecd(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x10 < param_1);
  if (param_1 < (param_2 & 0xffff)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

