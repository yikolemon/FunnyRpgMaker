/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fcc12 */

uint FUN_100fcc12(uint param_1,float param_2)

{
  uint uVar1;
  
  param_2 = param_2 * *(float *)(DAT_1039d74c + 0xccc);
  if (param_2 < DAT_1028b430) {
    param_2 = param_2 * (float)(param_1 >> 0x18);
    uVar1 = (uint)param_2;
    param_1 = param_1 & 0xffffff |
              ((int)(param_2 - DAT_1028f6d0) & (int)uVar1 >> 0x1f | uVar1) << 0x18;
  }
  return param_1;
}

