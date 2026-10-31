/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116891 */

void FUN_10116891(int param_1,uint param_2)

{
  if (((*(int *)(DAT_1039d74c + 0x2048) == param_1) && (*(char *)(DAT_1039d74c + 0x20d9) == '\x01'))
     && (*(int *)(DAT_1039d74c + 0x2050) == *(int *)(param_1 + 0x19c))) {
    *(uint *)(DAT_1039d74c + 0x20dc) = *(uint *)(DAT_1039d74c + 0x20dc) & 0xfffffff0 | param_2;
    return;
  }
  return;
}

