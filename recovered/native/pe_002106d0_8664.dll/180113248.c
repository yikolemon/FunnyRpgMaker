/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180113248 */

void FUN_180113248(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*(float *)(DAT_180419160 + 0x2974) <= 0.0)) {
    *(undefined4 *)(DAT_180419160 + 0x2974) = *(undefined4 *)(DAT_180419160 + 0x4c);
  }
  return;
}

