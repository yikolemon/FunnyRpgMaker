/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9590 */

int FUN_100f9590(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 & 0xf000) != 0) && (param_2 - 1 < (param_2 ^ param_2 - 1))) {
    uVar1 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((uVar1 & 0x1c) == 0xc) {
      param_2 = uVar1 + 0x28b;
    }
  }
  return param_2 * 0x10 + param_1 + -0x1ef4;
}

