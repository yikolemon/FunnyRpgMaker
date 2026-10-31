/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010e508 */

void FUN_1010e508(int param_1)

{
  if (((*(byte *)(param_1 + 0xd) & 1) == 0) && (*(float *)(DAT_1039d74c + 0x26cc) <= 0.0)) {
    *(undefined4 *)(DAT_1039d74c + 0x26cc) = *(undefined4 *)(DAT_1039d74c + 0x4c);
  }
  return;
}

