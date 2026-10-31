/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b6e3 */

void FUN_18011b6e3(longlong param_1,uint param_2)

{
  if (((*(longlong *)(DAT_180419160 + 0x2200) == param_1) &&
      (*(char *)(DAT_180419160 + 0x22a1) == '\x01')) &&
     (*(int *)(DAT_180419160 + 0x220c) == *(int *)(param_1 + 0x1b0))) {
    *(uint *)(DAT_180419160 + 0x22a4) = *(uint *)(DAT_180419160 + 0x22a4) & 0xfffffff0 | param_2;
    return;
  }
  return;
}

