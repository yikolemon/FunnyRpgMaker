/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032cbb3 */

void FUN_14032cbb3(longlong param_1,uint param_2)

{
  if (((*(longlong *)(DAT_14062a630 + 0x2200) == param_1) &&
      (*(char *)(DAT_14062a630 + 0x22a1) == '\x01')) &&
     (*(int *)(DAT_14062a630 + 0x220c) == *(int *)(param_1 + 0x1b0))) {
    *(uint *)(DAT_14062a630 + 0x22a4) = *(uint *)(DAT_14062a630 + 0x22a4) & 0xfffffff0 | param_2;
    return;
  }
  return;
}

