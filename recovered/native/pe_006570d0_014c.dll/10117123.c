/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117123 */

void FUN_10117123(int param_1)

{
  *(undefined4 *)
   (*(int *)(DAT_1039d74c + 0x2050) * 8 + *(int *)(*(int *)(DAT_1039d74c + 0x2048) + 0x3b8) + 0x3ec
   + param_1 * 4) = 0x7f7fffff;
  return;
}

