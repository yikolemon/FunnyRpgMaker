/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009527c */

void FUN_14009527c(int param_1)

{
  *(undefined4 *)
   ((longlong)*(int *)(DAT_140f2a910 + 0x220c) * 8 +
    *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x2200) + 0x438) + 0x478 + (longlong)param_1 * 4) =
       0x7f7fffff;
  return;
}

