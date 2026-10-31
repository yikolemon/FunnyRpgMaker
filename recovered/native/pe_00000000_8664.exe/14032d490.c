/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032d490 */

void FUN_14032d490(int param_1)

{
  *(undefined4 *)
   ((longlong)*(int *)(DAT_14062a630 + 0x220c) * 8 +
    *(longlong *)(*(longlong *)(DAT_14062a630 + 0x2200) + 0x438) + 0x478 + (longlong)param_1 * 4) =
       0x7f7fffff;
  return;
}

